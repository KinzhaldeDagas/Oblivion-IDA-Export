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
  _DWORD *v14; // eax
  int v15; // [esp-8h] [ebp-2Ch]

  v5 = a4;
  v6 = 0;
  *a4 = 0;
  v7 = (Ni2DBuffer *)sub_7C3C50((const char **)a1);
  if ( !v7 )
    return 0;
  v15 = *(_DWORD *)(a1 + 4);
  a4 = 0;
  if ( NiTMap_GetAt(&off_B2CBC4, v15, &a4) )
  {
    v6 = (float *)a4;
  }
  else
  {
    v9 = (float *)FormHeapAlloc(0x44u);
    if ( v9 )
      v6 = sub_7C3C10(v9);
    NiSmartPointer_Set__((Ni2DBuffer **)v6 + 0xC, v7);
    qmemcpy(v6, (const void *)a1, 0x20u);
    NiTMap_SetAt(&off_B2CBC4, *(_DWORD *)(a1 + 4), (int)v6);
  }
  v10 = *v5;
  v11 = *((_DWORD **)v6 + 9);
  if ( !*v5 )
  {
    while ( v11 )
    {
      v12 = v11[2];
      v11 = (_DWORD *)*v11;
      if ( *(_WORD *)(v12 + 0xE) != *(_WORD *)(v12 + 0xC)
        && a2 == *(_DWORD *)(v12 + 0x38)
        && a3 == *(_DWORD *)(v12 + 0x3C) )
      {
        *v5 = (void *)v12;
        break;
      }
      if ( *v5 )
        break;
    }
    v10 = *v5;
    if ( !*v5 )
      goto LABEL_18;
  }
  if ( v10[6] == v10[7] )
  {
LABEL_18:
    v13 = (void **)FormHeapAlloc(0x44u);
    a4 = v13;
    if ( v13 )
      v14 = sub_8129F0(v13, (int)v7, a2, a3, 0);
    else
      v14 = 0;
    *v5 = v14;
    ++dword_B43348;
    sub_812660(*v5, (const void *)a1);
    sub_5B1E20((BSTextureManager *)(v6 + 8), v5);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a5 + 0x84))(a5, *(_DWORD *)*v5, 1);
  }
  return *((_WORD *)*v5 + 6) - *((_WORD *)*v5 + 7);
}
