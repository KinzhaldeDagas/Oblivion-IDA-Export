double __thiscall sub_7155A0(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  bool v5; // zf
  int v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st7
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+Ch] [ebp-4h]
  float v15; // [esp+14h] [ebp+4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+14h] [ebp+4h]
  float v18; // [esp+14h] [ebp+4h]

  v3 = a2;
  if ( -flt_A7DEB4 == *(float *)(this + 0x1C) )
    *(float *)(this + 0x1C) = a2;
  v4 = 0.0;
  if ( -flt_A7DEB4 == *(float *)(this + 0x20) )
  {
    v5 = (*(_BYTE *)(this + 8) & 1) == 0;
    *(float *)(this + 0x24) = 0.0;
    if ( v5 )
      goto LABEL_8;
  }
  else
  {
    v4 = v3 - *(float *)(this + 0x20);
  }
  a2 = v4;
LABEL_8:
  v6 = (*(unsigned __int8 *)(this + 8) >> 1) & 3;
  v15 = *(float *)(this + 0xC) * a2 + *(float *)(this + 0x24);
  *(float *)(this + 0x24) = v15;
  v16 = v15 + *(float *)(this + 0x10);
  *(float *)(this + 0x20) = v3;
  EnterCriticalSection(&stru_B3FCA0);
  v7 = v16;
  if ( *(float *)(this + 0x18) == flt_B3FC94
    && *(float *)(this + 0x14) == flt_B3FC90
    && v7 == flt_B3FC8C
    && dword_B27130 == v6 )
  {
    v16 = flt_B3FC88;
    goto LABEL_35;
  }
  v8 = *(float *)(this + 0x18);
  dword_B27130 = v6;
  flt_B3FC94 = v8;
  flt_B3FC90 = *(float *)(this + 0x14);
  flt_B3FC8C = v16;
  if ( -flt_A7DEB4 != *(float *)(this + 0x18) && *(float *)(this + 0x14) != flt_A7DEB4 )
  {
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_27;
      v13 = *(float *)(this + 0x18) - *(float *)(this + 0x14);
      if ( v13 != 0.0 )
      {
        v12 = v13 + v13;
        unknown_libname_14(v12, v7);
        v9 = v16;
        if ( v16 < 0.0 )
        {
          v17 = v9 + v12;
          v9 = v17;
        }
        if ( v13 < v9 )
          v9 = v12 - v9;
        v16 = v9 + *(float *)(this + 0x14);
        goto LABEL_27;
      }
LABEL_23:
      v16 = *(float *)(this + 0x14);
      goto LABEL_27;
    }
    v14 = *(float *)(this + 0x18) - *(float *)(this + 0x14);
    if ( v14 == 0.0 )
      goto LABEL_23;
    v18 = v7 - *(float *)(this + 0x14);
    unknown_libname_14(v14, v18);
    v16 = v18 + *(float *)(this + 0x14);
    if ( *(float *)(this + 0x14) > (double)v16 )
      v16 = v16 + v14;
  }
LABEL_27:
  if ( *(float *)(this + 0x18) < (double)v16 )
  {
    v10 = *(float *)(this + 0x18);
LABEL_31:
    v16 = v10;
    goto LABEL_32;
  }
  if ( *(float *)(this + 0x14) > (double)v16 )
  {
    v10 = *(float *)(this + 0x14);
    goto LABEL_31;
  }
LABEL_32:
  if ( (*(_BYTE *)(this + 8) & 0x10) != 0 )
    v16 = *(float *)(this + 0x18) - (v16 - *(float *)(this + 0x14));
  flt_B3FC88 = v16;
LABEL_35:
  LeaveCriticalSection(&stru_B3FCA0);
  return v16;
}
