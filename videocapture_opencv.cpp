#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namesapace std;
using namespace cv;

int main()
{
	VideoCapture cap(0);
	if(!cap.isOpened())
	{
		cout<<"Change the camera port number\n";
		return -1;
	}
	
	Mat frame;
	cap.read(frame);
	imshow("camera", frame);
	if(waitKey(30)==27)
		return 0;
		
	return 0;
}
