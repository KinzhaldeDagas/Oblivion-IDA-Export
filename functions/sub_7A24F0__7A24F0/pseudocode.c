// CTreeEngine seed setter used by CSpeedTreeRT::Compute before tree generation.
void __thiscall OB_CTreeEngine_SetSeed_010201A0(OB_CTreeEngine_010201A0 *this, unsigned int seed)
{
  double v3; // st7

  if ( seed ) /*0x7a24f9*/
  {
    if ( seed != 1 ) /*0x7a2535*/
      this->treeRandomSeed = seed; /*0x7a2537*/
  }
  else
  {
    OB_stRandom_Reseed_010201A0((int)&this->randomPlaceholderByte, 0xFFFFFFFF); /*0x7a2503*/
    v3 = OB_stRandom_GetUniform_010201A0(fConstant_2, flt_A8C690); /*0x7a2520*/
    this->treeRandomSeed = Double_To_SInt32(v3); /*0x7a252b*/
  }
}
