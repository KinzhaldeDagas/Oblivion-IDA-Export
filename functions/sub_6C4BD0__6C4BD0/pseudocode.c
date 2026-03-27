int __thiscall sub_6C4BD0(_WORD *this)
{
  unsigned int i; // edi
  int v3; // eax
  int v4; // esi

  for ( i = 0; i < (unsigned __int16)*(this + 0x23); ++i )
  {
    v3 = *((_DWORD *)this + 0x10);
    v4 = *(_DWORD *)(v3 + 4 * i);
    if ( v4 )
    {
      sub_6CAC60(*(_DWORD **)(v3 + 4 * i));
      *(_DWORD *)(v4 + 0x40) = 0;
    }
  }
  sub_739670(this + 0x1E);
  return NiTMap_Clear((_DWORD *)this + 0x16);
}
