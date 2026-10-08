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

  v8 = *(float *)&SrcStr; /*0x9575f3*/
  v9 = (float *)a8; /*0x9575fd*/
  v10 = *(_DWORD *)(*(_DWORD *)(a8 + 0xB8) + 0x14); /*0x957607*/
  v11 = 0; /*0x95760a*/
  v31 = this; /*0x95760e*/
  if ( v10 ) /*0x957612*/
  {
    v12 = *(float *)(a8 + 0x10) - *(float *)(a8 + 0xC); /*0x957617*/
    *(float *)&a8 = v12; /*0x95761a*/
    if ( v12 > *(float *)&SrcStr ) /*0x957629*/
      v8 = *(float *)&a8; /*0x95762d*/
  }
  if ( v10 != 1 ) /*0x957634*/
  {
    v13 = v9[6] - v9[5]; /*0x957639*/
    *(float *)&a8 = v13; /*0x95763c*/
    if ( v13 > v8 ) /*0x957647*/
    {
      v11 = 1; /*0x95764b*/
      v8 = *(float *)&a8; /*0x957650*/
    }
  }
  if ( v10 != 2 && v9[8] - v9[7] > v8 ) /*0x957668*/
    v11 = 2; /*0x95766a*/
  v14 = (int)(*a7 - *a6) >> 4; /*0x957690*/
  (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int, _DWORD ***, int *))(**(this + 0xA) + 0x10))( /*0x9576a4*/
    *(this + 0xA),
    &v31[0xD][8 * v11],
    *a6,
    v14,
    &v31,
    &v32);
  LOBYTE(a8) = 0; /*0x9576aa*/
  if ( v14 > 1 ) /*0x9576af*/
    sub_957460(*a6, 0, v14 - 1, a8); /*0x9576bd*/
  v15 = (*a3 - *a2) & 0xFFFFFFF0; /*0x9576e3*/
  v16 = (*a5 - (_DWORD)*a4) & 0xFFFFFFF0; /*0x9576e6*/
  v18 = __OFSUB__(v15, v16); /*0x9576e9*/
  v17 = (int)(v15 - v16) < 0; /*0x9576e9*/
  result = *a7; /*0x9576ef*/
  v20 = v17 ^ v18; /*0x9576f1*/
  for ( i = *a7; *a6 < *a7; i = *a7 ) /*0x9576fa*/
  {
    v21 = (*a3 - *a2) >> 4; /*0x95770c*/
    v22 = (*a5 - (int)*a4) >> 4; /*0x95770f*/
    if ( v20 ) /*0x957714*/
      v22 *= 4; /*0x957716*/
    else
      v21 *= 4; /*0x95771b*/
    if ( v21 >= v22 ) /*0x957720*/
    {
      *a5 += 0x10; /*0x9577c6*/
      *a6 += 0x10; /*0x9577c8*/
      v20 = 0; /*0x9577cb*/
    }
    else
    {
      v23 = (_DWORD *)(i - 0x10); /*0x95772a*/
      v31 = *(_DWORD ***)(i - 0x10); /*0x957731*/
      v32 = *(_DWORD *)(i - 0x10 + 4); /*0x957738*/
      v24 = *(_DWORD *)(i - 0x10 + 8); /*0x95773c*/
      v34 = *(_DWORD *)(i - 0x10 + 0xC); /*0x957742*/
      v25 = (_DWORD *)*a6; /*0x957746*/
      v33 = v24; /*0x957748*/
      *v23 = *v25; /*0x95774e*/
      v23[1] = v25[1]; /*0x957753*/
      v23[2] = v25[2]; /*0x957759*/
      v23[3] = v25[3]; /*0x95775f*/
      v26 = (int)*a4; /*0x957762*/
      v27 = **a4; /*0x957764*/
      v35 = (*a4)[1]; /*0x957769*/
      v28 = *(_DWORD *)(v26 + 8); /*0x95776d*/
      v37 = *(_DWORD *)(v26 + 0xC); /*0x957773*/
      v29 = (_DWORD *)*a3; /*0x957777*/
      v36 = v28; /*0x957779*/
      *v29 = v31; /*0x957781*/
      v29[1] = v32; /*0x957787*/
      v29[2] = v33; /*0x95778e*/
      v29[3] = v34; /*0x957795*/
      v30 = (_DWORD *)*a6; /*0x957798*/
      *v30 = v27; /*0x95779a*/
      v30[1] = v35; /*0x9577a0*/
      v30[2] = v36; /*0x9577a7*/
      v30[3] = v37; /*0x9577ae*/
      *a3 += 0x10; /*0x9577b1*/
      *a4 += 4; /*0x9577b4*/
      *a6 += 0x10; /*0x9577b7*/
      *a5 += 0x10; /*0x9577ba*/
      v20 = 1; /*0x9577bd*/
    }
    result = *a7; /*0x9577d1*/
  }
  return result; /*0x9577df*/
}
