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

  v4 = 0xFFFFFFFF >> *((_DWORD *)this + 8);
  v5 = *((_DWORD *)this + 9);
  v6 = 0x30 * (a2 >> (0x20 - *((_BYTE *)this + 0x20)));
  v7 = *(_DWORD *)(v6 + v5 + 0xC);
  v8 = *(_BYTE *)(v6 + v5 + 0x10);
  v9 = (int *)(v5 + v6);
  v10 = (unsigned __int16 *)(v7 + (a2 & v4) * v9[5]);
  v11 = v9[1];
  v12 = *v9;
  if ( v8 == 1 )
  {
    v13 = *v10;
    v14 = v10[1];
    v15 = v10[2];
  }
  else
  {
    v13 = *(_DWORD *)v10;
    v14 = *((_DWORD *)v10 + 1);
    v15 = *((_DWORD *)v10 + 2);
  }
  v16 = v11 * v13;
  v17 = v11 * v14;
  *(float *)&v21 = *(float *)(v16 + v12) * *(this + 4);
  *((float *)&v21 + 1) = *(float *)(v16 + v12 + 4) * *(this + 5);
  *((float *)&v21 + 2) = *(float *)(v16 + v12 + 8) * *(this + 6);
  *(float *)&v22 = *(this + 4) * *(float *)(v17 + v12);
  *((float *)&v22 + 1) = *(float *)(v17 + v12 + 4) * *(this + 5);
  *((float *)&v22 + 2) = *(float *)(v17 + v12 + 8) * *(this + 6);
  v18 = (float *)(v12 + v11 * v15);
  result = (_OWORD *)a3;
  HIDWORD(v21) = 0;
  HIDWORD(v22) = 0;
  HIDWORD(v23) = 0;
  *(float *)&v23 = *(this + 4) * *v18;
  *((float *)&v23 + 1) = v18[1] * *(this + 5);
  *((float *)&v23 + 2) = v18[2] * *(this + 6);
  if ( a3 )
  {
    v20 = *(this + 0xC);
    *(_WORD *)(a3 + 6) = 1;
    *(float *)(a3 + 0xC) = v20;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = &hkTriangleShape::`vftable';
  }
  else
  {
    result = 0;
  }
  result[1] = v21;
  result[2] = v22;
  result[3] = v23;
  return result;
}
