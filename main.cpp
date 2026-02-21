#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
    cv::VideoCapture cap(0);

    if (!cap.isOpened()){
        std::cerr << "Faild to open camera\n";
        return 1;
    }

    std::cout << "Camera is open\n 'q' to exit.\n";

    cv::Mat frame;
    while (true){
        cap >> frame; //getting camera
        if (fame.empty()){
            std::cerr << "empty frame!";
            break;
        }

        cv::imshow("cam", frame);

                char c = (char)cv::waitKey(1);
        if (c == 'q' || c == 27) { // q eller ESC
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}