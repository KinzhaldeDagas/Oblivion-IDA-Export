// Sets wind strength, recomputes leaf frequency/throw, preserves phase continuity via timeFrequencyShift, and disables external rocking-angle input.
float __thiscall OB_CWindEngine_SetWindStrength_010201A0(
        OB_CWindEngine_010201A0 *this,
        float newStrength,
        float oldStrength,
        float oldTimeShift)
{
  double v4; // st7
  double v5; // rt0
  double v6; // rt1
  double v7; // st5
  float newStrengtha; // [esp+4h] [ebp+4h]
  float newStrengthb; // [esp+4h] [ebp+4h]

  v4 = newStrength; /*0x793b90*/
  this->windStrength = newStrength; /*0x793b96*/
  v5 = dbl_A49310; /*0x793ba8*/
  newStrengtha = newStrength * v5 * this->leafFactors[1]; /*0x793baa*/
  this->leafFrequency = newStrengtha; /*0x793bb2*/
  v6 = newStrengtha; /*0x793bb5*/
  this->leafThrow = v4 * dbl_A3F418 * this->leafFactors[0]; /*0x793bc0*/
  newStrengthb = v5 * oldStrength * this->leafFactors[1]; /*0x793bca*/
  v7 = CWindEngine__s_time; /*0x793bd2*/
  this->rockingAngles = 0; /*0x793bd8*/
  this->leafAngleCount = 0; /*0x793bdd*/
  this->timeFrequencyShift = newStrengthb * v7 + oldTimeShift - v6 * v7; /*0x793bec*/
  return this->timeFrequencyShift; /*0x793bf0*/
}
