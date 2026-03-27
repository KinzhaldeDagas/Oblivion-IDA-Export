void __thiscall sub_96F940(int this, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st5
  double v7; // st7
  double v8; // st7
  double v9; // rtt
  double v10; // st6
  double v11; // st7
  double v12; // st7
  float v13; // [esp+8h] [ebp-34h]
  int v14; // [esp+Ch] [ebp-30h] BYREF
  float v15; // [esp+10h] [ebp-2Ch]
  float v16; // [esp+14h] [ebp-28h]
  int v17; // [esp+18h] [ebp-24h] BYREF
  float v18; // [esp+1Ch] [ebp-20h]
  float v19; // [esp+20h] [ebp-1Ch]
  float v20; // [esp+24h] [ebp-18h]
  float v21; // [esp+28h] [ebp-14h]
  float v22; // [esp+2Ch] [ebp-10h]
  float v23; // [esp+30h] [ebp-Ch]
  float v24; // [esp+34h] [ebp-8h]
  float v25; // [esp+38h] [ebp-4h]
  float v26; // [esp+40h] [ebp+4h]

  sub_976A50((float *)(*(_DWORD *)(this + 0x38) + 0x20), (int)&v14, *(float *)(this + 0x44));
  sub_976A50((float *)(*(_DWORD *)(this + 0x3C) + 0x20), (int)&v17, *(float *)(this + 0x48));
  if ( *(_DWORD *)(this + 0x18) == 2 )
  {
    v13 = *(float *)(this + 0x1C);
    v20 = *a2 * v13;
    v21 = a2[1] * v13;
    v22 = v13 * a2[2];
    *(float *)&v14 = v20 + *(float *)&v14;
    v15 = v15 + v21;
    v16 = v16 + v22;
    v26 = *(float *)(this + 0x1C);
    v20 = *a3 * v26;
    v21 = a3[1] * v26;
    v22 = v26 * a3[2];
    *(float *)&v17 = v20 + *(float *)&v17;
    v18 = v18 + v21;
    v19 = v19 + v22;
    v20 = *(float *)&v17 - *(float *)&v14;
    v4 = v18;
    *(float *)(this + 0x2C) = v20;
    v21 = v4 - v15;
    v5 = v19;
    *(float *)(this + 0x30) = v21;
    v22 = v5 - v16;
    *(float *)(this + 0x34) = v22;
    sub_43F350((float *)(this + 0x2C));
    v6 = *(float *)(*(_DWORD *)(this + 0x38) + 0x38);
    v20 = *(float *)(this + 0x2C) * v6;
    v21 = *(float *)(this + 0x30) * v6;
    v22 = v6 * *(float *)(this + 0x34);
    *(float *)&v17 = v20 + *(float *)&v14;
    v7 = v21;
    *(float *)(this + 0x20) = *(float *)&v17;
    v18 = v7 + v15;
    v8 = v22;
    *(float *)(this + 0x24) = v18;
    v19 = v8 + v16;
    *(float *)(this + 0x28) = v19;
  }
  else
  {
    v20 = *(float *)&v17 + *(float *)&v14;
    v21 = v18 + v15;
    v22 = v19 + v16;
    v9 = dbl_A2FAA0;
    v23 = v20 * v9;
    v10 = v21;
    *(float *)(this + 0x20) = v23;
    v24 = v10 * v9;
    *(float *)(this + 0x24) = v24;
    v25 = v9 * v22;
    *(float *)(this + 0x28) = v25;
    if ( sub_8AA390((float *)&v17, (float *)&v14) )
    {
      v23 = *(float *)&v17 - *(float *)&v14;
      v11 = v18;
      *(float *)(this + 0x2C) = v23;
      v24 = v11 - v15;
      v12 = v19;
      *(float *)(this + 0x30) = v24;
      v25 = v12 - v16;
      *(float *)(this + 0x34) = v25;
      sub_43F350((float *)(this + 0x2C));
    }
    else
    {
      *(_DWORD *)(this + 0x2C) = dword_B258E8;
      *(_DWORD *)(this + 0x30) = dword_B258EC;
      *(_DWORD *)(this + 0x34) = dword_B258F0;
    }
  }
}
