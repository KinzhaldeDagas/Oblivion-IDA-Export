void __thiscall NiTStringMap_ClearValue(_BYTE *this, int a2)
{
  if ( *(this + 0x10) ) /*0x584d30*/
    FormHeapFree(*(_DWORD *)(a2 + 4)); /*0x584d3e*/
}
