#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

enum Filter {Blur = 1, Gaussian, Median, Biliteral};

const static int delayShort = 200;
const static int delayLong = 400;
const static int LengthKernel = 31;
static Mat src, dst;

void    displayCaption(std::string &nameWindow, const char *caption);
void    showImage(std::string &nameWindow, int delay);

int main() {

	src = imread("Mars.jpg");
	if (src.empty())
	{
		std::cout << "Invalid image (empty) !" << std::endl;
		return -1;
	}

	std::string nameWindow = "Blur";
	namedWindow(nameWindow);
	namedWindow("Original");
	moveWindow(nameWindow, src.cols, 0);


	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"
	          << "Choose filter 1 - 4 ";
	int numFilter;
	std::cin >> numFilter;
	Filter filter = Blur;
	if (numFilter > 0 && numFilter < 5){
		if (numFilter == Gaussian)
			filter = Gaussian;
		else if (numFilter == Median)
			filter = Median;
		else
			filter = Biliteral;
	}

	switch(filter){
		case Blur:
			displayCaption(nameWindow, "Blur");
			for (int i = 1; i < LengthKernel; i = i + 2) {
				blur(src, dst, Size(i, i), Point(-1, -1));
				showImage(nameWindow, delayLong);
			}
			break ;
		case Gaussian:
			displayCaption(nameWindow, "Gaussian Blur");
			for (int i = 1; i < LengthKernel; i = i + 2) {
				GaussianBlur(src, dst, Size(i, i), 0, 0);
				showImage(nameWindow, delayLong);
			}
			break ;
		case Median:
			displayCaption(nameWindow, "Median Blur");
			for (int i = 1; i < LengthKernel; i = i + 2) {
				medianBlur(src, dst, i);
				showImage(nameWindow, delayLong);
			}
			break ;
		case Biliteral:
			displayCaption(nameWindow, "Bilateral Blur");
			for (int i = 1; i < LengthKernel; i = i + 2) {
				bilateralFilter(src, dst, i, i * 2, i / 2);
				showImage(nameWindow, delayLong);
			}
			break ;
		default:
			break ;
	}

	displayCaption(nameWindow, "It's over");
	return 0;
}

void    displayCaption(std::string &nameWindow, const char *caption){

	dst = Mat::zeros(src.size(), src.type());
	putText(dst, caption,
	        Point(src.cols / 4, src.rows / 2),
	        FONT_HERSHEY_COMPLEX, 1, Scalar(255, 255, 255));
	showImage(nameWindow, delayShort);
}

void    showImage(std::string &nameWindow, int delay)
{
	imshow(nameWindow, dst);
	imshow("Original", src);
	waitKey(delay);
}
