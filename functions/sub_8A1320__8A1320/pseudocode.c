int __thiscall sub_8A1320(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x1C))(v3);
  else
    v4 = 0;
  for ( i = 0; i < v4; ++i )
  {
    if ( this && (v6 = *(this + 2)) != 0 && (v7 = *(_DWORD *)(*(_DWORD *)(v6 + 0x10) + 8 * i)) != 0 )
      v8 = *(_DWORD *)(v7 + 8);
    else
      v8 = 0;
    if ( v8 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x24))(v8, a2);
  }
  return sub_6EC2C0(a2);
}
