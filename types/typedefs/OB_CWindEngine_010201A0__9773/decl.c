struct OB_CWindEngine_010201A0
{
float timeFrequencyShift;
float windStrength;
int branchWindMethod;
int frondWindMethod;
int leafWindMethod;
unsigned __int8 rockingLeaves;
unsigned __int8 pad_15[3];
float leafFactors[2];
float leafFrequency;
float leafThrow;
unsigned int startingMatrix;
unsigned int matrixSpan;
unsigned int leafAngleCount;
const float *rockingAngles;
const float *rustleAngles;
float speedWindRockScalar;
float speedWindRustleScalar;
};
