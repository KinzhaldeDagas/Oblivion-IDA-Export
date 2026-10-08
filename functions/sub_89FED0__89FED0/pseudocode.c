void __thiscall sub_89FED0(int **this, int a2)
{
  int *v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax
  int *v5; // ecx
  _WORD *v6; // [esp+4h] [ebp+4h]

  if ( this ) /*0x89fed2*/
  {
    v2 = *(this + 2); /*0x89fed4*/
    if ( v2 ) /*0x89fed9*/
    {
      v6 = *(_WORD **)(a2 + 8); /*0x89fee2*/
      v3 = (int)v2; /*0x8e7bd1*/
      v4 = (_DWORD *)v2[6]; /*0x8e7bd3*/
      if ( v4 ) /*0x8e7bd8*/
      {
        if ( v2[2] ) /*0x8e7bda*/
          sub_89BE60(v2, v4); /*0x8e7be3*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(v3 + 0x18)); /*0x8e7beb*/
        *(_DWORD *)(v3 + 0x18) = 0; /*0x8e7bf0*/
      }
      *(_DWORD *)(v3 + 0x18) = v6; /*0x8e7bfb*/
      sub_8BC720(v6); /*0x8e7bfe*/
      v5 = *(int **)(v3 + 8); /*0x8e7c03*/
      if ( v5 ) /*0x8e7c08*/
        sub_899990(v5, v3, *(_DWORD *)(v3 + 0x18)); /*0x8e7c0f*/
    }
  }
}
