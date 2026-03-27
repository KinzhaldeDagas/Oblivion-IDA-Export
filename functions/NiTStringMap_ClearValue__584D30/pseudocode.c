void __thiscall NiTStringMap_ClearValue(_BYTE *this, int a2)
{
  if ( *(this + 0x10) )
    FormHeapFree(*(_DWORD *)(a2 + 4));
}
