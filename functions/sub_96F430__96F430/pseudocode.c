double __thiscall sub_96F430(float *this, float *a2, float *a3, float a4)
{
  int v5; // eax
  float v6; // ecx
  double v7; // st7
  float *v8; // eax
  float v10; // [esp+4h] [ebp-24h] BYREF
  float v11; // [esp+8h] [ebp-20h]
  float v12; // [esp+Ch] [ebp-1Ch]
  float v13; // [esp+10h] [ebp-18h] BYREF
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]
  float v19; // [esp+2Ch] [ebp+4h]
  float v21; // [esp+34h] [ebp+Ch]

  v5 = *((_DWORD *)this + 0xE);
  v6 = *(float *)(v5 + 0x20);
  v5 += 0x20;
  v13 = v6;
  v14 = *(float *)(v5 + 4);
  v15 = *(float *)(v5 + 8);
  v16 = *(_DWORD *)(v5 + 0xC);
  v17 = *(_DWORD *)(v5 + 0x10);
  v7 = *a2;
  v18 = *(_DWORD *)(v5 + 0x14);
  v10 = v7 * a4;
  v11 = a2[1] * a4;
  v12 = a2[2] * a4;
  v13 = v10 + v6;
  v14 = v14 + v11;
  v15 = v15 + v12;
  v10 = *a3 * a4;
  v11 = a3[1] * a4;
  v8 = (float *)(*((_DWORD *)this + 0xF) + 4);
  v12 = a4 * a3[2];
  v19 = v8[1] + v11;
  v21 = v8[2] + v12;
  v10 = *v8 + v10;
  v11 = v19;
  v12 = v21;
  return (float)(sub_96FBB0(&v10, &v13, this + 0x11) * *(this + 0x10) - dbl_A2F928);
}
