bool __thiscall sub_75E600(int *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v6; // eax

  v2 = a2;
  if ( !a2 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !v4 )
    return 0;
  while ( (char *)v4 != dword_B40864 )
  {
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      return 0;
  }
  v6 = *(this + 0x10);
  return v6 && *(this + 0xC) && NiTMap_GetAt((_DWORD *)(v2 + 0xD4), v6, &a2) && a2;
}
