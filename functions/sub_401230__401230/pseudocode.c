// Converts an allocation size to a segregated free-list bin index; valid only for sizes through 0x1000.
int __thiscall MemoryHeap_SizeToBinIndex(_DWORD *this, signed int a2)
{
  if ( a2 <= 0x1000 ) /*0x401239*/
    return (a2 - *(this + 1)) / 0x100; /*0x40124d*/
  else
    return 0xFFFFFFFF; /*0x40123b*/
}
