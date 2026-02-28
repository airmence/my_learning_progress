import cv2

camera = cv2.VideoCapture(0)

ret, frame = camera.read()

cv2.imshow('poop', frame)

cv2.waitKey(0)
