#pragma once
#include "pch.h"

/**
*sum of squard difference (distance metric)
*starting from ax,ay in image a and bx,by in image b, with a width and height given
*indicies out of bounds results in MAX_DOUBLE
*/
double ssd(Mat& a, Mat& b, int ax, int ay, int bx, int by, int width, int height){
	//check <0 >width >height, els MAX_DOUBLE
	//for 0 to height
		//for 0 to width
			//sum += (a[ay+y][ax+x] - b[by+y][bx+x])^2
}

/**
*result(y,x) is dot product of filter and img centered at y,x
*/
void imfilter(Mat& img, Mat& filter, Mat* result){
	//TODO:: for each y,x in img, apply dot product of filter and image centered at y,x
	//store in result[y][x]
}

/**
*resizes the image to size(img)*ratio, blurs if downsampling
*result stores new image matrix
*/
void imresize(Mat& img, float ratio, Mat* result){

}

/**
*singlular vaue decomposition, results are returned in destU, destS, and destV
*may pass in nil to disregaurd certian results
*/
void svd(Mat& a, Mat*destU, Mat*destS, Mat*destV){
	//TODO::compute singluar value decomposition of a
}

/**
*uses RANSAC to compute map from a onto b with maximum number of points
*threadhold is the maximum distance between to valid matches
*H is the resulting 3x3 projective trasnformation
*num_matches is the number of points used to compute the homography
*/
void findHomographyRANSAC(KeyPoints& a, KeyPoints& b, double threshhold, Mat* H, int* num_matches){

}

/**
*helper function for computeHomographyRANSAC
*computes a homography from a onto b
*/
void findHomography(KeyPoints& a, KeyPoints& b, Mat* H){

}

/**
*matches the descriptors of a to the descriptors of b
*returns the indexes of a that match the index of b
*/
void match(Descriptors& a, Descriptors& b,  vector<int> * indexesA, vector<int> * indexesB){

}

/**
*performs harris cornder detections, and returns the key points of the image, and descriptors
*/
void harrisCorners(Mat& a, KeyPoints * keyspoints, Descriptors * decriptors){

}

/**
*applies H to the plane of a onto the plane of b, returns the new points in result
*/
void projectiveTransform(KeyPoints& a, KeyPoints& b, Mat& H, KeyPoints* result){

}