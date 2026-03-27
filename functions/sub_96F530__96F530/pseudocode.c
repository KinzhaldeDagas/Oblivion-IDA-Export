void __thiscall sub_96F530(int this, float *a2, float *a3)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  bool v7; // zf
  float v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // rtt
  double v15; // st6
  double v16; // st7
  double v17; // st7
  float v18; // [esp+8h] [ebp-34h]
  int v19; // [esp+Ch] [ebp-30h] BYREF
  float v20; // [esp+10h] [ebp-2Ch]
  float v21; // [esp+14h] [ebp-28h]
  float v22; // [esp+18h] [ebp-24h] BYREF
  float v23; // [esp+1Ch] [ebp-20h]
  float v24; // [esp+20h] [ebp-1Ch]
  float v25; // [esp+24h] [ebp-18h]
  float v26; // [esp+28h] [ebp-14h]
  float v27; // [esp+2Ch] [ebp-10h]
  float v28; // [esp+30h] [ebp-Ch]
  float v29; // [esp+34h] [ebp-8h]
  float v30; // [esp+38h] [ebp-4h]
  float v31; // [esp+40h] [ebp+4h]

  sub_976A50((float *)(*(_DWORD *)(this + 0x38) + 0x20), (int)&v19, *(float *)(this + 0x44));
  v4 = *(float **)(this + 0x3C);
  v5 = v4[1];
  v6 = v4[2];
  v7 = *(_DWORD *)(this + 0x18) == 2;
  v8 = v4[3];
  v22 = v5;
  v23 = v6;
  v24 = v8;
  if ( v7 )
  {
    v18 = *(float *)(this + 0x1C);
    v25 = *a2 * v18;
    v26 = a2[1] * v18;
    v27 = v18 * a2[2];
    *(float *)&v19 = v25 + *(float *)&v19;
    v20 = v20 + v26;
    v21 = v21 + v27;
    v31 = *(float *)(this + 0x1C);
    v25 = *a3 * v31;
    v26 = a3[1] * v31;
    v27 = v31 * a3[2];
    v22 = v25 + v22;
    v23 = v23 + v26;
    v24 = v24 + v27;
    v25 = v22 - *(float *)&v19;
    v9 = v23;
    *(float *)(this + 0x2C) = v25;
    v26 = v9 - v20;
    v10 = v24;
    *(float *)(this + 0x30) = v26;
    v27 = v10 - v21;
    *(float *)(this + 0x34) = v27;
    sub_43F350((float *)(this + 0x2C));
    v11 = *(float *)(*(_DWORD *)(this + 0x38) + 0x38);
    v25 = *(float *)(this + 0x2C) * v11;
    v26 = *(float *)(this + 0x30) * v11;
    v27 = v11 * *(float *)(this + 0x34);
    v22 = v25 + *(float *)&v19;
    v12 = v26;
    *(float *)(this + 0x20) = v22;
    v23 = v12 + v20;
    v13 = v27;
    *(float *)(this + 0x24) = v23;
    v24 = v13 + v21;
    *(float *)(this + 0x28) = v24;
  }
  else
  {
    v25 = v22 + *(float *)&v19;
    v26 = v23 + v20;
    v27 = v24 + v21;
    v14 = dbl_A2FAA0;
    v28 = v25 * v14;
    v15 = v26;
    *(float *)(this + 0x20) = v28;
    v29 = v15 * v14;
    *(float *)(this + 0x24) = v29;
    v30 = v14 * v27;
    *(float *)(this + 0x28) = v30;
    if ( sub_8AA390((float *)&v19, &v22) )
    {
      v28 = v22 - *(float *)&v19;
      v16 = v23;
      *(float *)(this + 0x2C) = v28;
      v29 = v16 - v20;
      v17 = v24;
      *(float *)(this + 0x30) = v29;
      v30 = v17 - v21;
      *(float *)(this + 0x34) = v30;
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
