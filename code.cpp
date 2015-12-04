/*
 *  code.cpp
 *
 *  Created on: Oct 30, 2015
 *      Author: Naman, Srishti
 *
 * Play with parameters
 * preprocess - BG Subt -> threshold [OTSU] -> morph -> contour = shows circles in contours
 * Face detect -> remove with flood fill -> skin -> contour
 * Hand Detection with haar -> bounding box -> contouring within box = shows circles in contours
 */

#include <core/cvstd.hpp>
#include <core/ptr.inl.hpp>
#include <objdetect.hpp>
#include <video/background_segm.hpp>
#include <cstdio>

#include "../helpers/helpers.cpp"

int main(int, char**) {

  //create Background Subtractor objects
  pMOG2 = createBackgroundSubtractorMOG2(); //MOG2 approach
   // Load the cascades
   if( !face_cascade.load( face_cascade_name ) ){ printf("--(!)Error loading face cascade\n"); return -1; };

  int res = process_video();
  return 0;
}
