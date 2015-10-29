/*
 * code.cpp
 *
 *  Created on: Oct 30, 2015
 *      Author: (Bu)nn
 */


#include <core/mat.hpp>
#include <core/types.hpp>
#include <highgui.hpp>
#include <imgproc.hpp>
#include <videoio.hpp>

using namespace cv;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    namedWindow("edges",1);
    for(;;)
    {

        //Capture the Frame and convert it to Grayscale
        Mat frame;
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, COLOR_BGR2GRAY);

        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);

        //Code Starts Here


        imshow("edges", edges);
        if(waitKey(30) >= 0) break;
    }

    /*TODO

    * Background Subtration to get just the hand (binarized image)
    *

    */
    return 0;
}



