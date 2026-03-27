char __thiscall sub_434C60(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // ecx

  v3 = *(this + 7);
  if ( v3 )
  {
    v4 = *(unsigned __int16 *)(v3 + 0xA);
    for ( i = 0; i < v4; ++i )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(*(this + 7) + 4) + 4 * i);
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x1C))(v6, a2);
    }
  }
  return sub_432820(ioManager, this, a2);
}
