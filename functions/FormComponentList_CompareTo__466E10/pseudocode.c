char __thiscall FormComponentList_CompareTo(char *this, int a2)
{
  int v3; // edi
  char *v4; // esi
  int v5; // ebx

  if ( !a2 ) /*0x466e17*/
    return 1; /*0x466e19*/
  v3 = 0; /*0x466e21*/
  v4 = this; /*0x466e23*/
  v5 = a2 - (_DWORD)this; /*0x466e25*/
  while ( *(_DWORD *)v4
        ? (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v4 + 0xC))(*(_DWORD *)v4, *(_DWORD *)&v4[v5]) == 0
        : *(_DWORD *)&v4[v5] == 0 )
  {
    ++v3; /*0x466e43*/
    v4 += 4; /*0x466e46*/
    if ( v3 >= 0x1A ) /*0x466e4c*/
      return 0; /*0x466e53*/
  }
  return 1; /*0x466e1b*/
}
