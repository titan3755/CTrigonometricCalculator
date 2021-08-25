#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
	do {
	int response = 0;
	printf("Please select one of the options below -->\n");
	printf("\n1. Find quadrant by angle");
	printf("\n2. Find angle between clock hands");
	printf("\n3. Trigonometric functions");
	printf("\n\n--> ");
	scanf_s("%d", &response);
	if (response == 1) {
		double angle = 0.0;
		int intified_angle = 0;
		printf("\nEnter Angle: ");
		scanf_s("%lf", &angle);
		intified_angle = floor(angle);
		if (angle >= 0.0) {
			if ((intified_angle % 90) == 0) {
				printf("\n%d degree is quadrant angle! \n\n", intified_angle);
			}
			else if (0.0 < angle && angle < 360.0) {
				if (0.0 < angle && angle < 90.0) {
					printf("\n%lf is in first quadrant!\n", angle);
				}
				else if (90.0 < angle && angle < 180.0) {
					printf("\n%lf is in second quadrant!\n", angle);
				}
				else if (180.0 < angle && angle < 270.0) {
					printf("\n%lf is in third quadrant!\n", angle);
				}
				else if (270.0 < angle && angle < 360.0) {
					printf("\n%lf is in fourth quadrant!\n", angle);
				}
				else {
					printf("\nSomething went wrong! ");
				}
			}
			else if (angle > 360.0) {
				int intpart = (int)(angle / 90.0) / 4.0;
				double decpart = (angle / 90.0) / 4.0;
				double result = decpart - (double)intpart;
				if (result > 0.0 && result < 0.25) {
					printf("\n%lf is in first quadrant!\n\n", angle);
				}
				else if (result > 0.25 && result < 0.5) {
					printf("\n%lf is in second quadrant!\n\n", angle);
				}
				else if (result > 0.5 && result < 0.75) {
					printf("\n%lf is in third quadrant!\n\n", angle);
				}
				else if (result > 0.75 && result < 1.0) {
					printf("\n%lf is in fourth quadrant!\n\n", angle);
				}
			}
		}
		else if (angle < 0.0) {
			angle = fabs(angle);
			if ((intified_angle % 90) == 0) {
				printf("\n%d degree is quadrant angle! \n\n", intified_angle);
			}
			else if (0.0 < angle && angle < 360.0) {
				if (0.0 < angle && angle < 90.0) {
					printf("\n%lf is in fourth quadrant!\n", angle);
				}
				else if (90.0 < angle && angle < 180.0) {
					printf("\n%lf is in third quadrant!\n", angle);
				}
				else if (180.0 < angle && angle < 270.0) {
					printf("\n%lf is in second quadrant!\n", angle);
				}
				else if (270.0 < angle && angle < 360.0) {
					printf("\n%lf is in first quadrant!\n", angle);
				}
				else {
					printf("\nSomething went wrong! ");
				}
			}
			else if (angle > 360.0) {
				int intpart = (int)(angle / 90.0) / 4.0;
				double decpart = (angle / 90.0) / 4.0;
				double result = decpart - (double)intpart;
				if (result > 0.0 && result < 0.25) {
					printf("\n%lf is in fourth quadrant!\n\n", angle);
				}
				else if (result > 0.25 && result < 0.5) {
					printf("\n%lf is in third quadrant!\n\n", angle);
				}
				else if (result > 0.5 && result < 0.75) {
					printf("\n%lf is in second quadrant!\n\n", angle);
				}
				else if (result > 0.75 && result < 1.0) {
					printf("\n%lf is in first quadrant!\n\n", angle);
				}
			}
		}
	}
	else if (response == 2) {
		char chr = 176;
		int hour_int, minute_int;
		float minute_floated, hour_floated, clock_angle;
		printf("\nEnter hours and minutes respectively separated by a space: ");
		scanf_s("%f %f", &hour_floated, &minute_floated);
		clock_angle = (30.0 * hour_floated) - ((11.0 / 2.0) * minute_floated);
		hour_int = floor(hour_floated); minute_int = floor(minute_floated);
		printf("\nAngles between hands when it is %d:%d = %f %c\n", hour_int, minute_int, fabs(clock_angle), chr);
		
	}
	else if (response == 3) {
		printf("\nComing soon!");
	}
	else {
		printf("Invalid response! Enter a number from 1-3.");
	}
	} while (1);
	return 0;
}