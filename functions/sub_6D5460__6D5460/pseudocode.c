void __thiscall sub_6D5460(int this)
{
  int v2; // edi
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // ecx
  double v11; // st4
  double v12; // st3
  double v13; // st6
  double v14; // st3
  double v15; // st5
  double v16; // st4
  double v17; // st3
  float *v18; // eax
  unsigned __int16 v19; // [esp+14h] [ebp-30h]
  char v20[4]; // [esp+20h] [ebp-24h] BYREF
  int v21; // [esp+24h] [ebp-20h] BYREF
  int v22; // [esp+28h] [ebp-1Ch] BYREF
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h]
  float v25; // [esp+34h] [ebp-10h]
  float v26; // [esp+38h] [ebp-Ch]
  float v27; // [esp+3Ch] [ebp-8h]
  float v28; // [esp+40h] [ebp-4h]

  if ( *(_BYTE *)(this + 0x54) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 0x30) + 0xB4);
    if ( *(_WORD *)(this + 0x4C) < (*(_BYTE *)(v2 + 0x2C) & 0x3Fu) )
    {
      v26 = 0.0;
      v3 = (float *)sub_6D50B0((_DWORD *)this, &v21, &v22, v20);
      if ( v3 )
        v26 = sub_6BB270(*(float *)(this + 0x28), v3, v22, v21, (int *)(this + 0x3C), v20[0]);
      v23 = 0.0;
      v4 = (float *)sub_6D5100((_DWORD *)this, &v21, &v22, v20);
      if ( v4 )
        v23 = sub_6BB270(*(float *)(this + 0x28), v4, v22, v21, (int *)(this + 0x44), v20[0]);
      v24 = 1.0;
      v5 = (float *)sub_6D5150((_DWORD *)this, &v21, &v22, v20);
      if ( v5 )
        v24 = sub_6BB270(*(float *)(this + 0x28), v5, v22, v21, (int *)(this + 0x40), v20[0]);
      v25 = 1.0;
      v6 = (float *)sub_6D51A0((_DWORD *)this, &v21, &v22, v20);
      if ( v6 )
        v25 = sub_6BB270(*(float *)(this + 0x28), v6, v22, v21, (int *)(this + 0x48), v20[0]);
      v7 = *(_DWORD *)(this + 0x50);
      v19 = *(_WORD *)(this + 0x4C);
      *(float *)&v22 = v24 / *(float *)(v7 + 0x40);
      v21 = *(int *)(v7 + 0x38);
      v28 = v25 / *(float *)(v7 + 0x44);
      *(float *)v20 = *(float *)(v7 + 0x3C);
      v8 = sub_7282F0((NiGeometry *)v2, v19);
      v9 = *(float *)&v22;
      LOWORD(v10) = *(_WORD *)(v2 + 8);
      v11 = dbl_A2FAA0;
      v12 = v26;
      v26 = v26 - *(float *)&v21 * *(float *)&v22;
      v13 = v12;
      v26 = (1.0 - *(float *)&v22) * v11 - v26;
      v14 = v28;
      v28 = v23 - *(float *)v20 * v28;
      v15 = v14;
      v27 = v11 * (1.0 - v14) + v28;
      if ( (_WORD)v10 )
      {
        v16 = v27;
        v10 = (unsigned __int16)v10;
        v17 = v26;
        do
        {
          v8 += 8;
          --v10;
          *(float *)(v8 - 8) = v9 * *(float *)(v8 - 8) + v17;
          *(float *)(v8 - 4) = *(float *)(v8 - 4) * v15 + v16;
        }
        while ( v10 );
      }
      v18 = *(float **)(this + 0x50);
      v18[0xE] = v13;
      v18[0xF] = v23;
      v18[0x10] = v24;
      v18[0x11] = v25;
      *(_WORD *)(v2 + 0x2E) |= 8u;
      *(_BYTE *)(this + 0x54) = 0;
    }
  }
}
