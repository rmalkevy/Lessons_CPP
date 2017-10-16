#include <iostream>

class RC {
private:
	int     count;

public:
	void    addRef() { count++; }
	int     release() { return --count; }
};

template <typename T> class SP {
private:
	T*  pData;
	RC* reference;

public:
	SP() : pData(nullptr), reference(nullptr) {
		reference = new RC;
		reference->addRef();
	}
	explicit SP(T *pValue) : pData(pValue), reference(nullptr) {
		reference = new RC;
		reference->addRef();
	}
	explicit SP(const SP<T*> &sp) : pData(sp.pData), reference(sp.reference) {}
	~SP(){
		if (reference->release() == 0){
			delete reference;
			delete pData;
		}
	}

	T &operator* () { return *pData; }
	T *operator->() { return  pData; }

	SP<T> &operator = (const SP<T> &sp){
		if (reference->release() == 0){
			delete pData;
			delete reference;
		}
		pData = sp.pData;
		reference = sp.reference;
		reference->addRef();
		return *this;
	}
};

class Film {
private:
	std::string nameFilm;
	std::string mainActor;
	int         rate;

public:
	Film(std::string &nameFilmI, std::string &actorI, int &rateI) {
		nameFilm = nameFilmI;
		mainActor = actorI;
		rate = rateI;
	}
	void displayInfo() {
		std::cout << nameFilm << " Actor " << mainActor << " Rate " << rate << std::endl;
	}
};

int main() {

	std::string nameFilm = "Inception";
	std::string mainActor = "Leo Dicaprio";
	int rate = 9;
	SP<Film> Inception(new Film(nameFilm, mainActor, rate));

	Inception->displayInfo();

	return 0;
}