#include <stdio.h>
#include <opencv2/opencv.hpp>

#include "Externals/OpenCV/include/opencv2/highgui.hpp"
using namespace cv;
int main(int argc, char** argv ) {
  Mat image;
  image = imread( "D:/1.jpg", 1);
  if ( !image.data ) {
    printf("No image data \n");
    return -1;
  }
// 你好
  namedWindow("Display Image", WINDOW_AUTOSIZE );
  imshow("Display Image", image);
  waitKey(0);
  return 0;
}