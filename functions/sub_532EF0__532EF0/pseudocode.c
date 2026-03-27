void __thiscall sub_532EF0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  unsigned int i; // esi
  int v6; // ecx

  if ( *(_WORD *)(this + 0x14) )
  {
    v2 = **(_DWORD **)(this + 0xC);
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x58))(v2);
      if ( v3 )
        v4 = *(_DWORD *)(v3 + 0x2B0);
      else
        v4 = 0;
      if ( v4 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(this + 0x14); ++i )
        {
          v6 = *(_DWORD *)(*(_DWORD *)(this + 0xC) + 4 * i);
          if ( v6 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6);
        }
      }
    }
  }
}
