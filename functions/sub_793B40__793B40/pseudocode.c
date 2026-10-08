// Initializes the exact Oblivion CWindEngine per-instance defaults: strength 0.25, method fields 2, rocking enabled, matrix span 4, leaf factors/scalars 1, and angle pointers/count zero. Unlike RT4.1's constructor, this Oblivion body contains no wind-matrix resize or reference-count side effects.
OB_CWindEngine_010201A0 *__thiscall OB_CWindEngine_ctor_010201A0(OB_CWindEngine_010201A0 *this)
{
  double v2; // st6

  this->timeFrequencyShift = 0.0; /*0x793b44*/
  v2 = flt_A41304; /*0x793b4b*/
  this->branchWindMethod = 2; /*0x793b51*/
  this->windStrength = v2; /*0x793b54*/
  this->frondWindMethod = 2; /*0x793b57*/
  this->leafWindMethod = 2; /*0x793b5a*/
  this->leafFrequency = 0.0; /*0x793b5f*/
  this->rockingLeaves = 1; /*0x793b62*/
  this->leafThrow = 0.0; /*0x793b66*/
  this->startingMatrix = 0; /*0x793b69*/
  this->matrixSpan = 4; /*0x793b6e*/
  this->speedWindRockScalar = 1.0; /*0x793b75*/
  this->leafAngleCount = 0; /*0x793b78*/
  this->speedWindRustleScalar = 1.0; /*0x793b7b*/
  this->rockingAngles = 0; /*0x793b7e*/
  this->leafFactors[1] = 1.0; /*0x793b81*/
  this->rustleAngles = 0; /*0x793b84*/
  this->leafFactors[0] = 1.0; /*0x793b87*/
  return this; /*0x793b8a*/
}
