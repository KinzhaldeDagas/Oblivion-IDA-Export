int __thiscall sub_8A1560(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( a2 == 0xFFFFFFFF )
    return *(this + 4);
  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x1C))(v3);
  else
    v4 = 0;
  if ( a2 > v4 )
    return *(this + 4);
  if ( this && (v5 = *(this + 2)) != 0 && (v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0x10) + 8 * a2)) != 0 )
    v7 = *(_DWORD *)(v6 + 8);
  else
    v7 = 0;
  if ( !v7 )
    return *(this + 4);
  else
    return *(_DWORD *)(v7 + 0x10);
}
