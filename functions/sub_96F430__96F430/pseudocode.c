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

  v5 = *((_DWORD *)this + 0xE); /*0x96f436*/
  v6 = *(float *)(v5 + 0x20); /*0x96f439*/
  v5 += 0x20; /*0x96f43c*/
  v13 = v6; /*0x96f43f*/
  v14 = *(float *)(v5 + 4); /*0x96f446*/
  v15 = *(float *)(v5 + 8); /*0x96f44d*/
  v16 = *(_DWORD *)(v5 + 0xC); /*0x96f454*/
  v17 = *(_DWORD *)(v5 + 0x10); /*0x96f45b*/
  v7 = *a2; /*0x96f466*/
  v18 = *(_DWORD *)(v5 + 0x14); /*0x96f468*/
  v10 = v7 * a4; /*0x96f47e*/
  v11 = a2[1] * a4; /*0x96f487*/
  v12 = a2[2] * a4; /*0x96f494*/
  v13 = v10 + v6; /*0x96f4a0*/
  v14 = v14 + v11; /*0x96f4ac*/
  v15 = v15 + v12; /*0x96f4b8*/
  v10 = *a3 * a4; /*0x96f4c0*/
  v11 = a3[1] * a4; /*0x96f4c9*/
  v8 = (float *)(*((_DWORD *)this + 0xF) + 4); /*0x96f4d3*/
  v12 = a4 * a3[2]; /*0x96f4d6*/
  v19 = v8[1] + v11; /*0x96f4e1*/
  v21 = v8[2] + v12; /*0x96f4ec*/
  v10 = *v8 + v10; /*0x96f4fc*/
  v11 = v19; /*0x96f504*/
  v12 = v21; /*0x96f50c*/
  return (float)(sub_96FBB0(&v10, &v13, this + 0x11) * *(this + 0x10) - dbl_A2F928); /*0x96f52a*/
}
