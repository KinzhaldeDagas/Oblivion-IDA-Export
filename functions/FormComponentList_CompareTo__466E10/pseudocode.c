char __thiscall FormComponentList_CompareTo(char *this, int a2)
{
  int v3; // edi
  char *v4; // esi
  int v5; // ebx

  if ( !a2 )
    return 1;
  v3 = 0;
  v4 = this;
  v5 = a2 - (_DWORD)this;
  while ( *(_DWORD *)v4
        ? (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v4 + 0xC))(*(_DWORD *)v4, *(_DWORD *)&v4[v5]) == 0
        : *(_DWORD *)&v4[v5] == 0 )
  {
    ++v3;
    v4 += 4;
    if ( v3 >= 0x1A )
      return 0;
  }
  return 1;
}
