double __thiscall sub_404E90(int this, unsigned __int8 a2)
{
  if ( *(_BYTE *)(this + 0xE) == 1 && a2 == *(_BYTE *)(this + 0xF) ) /*0x404e9d*/
    return 1.0; /*0x404e9f*/
  else
    return *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * a2 + 0x10); /*0x404ead*/
}
