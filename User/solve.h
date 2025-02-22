#ifndef __SOLVE_H
#define __SOLVE_H
#include "main.h" // Device header
#include "arm_math.h"
#include "motorctrl.h"

/* ACTION DEFINITION */
#define LEFT_SIDE 0
#define RIGHT_SIDE 1

typedef struct
{
	int16_t x;
	int16_t y;
	int16_t theta;
	int16_t XYtheta;
	
  int16_t xnext;
	int16_t ynext;
} TGT_COOR;

typedef struct
{
	int16_t x;
	int16_t y;
	int16_t theta;

	int16_t xlast;
	int16_t ylast;
	int16_t xll;
	int16_t yll;

	int16_t RE_theta;
	int16_t dist;
	int16_t distlast;
	int16_t distll;
	int16_t Vx;
	int16_t Vy;
	int16_t omega;

	// Right/Left Side Selection
	int16_t side;
} REAL_COOR;
void Receive(void);
void Reach_TGT(void);
void CAL_TXMESSAGE(void);
#endif
