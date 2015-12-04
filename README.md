# AirDraw
Hand gesture recognition to draw, pan and zoom images using OpenCV

Aims:
1. Draw in the air using a finger
2. Recognise the PAN gesture

Strategy followed:
- Preprocessing (blurring)
- BG Subtraction (with MOG2)
- Threshold [OTSU]
- Morphology
- Face detect -> remove with flood fill
- Contouring to find the hand and create bounding box around it

Alternative strategy:
- Hand Detection with haar -> bounding box -> contouring within box = shows circles in contours
