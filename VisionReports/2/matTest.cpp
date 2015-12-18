#include <math.h>
#include <float.h>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include "opencv2/imgproc/imgproc.hpp"
#include <stdio.h>
using namespace cv;
using namespace std;
int main()
{
    float sobelnkh[] = { -1, 0, 1,
                        -2, 0, 2,
                        -1, 0, 1}; 
                            
    Mat M(3,3, CV_32F, sobelnkh);
    transpose( M , M ) ;
    //flip(M, M, 0 ) ; 
    cout << "M = " << endl << " " << M << endl << endl;
    return 0 ; 
}
