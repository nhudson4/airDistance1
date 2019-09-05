/**
 * Author: Noah Hudson
 *
 * This program prompts users for two pairs of coordinates then
 * calcalates the air distance between them
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


int main(int argc, char **argv) {

  double startLat;
  printf("Please enter start location latitude: ");
  scanf("%lf", &startLat);

  double startLong;
  printf("Please enter start location longitude: ");
  scanf("%lf", &startLong);

  double endLat;
  printf("Please enter end location latitude: ");
  scanf("%lf", &endLat);

  double endLong;
  printf("Please enter end location longitude: ");
  scanf("%lf", &endLong);

  double startLatRad = (startLat/180)*M_PI;
  double startLongRad = (startLong/180)*M_PI;
  double endLatRad = (endLat/180)*M_PI;
  double endLongRad = (endLong/180)*M_PI;

  double distanceStartToEnd = acos(sin(startLatRad)*sin(endLatRad) + cos(startLatRad)*cos(endLatRad)*cos(endLongRad-startLongRad))*6371;

  printf("Location Distance\n");
  printf("Origin: (%f startLat, %f startLong)\n", startLat, startLong);
  printf("Destination: (%f endLat, %f endLong)\n", endLat, endLong);
  printf("Air distance is %f kms\n", distanceStartToEnd);

}
