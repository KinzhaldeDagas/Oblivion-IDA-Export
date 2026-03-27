float *__thiscall sub_976680(float *this, int a2, float *a3)
{
  double v4; // st7
  float *v5; // ecx
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  bool v9; // zf
  float v10; // ecx
  double v11; // st7
  float *result; // eax
  float v13; // edx
  double v14; // st5
  float v15; // [esp+4h] [ebp-28h]
  float v16; // [esp+4h] [ebp-28h]
  float v17; // [esp+8h] [ebp-24h]
  float v18; // [esp+8h] [ebp-24h]
  float v19; // [esp+Ch] [ebp-20h]
  float v20; // [esp+Ch] [ebp-20h]
  float v21; // [esp+10h] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-1Ch]
  float v23; // [esp+14h] [ebp-18h] BYREF
  float v24; // [esp+18h] [ebp-14h]
  float v25; // [esp+1Ch] [ebp-10h]
  float v26; // [esp+20h] [ebp-Ch]
  float v27; // [esp+24h] [ebp-8h]
  float v28; // [esp+28h] [ebp-4h]

  v4 = *(this + 0x1A);
  v5 = this + 0xF;
  v15 = v4;
  v26 = *(this + 0x15) * v15;
  v27 = *(this + 0x16) * v15;
  v28 = v15 * *(this + 0x17);
  v16 = *(this + 0x19);
  v17 = *(this + 0x12) * v16;
  v19 = *(this + 0x13) * v16;
  v21 = v16 * *(this + 0x14);
  v23 = *v5 + v17;
  v24 = v5[1] + v19;
  v25 = v5[2] + v21;
  v18 = v23 + v26;
  v6 = v24;
  *(this + 8) = v18;
  v20 = v6 + v27;
  v7 = v25;
  *(this + 9) = v20;
  v22 = v7 + v28;
  *(this + 0xA) = v22;
  v8 = sub_9741F0(v5, &v23);
  v9 = *((_DWORD *)this + 6) == 2;
  v26 = -*v8;
  v27 = -v8[1];
  v10 = v27;
  v11 = v8[2];
  result = (float *)LODWORD(v26);
  *(this + 0xB) = v26;
  v28 = -v11;
  v13 = v28;
  *(this + 0xC) = v10;
  *(this + 0xD) = v13;
  if ( v9 )
  {
    v14 = *(this + 7);
    v26 = *a3 * v14;
    v27 = a3[1] * v14;
    v28 = v14 * a3[2];
    *(this + 8) = *(this + 8) + v26;
    *(this + 9) = *(this + 9) + v27;
    *(this + 0xA) = v28 + *(this + 0xA);
    return a3;
  }
  return result;
}
