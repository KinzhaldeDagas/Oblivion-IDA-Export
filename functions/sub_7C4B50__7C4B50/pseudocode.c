__int16 __cdecl sub_7C4B50(int a1, int a2, int a3, void **a4, int a5)
{
  void **v5; // ebx
  float *v6; // ebp
  Ni2DBuffer *v7; // edi
  float *v9; // eax
  _WORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  void **v13; // eax
  unsigned __int16 *v14; // eax
  int v15; // [esp-8h] [ebp-2Ch]

  v5 = a4; /*0x7c4b79*/
  v6 = 0; /*0x7c4b7d*/
  *a4 = 0; /*0x7c4b80*/
  v7 = (Ni2DBuffer *)sub_7C3C50((const char **)a1); /*0x7c4b87*/
  if ( !v7 ) /*0x7c4b92*/
    return 0; /*0x7c4b94*/
  v15 = *(_DWORD *)(a1 + 4); /*0x7c4bb3*/
  a4 = 0; /*0x7c4bb9*/
  if ( NiTMap_GetAt(&stru_B2CBC4, v15, &a4) ) /*0x7c4bbd*/
  {
    v6 = (float *)a4; /*0x7c4c04*/
  }
  else
  {
    v9 = (float *)FormHeapAlloc(0x44u); /*0x7c4bc8*/
    if ( v9 ) /*0x7c4bd2*/
      v6 = sub_7C3C10(v9); /*0x7c4bdb*/
    NiSmartPointer_Set__((Ni2DBuffer **)v6 + 0xC, v7); /*0x7c4be1*/
    qmemcpy(v6, (const void *)a1, 0x20u); /*0x7c4bf1*/
    NiTMap_SetAt(&stru_B2CBC4, *(_DWORD *)(a1 + 4), (int)v6); /*0x7c4bfd*/
  }
  v10 = *v5; /*0x7c4c08*/
  v11 = *((_DWORD **)v6 + 9); /*0x7c4c0c*/
  if ( !*v5 ) /*0x7c4c08*/
  {
    while ( v11 ) /*0x7c4c22*/
    {
      v12 = v11[2]; /*0x7c4c27*/
      v11 = (_DWORD *)*v11; /*0x7c4c31*/
      if ( *(_WORD *)(v12 + 0xE) != *(_WORD *)(v12 + 0xC) /*0x7c4c3d*/
        && a2 == *(_DWORD *)(v12 + 0x38)
        && a3 == *(_DWORD *)(v12 + 0x3C) )
      {
        *v5 = (void *)v12; /*0x7c4c46*/
        break; /*0x7c4c46*/
      }
      if ( *v5 ) /*0x7c4c3f*/
        break; /*0x7c4c42*/
    }
    v10 = *v5; /*0x7c4c48*/
    if ( !*v5 ) /*0x7c4c48*/
      goto LABEL_18; /*0x7c4c48*/
  }
  if ( v10[6] == v10[7] ) /*0x7c4c52*/
  {
LABEL_18:
    v13 = (void **)FormHeapAlloc(0x44u); /*0x7c4c5a*/
    a4 = v13; /*0x7c4c62*/
    if ( v13 ) /*0x7c4c70*/
      v14 = sub_8129F0((unsigned __int16 *)v13, (int)v7, a2, a3, 0); /*0x7c4c7d*/
    else
      v14 = 0; /*0x7c4c84*/
    *v5 = v14; /*0x7c4c86*/
    ++unk_B43348; /*0x7c4c8c*/
    sub_812660(*v5, (const void *)a1); /*0x7c4c9e*/
    NiTPointerList__AddTail((BSTextureManager *)(v6 + 8), v5); /*0x7c4ca6*/
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a5 + 0x84))(a5, *(_DWORD *)*v5, 1); /*0x7c4cbe*/
  }
  return *((_WORD *)*v5 + 6) - *((_WORD *)*v5 + 7); /*0x7c4b97*/
}
