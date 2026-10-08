// NiControllerSequence time advance. Computes scaled time from input, last input +0x34, accumulated/scaled time +0x38, and frequency +0x28; wraps cycle type 0 or clamps other cycle types to start/end +0x2C/+0x30. When commit is true, stores +0x34, +0x38, and resulting local time +0x3C; otherwise returns the computed local time without mutation.
double __thiscall NiControllerSequence_AdvanceTime(int this, float a2, char a3)
{
  double v4; // st6
  double v5; // st6
  double v6; // st7
  double v7; // rt1
  double v8; // st6
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // rtt
  double v14; // rt0
  double v15; // st6
  float v17; // [esp+4h] [ebp-Ch]
  float v18; // [esp+4h] [ebp-Ch]
  float v19; // [esp+4h] [ebp-Ch]
  float v20; // [esp+4h] [ebp-Ch]
  float v21; // [esp+8h] [ebp-8h]
  float v22; // [esp+8h] [ebp-8h]
  float v23; // [esp+Ch] [ebp-4h]

  v21 = *(float *)(this + 0x38); /*0x6c5fc9*/
  if ( -flt_A7DEB4 == *(float *)(this + 0x34) ) /*0x6c5fe1*/
  {
    v21 = 0.0; /*0x6c5fe3*/
    v4 = a2; /*0x6c5fe7*/
  }
  else
  {
    v4 = a2 - *(float *)(this + 0x34); /*0x6c5ff1*/
  }
  v17 = v4; /*0x6c5ff8*/
  v22 = *(float *)(this + 0x28) * v17 + v21; /*0x6c6007*/
  v5 = v22; /*0x6c600b*/
  v18 = v22; /*0x6c600f*/
  if ( *(_DWORD *)(this + 0x24) ) /*0x6c5ff4*/
  {
    v9 = v22; /*0x6c60b7*/
    goto LABEL_12; /*0x6c60b9*/
  }
  v23 = *(float *)(this + 0x30) - *(float *)(this + 0x2C); /*0x6c601f*/
  v6 = v23; /*0x6c602b*/
  if ( v23 == 0.0 ) /*0x6c6030*/
  {
    v9 = v22; /*0x6c60b0*/
    v8 = *(float *)(this + 0x2C); /*0x6c60b2*/
    goto LABEL_11; /*0x6c60b5*/
  }
  v19 = v5 - *(float *)(this + 0x2C); /*0x6c6037*/
  if ( v6 == v19 ) /*0x6c604a*/
  {
    v20 = *(float *)(this + 0x30); /*0x6c6051*/
  }
  else
  {
    unknown_libname_14(v23, v19); /*0x6c605b*/
    v20 = v19 + *(float *)(this + 0x2C); /*0x6c606b*/
    v6 = v23; /*0x6c606f*/
    v5 = v22; /*0x6c6073*/
  }
  if ( *(float *)(this + 0x2C) > (double)v20 ) /*0x6c6085*/
  {
    v7 = v5; /*0x6c6089*/
    v8 = v6 + v20; /*0x6c6089*/
    v9 = v7; /*0x6c6089*/
LABEL_11:
    v18 = v8; /*0x6c608b*/
LABEL_12:
    v5 = v9; /*0x6c608f*/
    v10 = v18; /*0x6c6093*/
    goto LABEL_13; /*0x6c6093*/
  }
  v10 = v20; /*0x6c60bb*/
LABEL_13:
  if ( *(float *)(this + 0x30) >= v10 ) /*0x6c609f*/
  {
    if ( *(float *)(this + 0x2C) <= v10 ) /*0x6c60c9*/
    {
      v13 = v5; /*0x6c60da*/
      v12 = v10; /*0x6c60da*/
      v11 = v13; /*0x6c60da*/
    }
    else
    {
      v11 = v5; /*0x6c60cb*/
      v12 = *(float *)(this + 0x2C); /*0x6c60d4*/
    }
  }
  else
  {
    v11 = v5; /*0x6c60a1*/
    v12 = *(float *)(this + 0x30); /*0x6c60aa*/
  }
  if ( !a3 ) /*0x6c60e1*/
    return v12; /*0x6c60f9*/
  v14 = v12; /*0x6c60e3*/
  v15 = v11; /*0x6c60e3*/
  *(float *)(this + 0x38) = v15; /*0x6c60e5*/
  *(float *)(this + 0x34) = a2; /*0x6c60ec*/
  *(float *)(this + 0x3C) = v14; /*0x6c60ef*/
  return v14; /*0x6c60f2*/
}
