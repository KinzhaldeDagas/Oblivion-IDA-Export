unsigned int __thiscall sub_9575F0(
        _DWORD **this,
        _DWORD *a2,
        _DWORD *a3,
        int **a4,
        _DWORD *a5,
        int *a6,
        unsigned int *a7,
        int a8)
{
  double v8; // st7
  float *v9; // edi
  int v10; // esi
  int v11; // edx
  double v12; // st6
  double v13; // st6
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  bool v17; // sf
  bool v18; // of
  unsigned int result; // eax
  char v20; // bl
  int v21; // ebp
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // ebp
  _DWORD *v25; // ebx
  int v26; // ebx
  int v27; // eax
  int v28; // ebp
  _DWORD *v29; // ebx
  _DWORD *v30; // ebx
  _DWORD **v31; // [esp+14h] [ebp-20h] BYREF
  int v32; // [esp+18h] [ebp-1Ch] BYREF
  int v33; // [esp+1Ch] [ebp-18h]
  int v34; // [esp+20h] [ebp-14h]
  int v35; // [esp+28h] [ebp-Ch]
  int v36; // [esp+2Ch] [ebp-8h]
  int v37; // [esp+30h] [ebp-4h]
  unsigned int i; // [esp+50h] [ebp+1Ch]

  v8 = *(float *)&SrcStr;
  v9 = (float *)a8;
  v10 = *(_DWORD *)(*(_DWORD *)(a8 + 0xB8) + 0x14);
  v11 = 0;
  v31 = this;
  if ( v10 )
  {
    v12 = *(float *)(a8 + 0x10) - *(float *)(a8 + 0xC);
    *(float *)&a8 = v12;
    if ( v12 > *(float *)&SrcStr )
      v8 = *(float *)&a8;
  }
  if ( v10 != 1 )
  {
    v13 = v9[6] - v9[5];
    *(float *)&a8 = v13;
    if ( v13 > v8 )
    {
      v11 = 1;
      v8 = *(float *)&a8;
    }
  }
  if ( v10 != 2 && v9[8] - v9[7] > v8 )
    v11 = 2;
  v14 = (int)(*a7 - *a6) >> 4;
  (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int, _DWORD ***, int *))(**(this + 0xA) + 0x10))(
    *(this + 0xA),
    &v31[0xD][8 * v11],
    *a6,
    v14,
    &v31,
    &v32);
  LOBYTE(a8) = 0;
  if ( v14 > 1 )
    sub_957460(*a6, 0, v14 - 1, a8);
  v15 = (*a3 - *a2) & 0xFFFFFFF0;
  v16 = (*a5 - (_DWORD)*a4) & 0xFFFFFFF0;
  v18 = __OFSUB__(v15, v16);
  v17 = (int)(v15 - v16) < 0;
  result = *a7;
  v20 = v17 ^ v18;
  for ( i = *a7; *a6 < *a7; i = *a7 )
  {
    v21 = (*a3 - *a2) >> 4;
    v22 = (*a5 - (int)*a4) >> 4;
    if ( v20 )
      v22 *= 4;
    else
      v21 *= 4;
    if ( v21 >= v22 )
    {
      *a5 += 0x10;
      *a6 += 0x10;
      v20 = 0;
    }
    else
    {
      v23 = (_DWORD *)(i - 0x10);
      v31 = *(_DWORD ***)(i - 0x10);
      v32 = *(_DWORD *)(i - 0x10 + 4);
      v24 = *(_DWORD *)(i - 0x10 + 8);
      v34 = *(_DWORD *)(i - 0x10 + 0xC);
      v25 = (_DWORD *)*a6;
      v33 = v24;
      *v23 = *v25;
      v23[1] = v25[1];
      v23[2] = v25[2];
      v23[3] = v25[3];
      v26 = (int)*a4;
      v27 = **a4;
      v35 = (*a4)[1];
      v28 = *(_DWORD *)(v26 + 8);
      v37 = *(_DWORD *)(v26 + 0xC);
      v29 = (_DWORD *)*a3;
      v36 = v28;
      *v29 = v31;
      v29[1] = v32;
      v29[2] = v33;
      v29[3] = v34;
      v30 = (_DWORD *)*a6;
      *v30 = v27;
      v30[1] = v35;
      v30[2] = v36;
      v30[3] = v37;
      *a3 += 0x10;
      *a4 += 4;
      *a6 += 0x10;
      *a5 += 0x10;
      v20 = 1;
    }
    result = *a7;
  }
  return result;
}
