import cv2
import sys
import numpy as np

#read image
image = cv2.imread("../assets/putin_noise.jpg")

#check if image exits
if image is None:
    print("can not find image")
    sys.exit()

#define kernel size
kernelSize = 5

#apply median blur
result = cv2.medianBlur(image, kernelSize)

#create windows to display images
cv2.namedWindow("image", cv2.WINDOW_NORMAL)
cv2.namedWindow("result", cv2.WINDOW_NORMAL)

#display images
cv2.imshow("image", image)
cv2.imshow("result", result)

#press esc to exit the program
cv2.waitKey(0)

#close all the opened windows
cv2.destroyAllWindows()