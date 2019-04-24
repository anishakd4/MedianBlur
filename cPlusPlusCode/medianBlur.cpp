#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){

    //Read image
    Mat image = imread("../assets/putin_noise.jpg");

    //check if image exits
    if(image.empty()){
        cout<<"Can not load image"<<endl;
        return 0;
    }

    //define kernel size
    int kernelSize = 5;

    Mat result;
    //Apply Median filter 
    medianBlur(image, result, kernelSize);

    //create windows to display images
    namedWindow("image", WINDOW_NORMAL);
    namedWindow("result", WINDOW_NORMAL);

    //display images
    imshow("image", image);
    imshow("result", result);

    //press esc to exit the program
    waitKey(0);

    //close all the opened windows
    destroyAllWindows();

    return 0;
}