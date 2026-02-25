#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
#ifdef _WIN32
    cv::VideoCapture cap(0, cv::CAP_DSHOW);   // Windows: DirectShow is often more reliable

    if (!cap.isOpened()) {
        std::cerr << "Failed to open camera. Try index 1 or check permissions.\n";
        return 1;
    }

    std::cout << "Camera is open. Press 'q' or ESC to exit.\n";

    cv::Mat frame;
    while (true) {
        cap >> frame; // grab frame
        if (frame.empty()) {
            std::cerr << "Empty frame received!\n";
            break;
        }

        cv::imshow("cam", frame);

        char c = (char)cv::waitKey(1);
        if (c == 'q' || c == 27) break;
    }

    return 0;
}