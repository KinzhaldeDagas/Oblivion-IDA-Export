double __thiscall sub_96F810(float *this, float *a2, float *a3, float a4)
{
  int v5; // eax
  float v6; // ecx
  int v7; // edx
  int v8; // eax
  double v9; // st7
  float v11; // [esp+4h] [ebp-3Ch]
  float v12; // [esp+4h] [ebp-3Ch]
  float v13; // [esp+8h] [ebp-38h]
  float v14; // [esp+8h] [ebp-38h]
  float v15; // [esp+Ch] [ebp-34h]
  float v16; // [esp+Ch] [ebp-34h]
  float v17; // [esp+10h] [ebp-30h] BYREF
  float v18; // [esp+14h] [ebp-2Ch]
  float v19; // [esp+18h] [ebp-28h]
  int v20; // [esp+1Ch] [ebp-24h]
  int v21; // [esp+20h] [ebp-20h]
  int v22; // [esp+24h] [ebp-1Ch]
  float v23; // [esp+28h] [ebp-18h] BYREF
  float v24; // [esp+2Ch] [ebp-14h]
  float v25; // [esp+30h] [ebp-10h]
  int v26; // [esp+34h] [ebp-Ch]
  int v27; // [esp+38h] [ebp-8h]
  int v28; // [esp+3Ch] [ebp-4h]

  v5 = *((_DWORD *)this + 0xE);
  v6 = *(float *)(v5 + 0x20);
  v5 += 0x20;
  v23 = v6;
  v24 = *(float *)(v5 + 4);
  v25 = *(float *)(v5 + 8);
  v26 = *(_DWORD *)(v5 + 0xC);
  v27 = *(_DWORD *)(v5 + 0x10);
  v7 = *(_DWORD *)(v5 + 0x14);
  v8 = *((_DWORD *)this + 0xF) + 0x20;
  v28 = v7;
  v17 = *(float *)v8;
  v18 = *(float *)(v8 + 4);
  v19 = *(float *)(v8 + 8);
  v20 = *(_DWORD *)(v8 + 0xC);
  v21 = *(_DWORD *)(v8 + 0x10);
  v9 = *a2;
  v22 = *(_DWORD *)(v8 + 0x14);
  v11 = v9 * a4;
  v13 = a2[1] * a4;
  v15 = a2[2] * a4;
  v23 = v11 + v6;
  v24 = v24 + v13;
  v25 = v25 + v15;
  v12 = *a3 * a4;
  v14 = a3[1] * a4;
  v16 = a4 * a3[2];
  v17 = v12 + v17;
  v18 = v18 + v14;
  v19 = v19 + v16;
  return (float)(sub_96FCD0(&v23, &v17, this + 0x11, this + 0x12) * *(this + 0x10) - dbl_A2F928);
}
