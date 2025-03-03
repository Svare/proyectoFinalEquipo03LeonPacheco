#include "animaciones.h"

void AnimacionSuperman::resetElements( void ) {

	posX = 25.25f;
	posY = -25.3f;
	posZ = -15.0f;
	rotX = 0.0f;
	rotY = -90.0f;
	rotZ = 0.0f;

}

void AnimacionSuperman::interpolation( void ) {

	keyFrame[currentFrameIndex].posXInc = (keyFrame[currentFrameIndex + 1].posX - keyFrame[currentFrameIndex].posX) / maxSteps;
	keyFrame[currentFrameIndex].posYInc = (keyFrame[currentFrameIndex + 1].posY - keyFrame[currentFrameIndex].posY) / maxSteps;
	keyFrame[currentFrameIndex].posZInc = (keyFrame[currentFrameIndex + 1].posZ - keyFrame[currentFrameIndex].posZ) / maxSteps;
	keyFrame[currentFrameIndex].rotXInc = (keyFrame[currentFrameIndex + 1].rotX - keyFrame[currentFrameIndex].rotX) / maxSteps;
	keyFrame[currentFrameIndex].rotYInc = (keyFrame[currentFrameIndex + 1].rotY - keyFrame[currentFrameIndex].rotY) / maxSteps;
	keyFrame[currentFrameIndex].rotZInc = (keyFrame[currentFrameIndex + 1].rotZ - keyFrame[currentFrameIndex].rotZ) / maxSteps;

}

