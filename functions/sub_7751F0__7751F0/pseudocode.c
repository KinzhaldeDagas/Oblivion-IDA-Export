signed int __thiscall sub_7751F0(_DWORD *this, char a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  int *v8; // edx

  if ( a2 ) /*0x7751f8*/
  {
    v3 = (_DWORD *)*(this + 0x4E); /*0x7751fa*/
    if ( v3 ) /*0x775202*/
    {
      while ( 1 ) /*0x775207*/
      {
        v4 = v3[2]; /*0x775207*/
        v3 = (_DWORD *)*v3; /*0x77520b*/
        if ( v4 ) /*0x77520d*/
        {
          if ( *(_BYTE *)(v4 + 4) ) /*0x77520f*/
            break; /*0x77520f*/
        }
        if ( !v3 ) /*0x775217*/
          return 0; /*0x775217*/
      }
      return sub_774990(*(_DWORD *)v4); /*0x77522b*/
    }
    return 0; /*0x77521c*/
  }
  v6 = (_DWORD *)*(this + 0x4E); /*0x77522e*/
  if ( !v6 ) /*0x775236*/
    return 0; /*0x775236*/
  while ( 1 ) /*0x775240*/
  {
    v7 = v6[2]; /*0x775240*/
    v6 = (_DWORD *)*v6; /*0x775248*/
    if ( v7 ) /*0x77524a*/
    {
      if ( *(_BYTE *)(v7 + 5) && sub_774EE0(*(_DWORD *)v7) == a3 ) /*0x77525f*/
        break; /*0x77525f*/
    }
    if ( !v6 ) /*0x775263*/
      return 0; /*0x775269*/
  }
  return sub_774990(*v8); /*0x77521b*/
}
