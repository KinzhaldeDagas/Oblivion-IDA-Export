void __thiscall sub_42C080(int this)
{
  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 )
  {
    if ( *(_DWORD *)(this + 0x198) )
      FormHeapFree(*(_DWORD *)(this + 0x198));
    if ( *(_DWORD *)(this + 0x19C) )
      FormHeapFree(*(_DWORD *)(this + 0x19C));
    *(_DWORD *)(this + 0x198) = 0;
    *(_DWORD *)(this + 0x19C) = 0;
  }
  *(_BYTE *)(this + 0x194) &= ~0x10u;
}
