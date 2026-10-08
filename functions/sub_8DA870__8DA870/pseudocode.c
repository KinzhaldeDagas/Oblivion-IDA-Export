char __thiscall sub_8DA870(int this, int a2)
{
  const void *v2; // eax
  double v3; // st7
  double v4; // st7
  long double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7

  *(_DWORD *)(this + 0x1C24) = *(_DWORD *)(a2 + 8); /*0x8da87b*/
  *(_DWORD *)(this + 0x1C20) = *(_DWORD *)(a2 + 0xC); /*0x8da884*/
  v2 = (const void *)(this + 0x1A50); /*0x8da894*/
  v3 = *(float *)(a2 + 8) * *(float *)(a2 + 8) * *(float *)a2; /*0x8da89c*/
  *(_DWORD *)(this + 0x1A50) = *(_DWORD *)(a2 + 4); /*0x8da89f*/
  *(_DWORD *)(this + 0x1A54) = *(_DWORD *)(a2 + 4); /*0x8da8a4*/
  v4 = v3 * kHeadBodyNormalMatchRadius; /*0x8da8aa*/
  *(_DWORD *)(this + 0x1A5C) = *(_DWORD *)(a2 + 4); /*0x8da8b0*/
  if ( *(_BYTE *)(a2 + 0x19) ) /*0x8da8b3*/
    *(float *)(this + 0x1A5C) = flt_A53954 * v4; /*0x8da8c2*/
  *(_DWORD *)(this + 0x1A58) = *(_DWORD *)(a2 + 4); /*0x8da8c8*/
  if ( *(_BYTE *)(a2 + 0x1A) ) /*0x8da8cb*/
    *(float *)(this + 0x1A58) = v4 * kTerrainLODQuadRayDirectionZ; /*0x8da8d8*/
  v5 = dbl_A9A3B0; /*0x8da8df*/
  *(_DWORD *)(this + 0x1A80) = 0x7F7FFFFF; /*0x8da8e5*/
  *(_BYTE *)(this + 0x1A60) = 0; /*0x8da8ec*/
  *(_WORD *)(this + 0x1A88) = *(_WORD *)(a2 + 0x10); /*0x8da8f6*/
  *(_DWORD *)(this + 0x1A64) = 0xE02D78EC; /*0x8da8ff*/
  *(_DWORD *)(this + 0x1A68) = 0xE02D78EC; /*0x8da902*/
  *(_DWORD *)(this + 0x1A74) = 0xDF0AC723; /*0x8da90a*/
  *(_DWORD *)(this + 0x1A78) = 0xDF0AC723; /*0x8da90d*/
  *(_DWORD *)(this + 0x1A6C) = 0x3F800000; /*0x8da915*/
  *(_DWORD *)(this + 0x1A70) = 0x3F800000; /*0x8da918*/
  *(_DWORD *)(this + 0x1A84) = 0x3F800000; /*0x8da91b*/
  *(float *)(this + 0x1A7C) = fabs(v5); /*0x8da928*/
  qmemcpy((void *)(this + 0x1B40), v2, 0x3Cu); /*0x8da930*/
  qmemcpy((void *)(this + 0x1A8C), v2, 0x3Cu); /*0x8da93f*/
  qmemcpy((void *)(this + 0x1AC8), v2, 0x3Cu); /*0x8da94e*/
  qmemcpy((void *)(this + 0x1B04), v2, 0x3Cu); /*0x8da95d*/
  *(_DWORD *)(this + 0x1B4C) = *(_DWORD *)(a2 + 4); /*0x8da962*/
  *(_DWORD *)(this + 0x1B44) = *(_DWORD *)(a2 + 4); /*0x8da968*/
  *(_DWORD *)(this + 0x1B48) = *(_DWORD *)(a2 + 4); /*0x8da96e*/
  if ( *(_BYTE *)(a2 + 0x18) ) /*0x8da971*/
  {
    v6 = flt_A31E2C; /*0x8da97e*/
    *(_DWORD *)(this + 0x1AA0) = 0xBF19999A; /*0x8da984*/
    *(_DWORD *)(this + 0x1AA4) = 0xBE4CCCCC; /*0x8da98e*/
    *(_DWORD *)(this + 0x1AB0) = 0xBE99999A; /*0x8da998*/
    *(_DWORD *)(this + 0x1AB4) = 0xBE0F5C28; /*0x8da9a2*/
    *(_DWORD *)(this + 0x1AB8) = 0x3D2C0831; /*0x8da9ac*/
    *(_DWORD *)(this + 0x1ABC) = 0x3E4CCCCC; /*0x8da9b6*/
    *(float *)(this + 0x1AA8) = v6 / *(float *)(a2 + 0xC); /*0x8da9c3*/
    *(float *)(this + 0x1AAC) = flt_A5ACC4 / *(float *)(a2 + 0xC); /*0x8da9d2*/
    *(float *)(this + 0x1AC0) = flt_A9A3A8 / *(float *)(a2 + 0xC) * flt_A53954; /*0x8da9e7*/
    *(_WORD *)(this + 0x1AC4) = *(_WORD *)(a2 + 0x12); /*0x8da9f1*/
    *(_BYTE *)(this + 0x1A9C) = 1; /*0x8da9f8*/
    if ( *(_BYTE *)(a2 + 0x18) ) /*0x8da9fe*/
    {
      v7 = flt_A31E2C; /*0x8daa09*/
      *(_DWORD *)(this + 0x1ADC) = 0xBF000000; /*0x8daa0f*/
      *(_DWORD *)(this + 0x1AE0) = 0xBE2AAAAB; /*0x8daa19*/
      *(_DWORD *)(this + 0x1AEC) = 0xBE800000; /*0x8daa23*/
      *(_DWORD *)(this + 0x1AF0) = 0xBDEEEEEF; /*0x8daa2d*/
      *(_DWORD *)(this + 0x1AF4) = 0x3D0F5C29; /*0x8daa37*/
      *(_DWORD *)(this + 0x1AF8) = 0x3E2AAAAB; /*0x8daa41*/
      *(float *)(this + 0x1AE4) = v7 / *(float *)(a2 + 0xC); /*0x8daa4e*/
      *(float *)(this + 0x1AE8) = flt_A5ACC4 / *(float *)(a2 + 0xC); /*0x8daa5d*/
      *(float *)(this + 0x1AFC) = flt_A97F40 / *(float *)(a2 + 0xC) * kTerrainLODQuadRayDirectionZ; /*0x8daa72*/
      *(_WORD *)(this + 0x1B00) = *(_WORD *)(a2 + 0x14); /*0x8daa7c*/
      *(_BYTE *)(this + 0x1AD8) = 1; /*0x8daa83*/
    }
  }
  *(_DWORD *)(this + 0x1B04) = *(_DWORD *)(a2 + 4); /*0x8daa8c*/
  if ( *(_BYTE *)(a2 + 0x18) ) /*0x8daa92*/
  {
    v8 = flt_A31E2C; /*0x8daa9d*/
    *(_DWORD *)(this + 0x1B18) = 0xBECCCCCD; /*0x8daaa3*/
    *(_DWORD *)(this + 0x1B1C) = 0xBD0158ED; /*0x8daaad*/
    *(_DWORD *)(this + 0x1B28) = 0xBE4CCCCD; /*0x8daab7*/
    *(_DWORD *)(this + 0x1B2C) = 0xBCB51618; /*0x8daac1*/
    *(_DWORD *)(this + 0x1B30) = 0x3BD94DB8; /*0x8daacb*/
    *(_DWORD *)(this + 0x1B34) = 0x3D0158ED; /*0x8daad5*/
    *(float *)(this + 0x1B20) = v8 / *(float *)(a2 + 0xC); /*0x8daae2*/
    *(float *)(this + 0x1B24) = flt_A5ACC4 / *(float *)(a2 + 0xC); /*0x8daaf1*/
    *(float *)(this + 0x1B38) = flt_A9A3A4 / *(float *)(a2 + 0xC) * kTerrainLODQuadRayDirectionZ; /*0x8dab06*/
    *(_WORD *)(this + 0x1B3C) = *(_WORD *)(a2 + 0x16); /*0x8dab10*/
    *(_BYTE *)(this + 0x1B14) = 1; /*0x8dab17*/
  }
  memset((void *)(this + 0x19D4), 1u, 0x40u); /*0x8dab2d*/
  *(_BYTE *)(this + 0x19DF) = 1; /*0x8dab36*/
  *(_BYTE *)(this + 0x19E7) = 1; /*0x8dab3c*/
  *(_BYTE *)(this + 0x19ED) = 1; /*0x8dab42*/
  *(_BYTE *)(this + 0x19EE) = 1; /*0x8dab48*/
  *(_BYTE *)(this + 0x19EF) = 1; /*0x8dab4e*/
  *(_BYTE *)(this + 0x19F0) = 1; /*0x8dab54*/
  *(_BYTE *)(this + 0x19F1) = 1; /*0x8dab5a*/
  *(_BYTE *)(this + 0x19F7) = 1; /*0x8dab60*/
  *(_BYTE *)(this + 0x19F8) = 1; /*0x8dab66*/
  *(_BYTE *)(this + 0x19FF) = 1; /*0x8dab6c*/
  *(_BYTE *)(this + 0x19DD) = 0; /*0x8dab72*/
  *(_BYTE *)(this + 0x19DE) = 0; /*0x8dab79*/
  *(_BYTE *)(this + 0x19E0) = 3; /*0x8dab80*/
  *(_BYTE *)(this + 0x19E1) = 4; /*0x8dab86*/
  *(_BYTE *)(this + 0x19E2) = 3; /*0x8dab8d*/
  *(_BYTE *)(this + 0x19E5) = 0; /*0x8dab93*/
  *(_BYTE *)(this + 0x19E6) = 0; /*0x8dab9a*/
  *(_BYTE *)(this + 0x19E8) = 2; /*0x8daba1*/
  *(_BYTE *)(this + 0x19E9) = 2; /*0x8daba7*/
  *(_BYTE *)(this + 0x19EA) = 2; /*0x8dabad*/
  *(_BYTE *)(this + 0x19F2) = 2; /*0x8dabb3*/
  *(_BYTE *)(this + 0x19F5) = 3; /*0x8dabb9*/
  *(_BYTE *)(this + 0x19F6) = 2; /*0x8dabbf*/
  *(_BYTE *)(this + 0x19F9) = 2; /*0x8dabc5*/
  *(_BYTE *)(this + 0x19FA) = 2; /*0x8dabcb*/
  *(_BYTE *)(this + 0x19FD) = 4; /*0x8dabd1*/
  *(_BYTE *)(this + 0x19FE) = 2; /*0x8dabd8*/
  *(_BYTE *)(this + 0x1A00) = 2; /*0x8dabde*/
  *(_BYTE *)(this + 0x1A01) = 2; /*0x8dabe4*/
  *(_BYTE *)(this + 0x1A02) = 2; /*0x8dabea*/
  *(_BYTE *)(this + 0x1A05) = 3; /*0x8dabf0*/
  *(_BYTE *)(this + 0x1A06) = 2; /*0x8dabf6*/
  *(_BYTE *)(this + 0x1A07) = 2; /*0x8dabfc*/
  *(_BYTE *)(this + 0x1A08) = 2; /*0x8dac02*/
  *(_BYTE *)(this + 0x1A09) = 2; /*0x8dac08*/
  *(_BYTE *)(this + 0x1A0A) = 2; /*0x8dac0e*/
  return 2; /*0x8dab35*/
}
