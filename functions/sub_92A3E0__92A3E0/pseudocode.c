bool *__thiscall sub_92A3E0(_DWORD *this, bool *a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int i; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v14; // eax
  int j; // ecx
  unsigned int v16; // [esp+20h] [ebp+14h]

  v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a6 + 0x2C))(a6, a7); /*0x92a3f7*/
  if ( *(_DWORD *)(a4 + 4) == 0xFFFFFFFF ) /*0x92a3ff*/
  {
    v8 = *(_DWORD *)(a4 + 0xC); /*0x92a401*/
    for ( i = a4; v8; v8 = *(_DWORD *)(v8 + 0xC) ) /*0x92a408*/
      i = v8; /*0x92a410*/
    v10 = *(_DWORD *)(i + 0x1C); /*0x92a419*/
  }
  else
  {
    v11 = *(_DWORD **)(a4 + 0xC); /*0x92a41e*/
    while ( 1 ) /*0x92a42f*/
    {
      v12 = *(_DWORD *)(*a3 + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 8))(*v11) + 0x10C); /*0x92a42f*/
      if ( (v12 & 4) != 0 ) /*0x92a43e*/
      {
        v10 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v11 + 0x2C))(*v11, *(_DWORD *)(a4 + 4)); /*0x92a47e*/
        goto LABEL_11; /*0x92a481*/
      }
      if ( (v12 & 8) != 0 ) /*0x92a448*/
      {
        v10 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*v11 + 0xC) + 0x2C))( /*0x92a48e*/
                *(_DWORD *)(*v11 + 0xC),
                *(_DWORD *)(a4 + 4));
        goto LABEL_11; /*0x92a491*/
      }
      if ( (v12 & 0x800) != 0 ) /*0x92a44f*/
        break; /*0x92a44f*/
      v11 = (_DWORD *)v11[3]; /*0x92a451*/
      if ( !v11 ) /*0x92a456*/
      {
        v10 = 0; /*0x92a458*/
        goto LABEL_11; /*0x92a458*/
      }
    }
    v14 = *(_DWORD *)(a4 + 0xC); /*0x92a493*/
    for ( j = a4; v14; v14 = *(_DWORD *)(v14 + 0xC) ) /*0x92a49a*/
      j = v14; /*0x92a4a0*/
    v10 = *(_DWORD *)(j + 0x1C); /*0x92a4a9*/
  }
LABEL_11:
  sub_92A2E0(this + 0xFFFFFFFD, a2, v10, v16); /*0x92a45b*/
  return a2; /*0x92a46e*/
}
