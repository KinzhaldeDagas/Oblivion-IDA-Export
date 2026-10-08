int __cdecl sub_40FA20(int *a1, float a2, float a3, float a4, float a5)
{
  _DWORD *v6; // ebx
  unsigned int v7; // ebp
  bool v8; // cf
  unsigned int v9; // ebp
  int v11; // [esp+7Ch] [ebp-Ch]
  float v12; // [esp+80h] [ebp-8h]
  float v13; // [esp+84h] [ebp-4h]
  float v14; // [esp+8Ch] [ebp+4h]
  float i; // [esp+8Ch] [ebp+4h]
  float j; // [esp+8Ch] [ebp+4h]

  sub_40F970(*a1); /*0x40fa2d*/
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)*a1 + 0xE4))(*a1, 7, 0); /*0x40fa41*/
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xE, 0); /*0x40fa52*/
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xA8, 0xF); /*0x40fa66*/
  v6 = (_DWORD *)a1[0x10]; /*0x40fa70*/
  v14 = (float)(unsigned int)a1[0xF]; /*0x40fa7f*/
  v11 = 0; /*0x40fa87*/
  v12 = v14 * a4; /*0x40fa95*/
  v13 = v14 * a5; /*0x40fa9d*/
  if ( a1[0xA] ) /*0x40fa7b*/
  {
    do /*0x40fb83*/
    {
      v7 = 0; /*0x40fab4*/
      for ( i = a2; v7 < a1[9]; i = i + v12 ) /*0x40fab6*/
      {
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++); /*0x40fad0*/
        sub_40F760((int *)*a1, i, a3, a4, a5, a1[0xF], a1[0xF]); /*0x40fafe*/
        ++v7; /*0x40fb07*/
      }
      if ( a1[0xB] ) /*0x40fb1a*/
      {
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++); /*0x40fb30*/
        sub_40F760((int *)*a1, i, a3, a4, a5, a1[0xB], a1[0xF]); /*0x40fb61*/
      }
      v8 = ++v11 < (unsigned int)a1[0xA]; /*0x40fb78*/
      a3 = a3 + v13; /*0x40fb7f*/
    }
    while ( v8 ); /*0x40fb83*/
  }
  if ( a1[0xC] ) /*0x40fb89*/
  {
    v9 = 0; /*0x40fb97*/
    for ( j = a2; v9 < a1[9]; j = j + v12 ) /*0x40fb99*/
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++); /*0x40fbb2*/
      sub_40F760((int *)*a1, j, a3, a4, a5, a1[0xF], a1[0xC]); /*0x40fbe3*/
      ++v9; /*0x40fbec*/
    }
    if ( a1[0xB] ) /*0x40fbff*/
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6); /*0x40fc15*/
      sub_40F760((int *)*a1, j, a3, a4, a5, a1[0xB], a1[0xC]); /*0x40fc43*/
    }
  }
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 7, 1); /*0x40fc5a*/
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xE, 1); /*0x40fc6b*/
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0x1B, 1); /*0x40fc7c*/
  return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, 0); /*0x40fc8f*/
}
