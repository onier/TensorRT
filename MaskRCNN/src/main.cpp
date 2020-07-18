//#include <opencv2/opencv.hpp>
//
//using namespace cv;
//
//int main() {
//    Mat img2 = imread("/home/xzh/puppy/TensorRT/TestYolo/data/dog.jpg");
//    Mat img_mask_8 = cv::Mat::zeros(img2.size(), CV_8U);; // imread("empireofthesun_mask.jpg");
//    circle(img_mask_8, cv::Point(50, 50), 50, cv::Scalar(255), -1);
//    cv::Mat newMat;
//    img2.copyTo(newMat, img_mask_8);
//    imshow("img2", newMat);
//    waitKey(0);
////    cv::Mat source = cv::imread("/home/xzh/puppy/TensorRT/TestYolo/data/dog.jpg");
////    cv::Mat mask(source.rows, source.cols, CV_8U, cv::Scalar(0));
////    cv::circle(mask, cv::Point(50,50),50, cv::Scalar(1),-1);
////    cv::imshow("mask", mask);
////    cv::waitKey(0);
////    cv::imshow("source1", source);
////    cv::waitKey(0);
////    source.copyTo(source, mask);
////    cv::imshow("source2", source);
////    cv::waitKey(0);
//}
