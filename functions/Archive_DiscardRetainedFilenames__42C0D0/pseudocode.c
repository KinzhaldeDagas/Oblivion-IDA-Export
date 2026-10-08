void __thiscall Archive_DiscardRetainedFilenames(int this, char a2)
{
  bool v3; // zf
  unsigned int i; // edi

  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 ) /*0x42c0da*/
  {
    if ( *(_DWORD *)(this + 0x1A0) ) /*0x42c0dc*/
      FormHeapFree(*(_DWORD *)(this + 0x1A0)); /*0x42c0e7*/
    v3 = *(_DWORD *)(this + 0x1A4) == 0; /*0x42c0ef*/
    *(_DWORD *)(this + 0x1A0) = 0; /*0x42c0f6*/
    if ( !v3 && !a2 ) /*0x42c107*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 0x164); ++i ) /*0x42c10c*/
        FormHeapFree(*(_DWORD *)(*(_DWORD *)(this + 0x1A4) + 4 * i)); /*0x42c11e*/
      FormHeapFree(*(_DWORD *)(this + 0x1A4)); /*0x42c138*/
      *(_DWORD *)(this + 0x1A4) = 0; /*0x42c140*/
    }
  }
  *(_BYTE *)(this + 0x194) &= ~0x20u; /*0x42c14b*/
}
