char __thiscall sub_8DA870(int this, int a2)
{
  const void *v2; // eax
  double v3; // st7
  double v4; // st7
  long double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7

  *(_DWORD *)(this + 0x1C24) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 0x1C20) = *(_DWORD *)(a2 + 0xC);
  v2 = (const void *)(this + 0x1A50);
  v3 = *(float *)(a2 + 8) * *(float *)(a2 + 8) * *(float *)a2;
  *(_DWORD *)(this + 0x1A50) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 0x1A54) = *(_DWORD *)(a2 + 4);
  v4 = v3 * flt_A3D65C;
  *(_DWORD *)(this + 0x1A5C) = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 0x19) )
    *(float *)(this + 0x1A5C) = flt_A53954 * v4;
  *(_DWORD *)(this + 0x1A58) = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 0x1A) )
    *(float *)(this + 0x1A58) = v4 * flt_A30634;
  v5 = dbl_A9A3B0;
  *(_DWORD *)(this + 0x1A80) = 0x7F7FFFFF;
  *(_BYTE *)(this + 0x1A60) = 0;
  *(_WORD *)(this + 0x1A88) = *(_WORD *)(a2 + 0x10);
  *(_DWORD *)(this + 0x1A64) = 0xE02D78EC;
  *(_DWORD *)(this + 0x1A68) = 0xE02D78EC;
  *(_DWORD *)(this + 0x1A74) = 0xDF0AC723;
  *(_DWORD *)(this + 0x1A78) = 0xDF0AC723;
  *(_DWORD *)(this + 0x1A6C) = 0x3F800000;
  *(_DWORD *)(this + 0x1A70) = 0x3F800000;
  *(_DWORD *)(this + 0x1A84) = 0x3F800000;
  *(float *)(this + 0x1A7C) = fabs(v5);
  qmemcpy((void *)(this + 0x1B40), v2, 0x3Cu);
  qmemcpy((void *)(this + 0x1A8C), v2, 0x3Cu);
  qmemcpy((void *)(this + 0x1AC8), v2, 0x3Cu);
  qmemcpy((void *)(this + 0x1B04), v2, 0x3Cu);
  *(_DWORD *)(this + 0x1B4C) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 0x1B44) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 0x1B48) = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 0x18) )
  {
    v6 = flt_A31E2C;
    *(_DWORD *)(this + 0x1AA0) = 0xBF19999A;
    *(_DWORD *)(this + 0x1AA4) = 0xBE4CCCCC;
    *(_DWORD *)(this + 0x1AB0) = 0xBE99999A;
    *(_DWORD *)(this + 0x1AB4) = 0xBE0F5C28;
    *(_DWORD *)(this + 0x1AB8) = 0x3D2C0831;
    *(_DWORD *)(this + 0x1ABC) = 0x3E4CCCCC;
    *(float *)(this + 0x1AA8) = v6 / *(float *)(a2 + 0xC);
    *(float *)(this + 0x1AAC) = flt_A5ACC4 / *(float *)(a2 + 0xC);
    *(float *)(this + 0x1AC0) = flt_A9A3A8 / *(float *)(a2 + 0xC) * flt_A53954;
    *(_WORD *)(this + 0x1AC4) = *(_WORD *)(a2 + 0x12);
    *(_BYTE *)(this + 0x1A9C) = 1;
    if ( *(_BYTE *)(a2 + 0x18) )
    {
      v7 = flt_A31E2C;
      *(_DWORD *)(this + 0x1ADC) = 0xBF000000;
      *(_DWORD *)(this + 0x1AE0) = 0xBE2AAAAB;
      *(_DWORD *)(this + 0x1AEC) = 0xBE800000;
      *(_DWORD *)(this + 0x1AF0) = 0xBDEEEEEF;
      *(_DWORD *)(this + 0x1AF4) = 0x3D0F5C29;
      *(_DWORD *)(this + 0x1AF8) = 0x3E2AAAAB;
      *(float *)(this + 0x1AE4) = v7 / *(float *)(a2 + 0xC);
      *(float *)(this + 0x1AE8) = flt_A5ACC4 / *(float *)(a2 + 0xC);
      *(float *)(this + 0x1AFC) = flt_A97F40 / *(float *)(a2 + 0xC) * flt_A30634;
      *(_WORD *)(this + 0x1B00) = *(_WORD *)(a2 + 0x14);
      *(_BYTE *)(this + 0x1AD8) = 1;
    }
  }
  *(_DWORD *)(this + 0x1B04) = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 0x18) )
  {
    v8 = flt_A31E2C;
    *(_DWORD *)(this + 0x1B18) = 0xBECCCCCD;
    *(_DWORD *)(this + 0x1B1C) = 0xBD0158ED;
    *(_DWORD *)(this + 0x1B28) = 0xBE4CCCCD;
    *(_DWORD *)(this + 0x1B2C) = 0xBCB51618;
    *(_DWORD *)(this + 0x1B30) = 0x3BD94DB8;
    *(_DWORD *)(this + 0x1B34) = 0x3D0158ED;
    *(float *)(this + 0x1B20) = v8 / *(float *)(a2 + 0xC);
    *(float *)(this + 0x1B24) = flt_A5ACC4 / *(float *)(a2 + 0xC);
    *(float *)(this + 0x1B38) = flt_A9A3A4 / *(float *)(a2 + 0xC) * flt_A30634;
    *(_WORD *)(this + 0x1B3C) = *(_WORD *)(a2 + 0x16);
    *(_BYTE *)(this + 0x1B14) = 1;
  }
  memset((void *)(this + 0x19D4), 1u, 0x40u);
  *(_BYTE *)(this + 0x19DF) = 1;
  *(_BYTE *)(this + 0x19E7) = 1;
  *(_BYTE *)(this + 0x19ED) = 1;
  *(_BYTE *)(this + 0x19EE) = 1;
  *(_BYTE *)(this + 0x19EF) = 1;
  *(_BYTE *)(this + 0x19F0) = 1;
  *(_BYTE *)(this + 0x19F1) = 1;
  *(_BYTE *)(this + 0x19F7) = 1;
  *(_BYTE *)(this + 0x19F8) = 1;
  *(_BYTE *)(this + 0x19FF) = 1;
  *(_BYTE *)(this + 0x19DD) = 0;
  *(_BYTE *)(this + 0x19DE) = 0;
  *(_BYTE *)(this + 0x19E0) = 3;
  *(_BYTE *)(this + 0x19E1) = 4;
  *(_BYTE *)(this + 0x19E2) = 3;
  *(_BYTE *)(this + 0x19E5) = 0;
  *(_BYTE *)(this + 0x19E6) = 0;
  *(_BYTE *)(this + 0x19E8) = 2;
  *(_BYTE *)(this + 0x19E9) = 2;
  *(_BYTE *)(this + 0x19EA) = 2;
  *(_BYTE *)(this + 0x19F2) = 2;
  *(_BYTE *)(this + 0x19F5) = 3;
  *(_BYTE *)(this + 0x19F6) = 2;
  *(_BYTE *)(this + 0x19F9) = 2;
  *(_BYTE *)(this + 0x19FA) = 2;
  *(_BYTE *)(this + 0x19FD) = 4;
  *(_BYTE *)(this + 0x19FE) = 2;
  *(_BYTE *)(this + 0x1A00) = 2;
  *(_BYTE *)(this + 0x1A01) = 2;
  *(_BYTE *)(this + 0x1A02) = 2;
  *(_BYTE *)(this + 0x1A05) = 3;
  *(_BYTE *)(this + 0x1A06) = 2;
  *(_BYTE *)(this + 0x1A07) = 2;
  *(_BYTE *)(this + 0x1A08) = 2;
  *(_BYTE *)(this + 0x1A09) = 2;
  *(_BYTE *)(this + 0x1A0A) = 2;
  return 2;
}
