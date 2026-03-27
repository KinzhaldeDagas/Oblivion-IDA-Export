void __thiscall Archive_DiscardRetainedFilenames(int this, char a2)
{
  bool v3; // zf
  unsigned int i; // edi

  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 )
  {
    if ( *(_DWORD *)(this + 0x1A0) )
      FormHeapFree(*(_DWORD *)(this + 0x1A0));
    v3 = *(_DWORD *)(this + 0x1A4) == 0;
    *(_DWORD *)(this + 0x1A0) = 0;
    if ( !v3 && !a2 )
    {
      for ( i = 0; i < *(_DWORD *)(this + 0x164); ++i )
        FormHeapFree(*(_DWORD *)(*(_DWORD *)(this + 0x1A4) + 4 * i));
      FormHeapFree(*(_DWORD *)(this + 0x1A4));
      *(_DWORD *)(this + 0x1A4) = 0;
    }
  }
  *(_BYTE *)(this + 0x194) &= ~0x20u;
}
