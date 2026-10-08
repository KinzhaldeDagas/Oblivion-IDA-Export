char __thiscall sub_6D2CA0(int this, float a2, int a3, float *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // ecx
  char v9; // dl
  int v10; // edi
  float *v11; // eax

  v5 = a2; /*0x6d2cb1*/
  if ( a2 == *(float *)(this + 8) ) /*0x6d2cb6*/
  {
    *a4 = *(float *)(this + 0xC); /*0x6d2cc1*/
    if ( flt_A7C6B0 == *(float *)(this + 0xC) ) /*0x6d2cd3*/
      return 0; /*0x6d2cd9*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x10); /*0x6d2cdc*/
    if ( v7 ) /*0x6d2ce1*/
    {
      v8 = *(float *)(v7 + 8); /*0x6d2ce3*/
      v9 = *(_BYTE *)(v7 + 0x14); /*0x6d2ce8*/
      v10 = *(_DWORD *)(v7 + 0x10); /*0x6d2cec*/
      v11 = *(float **)(v7 + 0xC); /*0x6d2cef*/
      if ( v8 != 0.0 ) /*0x6d2cf6*/
      {
        *(float *)(this + 0xC) = NiFloatKey_EvaluateTrack(a2, v11, v10, v8, (int *)(this + 0x14), v9); /*0x6d2d0d*/
        v5 = a2; /*0x6d2d13*/
      }
    }
    if ( flt_A7C6B0 == *(float *)(this + 0xC) ) /*0x6d2d28*/
      return 0; /*0x6d2d30*/
    *a4 = *(float *)(this + 0xC); /*0x6d2d3a*/
    *(float *)(this + 8) = v5; /*0x6d2d3c*/
  }
  return 1; /*0x6d2cd7*/
}
