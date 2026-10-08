void __thiscall sub_42C080(int this)
{
  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 ) /*0x42c08a*/
  {
    if ( *(_DWORD *)(this + 0x198) ) /*0x42c08c*/
      FormHeapFree(*(_DWORD *)(this + 0x198)); /*0x42c097*/
    if ( *(_DWORD *)(this + 0x19C) ) /*0x42c09f*/
      FormHeapFree(*(_DWORD *)(this + 0x19C)); /*0x42c0aa*/
    *(_DWORD *)(this + 0x198) = 0; /*0x42c0b2*/
    *(_DWORD *)(this + 0x19C) = 0; /*0x42c0bc*/
  }
  *(_BYTE *)(this + 0x194) &= ~0x10u; /*0x42c0c6*/
}
