int __thiscall sub_8CA940(const void **this, int a2, int a3, int a4)
{
  int v5; // ebx
  const void **v6; // ebp
  const void *v7; // esi
  signed int v8; // eax
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  char *v13; // eax
  int i; // ebx
  int v15; // eax
  int result; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // [esp-4h] [ebp-14h]

  if ( a4 ) /*0x8ca94c*/
    sub_918BC0(a4); /*0x8ca94f*/
  v5 = (int)*(this + 4); /*0x8ca957*/
  v6 = this + 3; /*0x8ca95d*/
  v7 = (const void *)(v5 + 1); /*0x8ca960*/
  v8 = (unsigned int)*(this + 5) & 0x3FFFFFFF; /*0x8ca963*/
  if ( v8 < v5 + 1 ) /*0x8ca96a*/
  {
    v9 = 2 * v8; /*0x8ca96c*/
    if ( (int)v7 >= v9 ) /*0x8ca970*/
      v9 = v5 + 1; /*0x8ca972*/
    sub_8A6E40(this + 3, v9, 8); /*0x8ca978*/
  }
  v10 = (char *)*v6; /*0x8ca980*/
  *(this + 4) = v7; /*0x8ca987*/
  v11 = &v10[8 * v5]; /*0x8ca98a*/
  *(_DWORD *)v11 = a2; /*0x8ca98d*/
  v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x32); /*0x8ca99b*/
  v20 = a4; /*0x8ca9a6*/
  *(_WORD *)(v12 + 4) = 0x50; /*0x8ca9ae*/
  v13 = (char *)sub_9187A0(v12, v5, this + 6, a3, v20); /*0x8ca9b4*/
  *((_DWORD *)v11 + 1) = v13; /*0x8ca9bb*/
  sub_918B40(v13); /*0x8ca9be*/
  for ( i = 0; i < (int)*(this + 0x14); ++i ) /*0x8ca9ca*/
  {
    v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(*((_DWORD *)v11 + 1) + 8) + 8))( /*0x8ca9e2*/
            *((_DWORD *)v11 + 1) + 8,
            **((_DWORD **)*(this + 0x13) + i));
    if ( v15 >= 0 ) /*0x8ca9e7*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(*((_DWORD *)v11 + 1) + 8) + 0x10))(*((_DWORD *)v11 + 1) + 8, v15); /*0x8ca9f3*/
  }
  result = (int)*(this + 4); /*0x8caa01*/
  v17 = (char *)*v6 + 8 * result - 8; /*0x8caa04*/
  if ( *v17 ) /*0x8caa08*/
  {
    result = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*v17 + 8))(*v17, &a4); /*0x8caa15*/
    if ( *(_BYTE *)result ) /*0x8caa18*/
    {
      v18 = *(_DWORD **)(v17[1] + 0x18); /*0x8caa20*/
      sub_918440(v18, 5); /*0x8caa27*/
      sub_9181B0((_DWORD **)v18, 0); /*0x8caa30*/
      sub_918440(v18, 0); /*0x8caa39*/
      v19 = sub_953130(v18); /*0x8caa40*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x10))(v19); /*0x8caa49*/
    }
  }
  return result; /*0x8caa4c*/
}
