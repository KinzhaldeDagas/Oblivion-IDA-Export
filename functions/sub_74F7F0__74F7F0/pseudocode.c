double __thiscall sub_74F7F0(int this, unsigned __int8 a2)
{
  if ( *(_BYTE *)(this + 0xE) == 1 && a2 == *(_BYTE *)(this + 0xF) ) /*0x74f7fd*/
    return *(float *)(this + 0x20); /*0x74f7ff*/
  else
    return *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * a2 + 0x14); /*0x74f80e*/
}
