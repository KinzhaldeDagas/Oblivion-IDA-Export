//
// [2026-10-05 roots] Root bridge supplies plugin-owned NativeSpline views: range/variance0/4/8; evenlySpaced vector+3C with begin+4/end+8, exactly500 elements, stride18, y+4. Core curves retain signed variance and normalized samples. NativeData lifetime covers synchronous Compute+LOD construction; CBranch does not retain these profile pointers.
float __thiscall OB_stBezierSpline_Evaluate_010201A0(const OB_stBezierSpline_010201A0 *this, float percent)
{
  void *begin; // eax
  OB_stVector16_010201A0 *p_evenlySpacedPoints; // esi
  int v5; // ebx
  double v6; // st7
  unsigned int v7; // ebp
  unsigned int v8; // eax
  float minValue; // [esp+0h] [ebp-2Ch]
  float v12; // [esp+1Ch] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-10h]

  begin = this->evenlySpacedPoints.begin; /*0x784239*/
  v12 = 0.0; /*0x78423e*/
  p_evenlySpacedPoints = &this->evenlySpacedPoints; /*0x784242*/
  if ( begin ) /*0x784245*/
  {
    if ( ((char *)this->evenlySpacedPoints.end - (char *)begin) / 0x18 == 0x1F4 ) /*0x784266*/
    {
      v5 = Double_To_SInt32(percent); /*0x78427d*/
      if ( v5 == 0x1F3 ) /*0x78428b*/
      {
        v6 = *(float *)(OB_stVector_stVec_At_010201A0(p_evenlySpacedPoints, 0x1F3, 0x1F3u) + 4); /*0x784295*/
      }
      else
      {
        v13 = (percent - (double)v5 * dbl_A8B9F8) / dbl_A8B9F8; /*0x7842b0*/
        v7 = OB_stVector_stVec_At_010201A0(p_evenlySpacedPoints, v5, v5 + 1); /*0x7842bc*/
        v8 = OB_stVector_stVec_At_010201A0(p_evenlySpacedPoints, v5, v5); /*0x7842be*/
        v6 = (*(float *)(v7 + 4) - *(float *)(v8 + 4)) * v13 + *(float *)(v8 + 4); /*0x7842db*/
      }
      v14 = v6; /*0x7842dd*/
      v15 = (this->maxValue - this->minValue) * v14 + this->minValue; /*0x7842f7*/
      if ( (unk_B42960 & 1) == 0 ) /*0x7842fb*/
      {
        unk_B42960 |= 1u; /*0x7842fd*/
        OB_stRandom_ctor_010201A0(&stru_B4295D); /*0x784310*/
        atexit(sub_A26E10); /*0x78431a*/
      }
      minValue = -this->variance; /*0x78433e*/
      return OB_stRandom_GetUniform_010201A0(&stru_B4295D, minValue, this->variance) + v15; /*0x78434a*/
    }
  }
  return v12; /*0x784352*/
}
