// Oblivion compact stBezierSpline control-curve sampler. Constructs a 2D result, clamps percent to [0,1], returns the terminal control point at the final segment, otherwise cubic-interpolates four splinePoints records. Sole caller is CreateEvenlySpacedPoints.
OB_stVec_010201A0 *__thiscall OB_StBezierSpline_SampleControlCurve_010201A0(
        const OB_stBezierSpline_010201A0 *this,
        OB_stVec_010201A0 *result,
        float percent)
{
  int v4; // edi
  void *begin; // eax
  int v6; // ebx
  double v7; // st7
  char v8; // cl
  unsigned int v9; // ebx
  void *v10; // eax
  const OB_stVec_010201A0 *v11; // eax
  const OB_stVec_010201A0 *v13; // [esp-Ch] [ebp-64h]
  const OB_stVec_010201A0 *v14; // [esp-8h] [ebp-60h]
  const OB_stVec_010201A0 *v15; // [esp-4h] [ebp-5Ch]
  int v16; // [esp+18h] [ebp-40h]
  int v17; // [esp+1Ch] [ebp-3Ch]
  int v18; // [esp+1Ch] [ebp-3Ch]
  int v19; // [esp+20h] [ebp-38h]
  float t; // [esp+2Ch] [ebp-2Ch]
  int v21; // [esp+30h] [ebp-28h]
  OB_stVec_010201A0 v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+54h] [ebp-4h]
  float percenta; // [esp+60h] [ebp+8h]

  v4 = 0; /*0x7844c9*/
  v23 = 0; /*0x7844d7*/
  OB_stVec_ctor_size_010201A0(result, 2); /*0x7844db*/
  begin = this->controlPoints.begin; /*0x7844e0*/
  v23 = 0; /*0x7844e5*/
  if ( begin ) /*0x7844f1*/
  {
    v6 = ((char *)this->controlPoints.end - (char *)begin) / 0x18; /*0x78450b*/
    v21 = v6; /*0x784510*/
    if ( v6 > 1 ) /*0x784514*/
    {
      if ( percent < dbl_A2FC68 ) /*0x784529*/
        percent = 0.0; /*0x78452d*/
      if ( percent > dbl_A2F928 ) /*0x784540*/
        percent = 1.0; /*0x784544*/
      v19 = v6 - 1; /*0x78454b*/
      percenta = (double)(v6 - 1) * percent; /*0x784557*/
      v7 = percenta; /*0x78455b*/
      v17 = Double_To_SInt32(percenta); /*0x784568*/
      v8 = 0; /*0x784570*/
      v16 = 0; /*0x784574*/
      t = percenta - (double)v17; /*0x784578*/
      if ( v6 > 0 ) /*0x78457c*/
      {
        v18 = 0; /*0x784582*/
        v9 = 2; /*0x784586*/
        do /*0x78458b*/
        {
          if ( v8 ) /*0x78458d*/
            return result; /*0x78458d*/
          if ( v4 == v19 ) /*0x784597*/
          {
            v10 = this->controlPoints.begin; /*0x784599*/
            if ( !v10 || v4 >= (unsigned int)(((char *)this->controlPoints.end - (char *)v10) / 0x18) ) /*0x7845b8*/
            {
              _invalid_parameter_noinfo(v9, v4, (int)result); /*0x7845bc*/
              v7 = percenta; /*0x7845c1*/
            }
            *result = *(OB_stVec_010201A0 *)((char *)this->controlPoints.begin + v18); /*0x7845ce*/
          }
          else
          {
            if ( (double)v16 > v7 || (double)(v4 + 1) <= v7 ) /*0x784616*/
              goto LABEL_19; /*0x784616*/
            v15 = OB_stVector_stVec_At_010201A0(&this->splinePoints, v9 + 1); /*0x784630*/
            v14 = OB_stVector_stVec_At_010201A0(&this->splinePoints, v9); /*0x784639*/
            v13 = OB_stVector_stVec_At_010201A0(&this->splinePoints, v9 - 1); /*0x784645*/
            v11 = OB_stVector_stVec_At_010201A0(&this->splinePoints, v9 - 2); /*0x78464c*/
            *result = *OB_StSpline_CubicBezierInterpolate2D_010201A0(&v22, v11, v13, v14, v15, t); /*0x784660*/
            Shared_NoOpVirtual_60D0A0(&v22); /*0x784684*/
            v7 = percenta; /*0x784689*/
            v4 = v16; /*0x78468d*/
          }
          v8 = 1; /*0x784691*/
LABEL_19:
          v18 += 0x18; /*0x784693*/
          ++v4; /*0x784698*/
          v9 += 3; /*0x78469b*/
          v16 = v4; /*0x7846a2*/
        }
        while ( v4 < v21 ); /*0x78458b*/
      }
    }
  }
  return result; /*0x7846b0*/
}
