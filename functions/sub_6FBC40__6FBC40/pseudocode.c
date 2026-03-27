NiAVObject *__cdecl sub_6FBC40(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st6
  float *v4; // ebx
  float *v6; // eax
  void *v7; // ebp
  NiAVObject *v8; // eax
  NiAVObject *v9; // esi
  int v11; // [esp+2Ch] [ebp+8h]

  if ( (dword_B3F528 & 1) == 0 )
  {
    v2 = flt_A3D65C;
    dword_B3F528 |= 1u;
    flt_B3F4C8 = v2;
    flt_B3F4CC = v2;
    flt_B3F4D0 = v2;
    flt_B3F4D4 = v2;
    flt_B3F4D8 = v2;
    v3 = flt_A45E4C;
    flt_B3F4DC = flt_A45E4C;
    flt_B3F4E4 = v3;
    flt_B3F4F0 = v3;
    flt_B3F4F4 = v3;
    flt_B3F4F8 = v3;
    flt_B3F504 = v3;
    flt_B3F50C = v3;
    flt_B3F510 = v3;
    flt_B3F514 = v3;
    flt_B3F51C = v3;
    flt_B3F520 = v3;
    flt_B3F524 = v3;
    flt_B3F4E0 = v2;
    flt_B3F4E8 = v2;
    flt_B3F4EC = v2;
    flt_B3F4FC = v2;
    flt_B3F500 = v2;
    flt_B3F508 = v2;
    flt_B3F518 = v2;
  }
  v4 = (float *)FormHeapAlloc(0x60u);
  *v4 = *a1 * flt_B3F4C8;
  v4[1] = flt_B3F4CC * a1[1];
  v4[2] = flt_B3F4D0 * a1[2];
  v4[3] = *a1 * flt_B3F4D4;
  v4[4] = flt_B3F4D8 * a1[1];
  v4[5] = flt_B3F4DC * a1[2];
  v4[6] = *a1 * flt_B3F4E0;
  v4[7] = flt_B3F4E4 * a1[1];
  v4[8] = flt_B3F4E8 * a1[2];
  v4[9] = *a1 * flt_B3F4EC;
  v4[0xA] = flt_B3F4F0 * a1[1];
  v4[0xB] = flt_B3F4F4 * a1[2];
  v4[0xC] = *a1 * flt_B3F4F8;
  v4[0xD] = flt_B3F4FC * a1[1];
  v4[0xE] = flt_B3F500 * a1[2];
  v4[0xF] = *a1 * flt_B3F504;
  v4[0x10] = flt_B3F508 * a1[1];
  v4[0x11] = flt_B3F50C * a1[2];
  v4[0x12] = *a1 * flt_B3F510;
  v4[0x13] = flt_B3F514 * a1[1];
  v4[0x14] = flt_B3F518 * a1[2];
  v4[0x15] = *a1 * flt_B3F51C;
  v4[0x16] = flt_B3F520 * a1[1];
  v4[0x17] = flt_B3F524 * a1[2];
  if ( a2 )
  {
    v6 = (float *)FormHeapAlloc(0x80u);
    if ( v6 )
    {
      *v6 = 0.0;
      v6[1] = 0.0;
      v6[2] = 0.0;
      v6[3] = 0.0;
      v6[4] = 0.0;
      v6[5] = 0.0;
      v6[6] = 0.0;
      v6[7] = 0.0;
      v6[8] = 0.0;
      v6[9] = 0.0;
      v6[0xA] = 0.0;
      v6[0xB] = 0.0;
      v6[0xC] = 0.0;
      v6[0xD] = 0.0;
      v6[0xE] = 0.0;
      v6[0xF] = 0.0;
      v6[0x10] = 0.0;
      v6[0x11] = 0.0;
      v6[0x12] = 0.0;
      v6[0x13] = 0.0;
      v6[0x14] = 0.0;
      v6[0x15] = 0.0;
      v6[0x16] = 0.0;
      v6[0x17] = 0.0;
      v6[0x18] = 0.0;
      v6[0x19] = 0.0;
      v6[0x1A] = 0.0;
      v6[0x1B] = 0.0;
      v6[0x1C] = 0.0;
      v6[0x1D] = 0.0;
      v6[0x1E] = 0.0;
      v6[0x1F] = 0.0;
    }
    else
    {
      v6 = 0;
    }
    v11 = (int)v6;
    if ( v6 )
    {
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = *a2;
      v6[5] = a2[1];
      v6[6] = a2[2];
      v6[7] = a2[3];
      v6[8] = *a2;
      v6[9] = a2[1];
      v6[0xA] = a2[2];
      v6[0xB] = a2[3];
      v6[0xC] = *a2;
      v6[0xD] = a2[1];
      v6[0xE] = a2[2];
      v6[0xF] = a2[3];
      v6[0x10] = *a2;
      v6[0x11] = a2[1];
      v6[0x12] = a2[2];
      v6[0x13] = a2[3];
      v6[0x14] = *a2;
      v6[0x15] = a2[1];
      v6[0x16] = a2[2];
      v6[0x17] = a2[3];
      v6[0x18] = *a2;
      v6[0x19] = a2[1];
      v6[0x1A] = a2[2];
      v6[0x1B] = a2[3];
      v6[0x1C] = *a2;
      v6[0x1D] = a2[1];
      v6[0x1E] = a2[2];
      v6[0x1F] = a2[3];
    }
  }
  else
  {
    v11 = 0;
  }
  v7 = (void *)FormHeapAlloc(0x48u);
  qmemcpy(v7, &unk_A7D338, 0x48u);
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v9 = 0;
  if ( v8 )
    v9 = sub_7174B0(v8, 8, (int)v4, 0, v11, 0, 0, 0, 0xC, (int)v7);
  v9->vtbl[1].super.Unk_03((NiObject *)v9);
  return v9;
}
