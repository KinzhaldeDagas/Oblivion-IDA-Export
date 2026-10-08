// Oblivion-local CWindEngine::Init: copies leafFactors.x/y; derives leafFrequency and leafThrow directly from wind strength and those factors; stores strength. The embedded leafOscillation vector is not read by this routine.
void __thiscall OB_CWindEngine_Init_010201A0(OB_CWindEngine_010201A0 *this, const OB_SIdvWindInfo_010201A0 *windInfo)
{
  float leafFactorY; // [esp+4h] [ebp+4h]

  this->leafFactors[0] = windInfo->leafFactors.x; /*0x793c06*/
  leafFactorY = windInfo->leafFactors.y; /*0x793c0c*/
  this->leafFactors[1] = leafFactorY; /*0x793c14*/
  this->leafFrequency = leafFactorY * (windInfo->strength * dbl_A49310); /*0x793c22*/
  this->leafThrow = windInfo->strength * dbl_A3F418 * this->leafFactors[0]; /*0x793c31*/
  this->windStrength = windInfo->strength; /*0x793c37*/
}
