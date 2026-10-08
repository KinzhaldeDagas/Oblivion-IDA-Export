int __thiscall sub_8DA3F0(char *this, int a2, int a3)
{
  int result; // eax
  char *v4; // edi
  char *v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // ecx

  result = a3; /*0x8da3f0*/
  v4 = this + 0x20 * a3 + 0xC; /*0x8da401*/
  v5 = this + 4 * a3 + 0xC; /*0x8da405*/
  v6 = 8; /*0x8da409*/
  do /*0x8da465*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8da410*/
      ++*(_WORD *)(a2 + 6); /*0x8da417*/
    v7 = *(_DWORD *)v5; /*0x8da41b*/
    if ( *(_WORD *)(*(_DWORD *)v5 + 4) ) /*0x8da41d*/
    {
      if ( !--*(_WORD *)(v7 + 6) ) /*0x8da428*/
        result = (**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x8da433*/
    }
    *(_DWORD *)v5 = a2; /*0x8da435*/
    if ( *(_WORD *)(a2 + 4) ) /*0x8da437*/
      ++*(_WORD *)(a2 + 6); /*0x8da43e*/
    v8 = *(_DWORD *)v4; /*0x8da442*/
    if ( *(_WORD *)(*(_DWORD *)v4 + 4) ) /*0x8da444*/
    {
      if ( !--*(_WORD *)(v8 + 6) ) /*0x8da44f*/
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x8da45a*/
    }
    *(_DWORD *)v4 = a2; /*0x8da45c*/
    v4 += 4; /*0x8da45e*/
    v5 += 0x20; /*0x8da461*/
    --v6; /*0x8da464*/
  }
  while ( v6 ); /*0x8da465*/
  return result; /*0x8da467*/
}
