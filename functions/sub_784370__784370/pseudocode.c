// Oblivion compact stBezierSpline scaled-variance path: samples the 500-entry evenlySpacedPoints vector at +0x3C and returns uniform random variance scaled by the sampled y value and variance@0x08. Confirms the executable's min/max/variance field order.
float __thiscall OB_stBezierSpline_ScaledVariance_010201A0(const OB_stBezierSpline_010201A0 *this, float percent)
{
  int v2; // ebx
  void *begin; // eax
  unsigned int v5; // edi
  void *v6; // eax
  float maxValue; // [esp+4h] [ebp-20h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+14h] [ebp-10h]
  float percenta; // [esp+28h] [ebp+4h]
  float percentb; // [esp+28h] [ebp+4h]

  begin = this->evenlySpacedPoints.begin; /*0x784397*/
  v10 = 0.0; /*0x78439c*/
  if ( begin ) /*0x7843a0*/
  {
    if ( ((char *)this->evenlySpacedPoints.end - (char *)begin) / 0x18 == 0x1F4 ) /*0x7843c1*/
    {
      v5 = Double_To_SInt32(percent * dbl_A8BA00 + dbl_A2FAA0); /*0x7843dc*/
      v6 = this->evenlySpacedPoints.begin; /*0x7843de*/
      if ( !v6 || v5 >= ((char *)this->evenlySpacedPoints.end - (char *)v6) / 0x18 ) /*0x7843fd*/
        _invalid_parameter_noinfo(v2, v5, (int)this); /*0x7843ff*/
      v11 = *((float *)this->evenlySpacedPoints.begin + 6 * v5 + 1); /*0x784419*/
      if ( (unk_B42968 & 1) == 0 ) /*0x78441d*/
      {
        unk_B42968 |= 1u; /*0x78441f*/
        OB_stRandom_ctor_010201A0(&stru_B42964); /*0x784432*/
        atexit(sub_A26E20); /*0x78443c*/
      }
      percenta = this->variance * v11; /*0x784461*/
      maxValue = percenta; /*0x784469*/
      percentb = v11 * -this->variance; /*0x784474*/
      return OB_stRandom_GetUniform_010201A0(&stru_B42964, percentb, maxValue); /*0x784484*/
    }
  }
  return v10; /*0x78448c*/
}
