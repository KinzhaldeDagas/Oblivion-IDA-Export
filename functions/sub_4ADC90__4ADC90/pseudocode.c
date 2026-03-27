void __thiscall sub_4ADC90(float *this, int a2, float a3, float a4, float a5, float a6)
{
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  double v11; // st7
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  double v18; // st7
  double v19; // st7
  float v20; // [esp+34h] [ebp+4h]
  float v21; // [esp+34h] [ebp+4h]
  float v22; // [esp+3Ch] [ebp+Ch]
  float v23; // [esp+3Ch] [ebp+Ch]

  if ( a2 )
  {
    *(float *)(a2 + 0x38) = sub_4ACE30(
                              *(float *)(a2 + 0x38),
                              a3,
                              a4,
                              a6,
                              *(this + 0xB),
                              *(this + 0xD),
                              *(this + 0xC),
                              *(this + 0x1B),
                              *(this + 0xE));
    v8 = *(_DWORD *)(a2 + 0x30);
    v9 = *(_DWORD *)(a2 + 0x34);
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x2C);
    v10 = *(_DWORD *)(a2 + 0x38);
    *(_DWORD *)(a2 + 0x10) = v8;
    *(_DWORD *)(a2 + 0x14) = v9;
    *(_DWORD *)(a2 + 0x18) = v10;
    v20 = sub_4ACDE0(this, a5) * *(float *)(a2 + 0x18) + *(float *)(a2 + 0x18);
    v11 = v20;
    *(float *)(a2 + 0x18) = v20;
    if ( v20 < 0.0 )
      v20 = 0.0;
    if ( v20 <= dbl_A2F928 )
    {
      v13 = v11 > 0.0;
      v14 = 0.0 == v11;
      v12 = 0.0;
      if ( v13 || v14 )
        v12 = *(float *)(a2 + 0x18);
    }
    else
    {
      v12 = 1.0;
    }
    v21 = v12;
    *(float *)(a2 + 0x18) = v21;
    *(float *)(a2 + 0x48) = sub_4ACE30(
                              *(float *)(a2 + 0x48),
                              a3,
                              a4,
                              a6,
                              *(this + 0x15),
                              *(this + 0x17),
                              *(this + 0x16),
                              *(this + 0x1C),
                              *(this + 0x18));
    v15 = *(_DWORD *)(a2 + 0x40);
    v16 = *(_DWORD *)(a2 + 0x44);
    *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(a2 + 0x3C);
    v17 = *(_DWORD *)(a2 + 0x48);
    *(_DWORD *)(a2 + 0x20) = v15;
    *(_DWORD *)(a2 + 0x24) = v16;
    *(_DWORD *)(a2 + 0x28) = v17;
    v22 = sub_4ACD90(this, a5) * *(float *)(a2 + 0x28) + *(float *)(a2 + 0x28);
    v18 = v22;
    *(float *)(a2 + 0x28) = v22;
    if ( v22 < 0.0 )
      v22 = 0.0;
    if ( v22 <= dbl_A2F928 )
    {
      if ( v18 >= 0.0 )
        v19 = *(float *)(a2 + 0x28);
      else
        v19 = 0.0;
    }
    else
    {
      v19 = 1.0;
    }
    v23 = v19;
    *(float *)(a2 + 0x28) = v23;
    *(float *)(a2 + 0x4C) = *(this + 0x11) * a3 + *(float *)(a2 + 0x4C);
    *(float *)(a2 + 0x50) = a3 * *(this + 0x12) + *(float *)(a2 + 0x50);
  }
}
