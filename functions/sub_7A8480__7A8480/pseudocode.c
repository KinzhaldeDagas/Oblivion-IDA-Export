// Constructs the embedded 0x1C-byte SIdvWindInfo with leafFactors.x/y initialized to the local default scalar and the remaining five floats zero. CTreeEngine construction subsequently derives leafOscillation and assigns strength.
OB_SIdvWindInfo_010201A0 *__thiscall OB_SIdvWindInfo_ctor_010201A0(OB_SIdvWindInfo_010201A0 *this)
{
  double v1; // st7

  v1 = kHeadBodyNormalMatchRadius; /*0x7a8480*/
  this->leafFactors.x = kHeadBodyNormalMatchRadius; /*0x7a8488*/
  this->leafFactors.y = v1; /*0x7a848a*/
  this->leafFactors.z = 0.0; /*0x7a848f*/
  this->leafOscillation.x = 0.0; /*0x7a8492*/
  this->leafOscillation.y = 0.0; /*0x7a8495*/
  this->leafOscillation.z = 0.0; /*0x7a8498*/
  this->strength = 0.0; /*0x7a849b*/
  return this; /*0x7a849e*/
}
