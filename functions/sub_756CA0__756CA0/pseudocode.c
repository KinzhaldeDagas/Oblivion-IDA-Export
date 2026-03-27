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

  v4 = 0;
  if ( *(_WORD *)(a3 + 0x48) )
  {
    v5 = 1.0;
    v6 = 0.0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a3 + 0x5C);
      v9 = v6;
      v10 = v5;
      v11 = v9;
      v12 = v4;
      v17 = v10;
      v13 = *(_WORD *)(v8 + 0x1C * v4 + 0x18);
      v14 = v8 + 0x1C * v4;
      if ( v13 == *(_WORD *)(this + 0x1C)
        && *(float *)(this + 0x18) > (double)*(float *)(v14 + 0xC)
        && v11 != *(float *)(this + 0x18) )
      {
        v17 = *(float *)(v14 + 0xC) / *(float *)(this + 0x18);
      }
      v19 = v10;
      v18 = *(float *)(v14 + 0x10) - *(float *)(v14 + 0xC);
      if ( v13 == *(_WORD *)(this + 0x24) && *(float *)(this + 0x20) > (double)v18 && v11 != *(float *)(this + 0x20) )
        v19 = v18 / *(float *)(this + 0x20);
      v15 = v19;
      if ( v17 < (double)v19 )
        v15 = v17;
      v20 = v15;
      if ( flt_A86530 > (double)v20 )
        v20 = flt_A86530;
      result = *(_DWORD *)(a3 + 0x4C);
      ++v4;
      *(float *)(result + 4 * v12) = v20;
      if ( v4 >= *(_WORD *)(a3 + 0x48) )
        break;
      v7 = v10;
      v6 = v11;
      v5 = v7;
    }
  }
  return result;
}
