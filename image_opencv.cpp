#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv4/opencv2/highgui.hpp>

int main()
{
	cv::Mat img = cv::imread("image.jpg", cv::IMREAD_COLOR);
	cv::imshow("IMAGE",img);
	cv::waitKey(0);
	cv::destroyAllWindows();
	return 0;
}
