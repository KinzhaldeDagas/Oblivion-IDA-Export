int __thiscall sub_756CA0(int this, int a2, int a3)
{
  unsigned __int16 v4; // bx
  double v5; // st7
  double v6; // st6
  double v7; // rt0
  int v8; // edx
  double v9; // rt1
  double v10; // st6
  double v11; // st7
  int v12; // esi
  __int16 v13; // di
  int v14; // edx
  double v15; // st5
  int result; // eax
  float v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+Ch] [ebp-4h]
  float v19; // [esp+18h] [ebp+8h]
  float v20; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x756ca9*/
  if ( *(_WORD *)(a3 + 0x48) ) /*0x756cab*/
  {
    v5 = 1.0; /*0x756cb5*/
    v6 = 0.0; /*0x756cb8*/
    while ( 1 ) /*0x756cbf*/
    {
      v8 = *(_DWORD *)(a3 + 0x5C); /*0x756cbf*/
      v9 = v6; /*0x756cc2*/
      v10 = v5; /*0x756cc2*/
      v11 = v9; /*0x756cc2*/
      v12 = v4; /*0x756cc4*/
      v17 = v10; /*0x756cc7*/
      v13 = *(_WORD *)(v8 + 0x1C * v4 + 0x18); /*0x756cd4*/
      v14 = v8 + 0x1C * v4; /*0x756cdd*/
      if ( v13 == *(_WORD *)(this + 0x1C) /*0x756cfb*/
        && *(float *)(this + 0x18) > (double)*(float *)(v14 + 0xC)
        && v11 != *(float *)(this + 0x18) )
      {
        v17 = *(float *)(v14 + 0xC) / *(float *)(this + 0x18); /*0x756d03*/
      }
      v19 = v10; /*0x756d0b*/
      v18 = *(float *)(v14 + 0x10) - *(float *)(v14 + 0xC); /*0x756d15*/
      if ( v13 == *(_WORD *)(this + 0x24) && *(float *)(this + 0x20) > (double)v18 && v11 != *(float *)(this + 0x20) ) /*0x756d35*/
        v19 = v18 / *(float *)(this + 0x20); /*0x756d3a*/
      v15 = v19; /*0x756d42*/
      if ( v17 < (double)v19 ) /*0x756d51*/
        v15 = v17; /*0x756d53*/
      v20 = v15; /*0x756d59*/
      if ( flt_A86530 > (double)v20 ) /*0x756d70*/
        v20 = flt_A86530; /*0x756d72*/
      result = *(_DWORD *)(a3 + 0x4C); /*0x756d7a*/
      ++v4; /*0x756d81*/
      *(float *)(result + 4 * v12) = v20; /*0x756d84*/
      if ( v4 >= *(_WORD *)(a3 + 0x48) ) /*0x756d8b*/
        break; /*0x756d8b*/
      v7 = v10; /*0x756cbd*/
      v6 = v11; /*0x756cbd*/
      v5 = v7; /*0x756cbd*/
    }
  }
  return result; /*0x756d97*/
}
