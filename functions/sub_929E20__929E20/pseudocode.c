_OWORD *__thiscall sub_929E20(float *this, unsigned int a2, int a3)
{
  unsigned int v4; // edx
  int v5; // esi
  unsigned int v6; // eax
  int v7; // ebx
  char v8; // cl
  int *v9; // eax
  unsigned __int16 *v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  float *v18; // esi
  _OWORD *result; // eax
  double v20; // st7
  __int128 v21; // [esp+10h] [ebp-30h]
  __int128 v22; // [esp+20h] [ebp-20h]
  __int128 v23; // [esp+30h] [ebp-10h]

  v4 = 0xFFFFFFFF >> *((_DWORD *)this + 8); /*0x929e39*/
  v5 = *((_DWORD *)this + 9); /*0x929e42*/
  v6 = 0x30 * (a2 >> (0x20 - *((_BYTE *)this + 0x20))); /*0x929e4c*/
  v7 = *(_DWORD *)(v6 + v5 + 0xC); /*0x929e4f*/
  v8 = *(_BYTE *)(v6 + v5 + 0x10); /*0x929e53*/
  v9 = (int *)(v5 + v6); /*0x929e57*/
  v10 = (unsigned __int16 *)(v7 + (a2 & v4) * v9[5]); /*0x929e5f*/
  v11 = v9[1]; /*0x929e64*/
  v12 = *v9; /*0x929e67*/
  if ( v8 == 1 ) /*0x929e69*/
  {
    v13 = *v10; /*0x929e6b*/
    v14 = v10[1]; /*0x929e6e*/
    v15 = v10[2]; /*0x929e72*/
  }
  else
  {
    v13 = *(_DWORD *)v10; /*0x929e78*/
    v14 = *((_DWORD *)v10 + 1); /*0x929e7a*/
    v15 = *((_DWORD *)v10 + 2); /*0x929e7d*/
  }
  v16 = v11 * v13; /*0x929e80*/
  v17 = v11 * v14; /*0x929e83*/
  *(float *)&v21 = *(float *)(v16 + v12) * *(this + 4); /*0x929e8f*/
  *((float *)&v21 + 1) = *(float *)(v16 + v12 + 4) * *(this + 5); /*0x929e9a*/
  *((float *)&v21 + 2) = *(float *)(v16 + v12 + 8) * *(this + 6); /*0x929ea5*/
  *(float *)&v22 = *(this + 4) * *(float *)(v17 + v12); /*0x929eaf*/
  *((float *)&v22 + 1) = *(float *)(v17 + v12 + 4) * *(this + 5); /*0x929eba*/
  *((float *)&v22 + 2) = *(float *)(v17 + v12 + 8) * *(this + 6); /*0x929ec9*/
  v18 = (float *)(v12 + v11 * v15); /*0x929ecd*/
  result = (_OWORD *)a3; /*0x929ed2*/
  HIDWORD(v21) = 0; /*0x929ed9*/
  HIDWORD(v22) = 0; /*0x929ee1*/
  HIDWORD(v23) = 0; /*0x929ee9*/
  *(float *)&v23 = *(this + 4) * *v18; /*0x929ef1*/
  *((float *)&v23 + 1) = v18[1] * *(this + 5); /*0x929efb*/
  *((float *)&v23 + 2) = v18[2] * *(this + 6); /*0x929f05*/
  if ( a3 ) /*0x929f09*/
  {
    v20 = *(this + 0xC); /*0x929f0b*/
    *(_WORD *)(a3 + 6) = 1; /*0x929f0e*/
    *(float *)(a3 + 0xC) = v20; /*0x929f14*/
    *(_DWORD *)(a3 + 8) = 0; /*0x929f17*/
    *(_DWORD *)a3 = &hkTriangleShape::`vftable'; /*0x929f1e*/
  }
  else
  {
    result = 0; /*0x929f26*/
  }
  result[1] = v21; /*0x929f2d*/
  result[2] = v22; /*0x929f37*/
  result[3] = v23; /*0x929f41*/
  return result; /*0x929f36*/
}
