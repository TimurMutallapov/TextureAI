#include <opencv2/opencv.hpp>
#include "iostream"

using namespace cv;
using namespace std;

int main()
{
	Mat src1;
	src1 = imread("try4.jpg", IMREAD_COLOR);
	namedWindow("Original image", WINDOW_AUTOSIZE);
	imshow("Original image", src1);

	Mat gray, edge, draw;
	cvtColor(src1, gray, COLOR_BGR2GRAY);

	Canny(gray, edge, 50, 150, 3);

	edge.convertTo(draw, CV_8U);
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("image", draw);

	waitKey(0);
	return 0;
}
