signed int __thiscall sub_8DB580(int this, int a2)
{
  if ( a2 + *(unsigned __int16 *)(this + 0xC) + *(_DWORD *)(this + 0x4C) > 0xFE ) /*0x8db595*/
    return 1; /*0x8db597*/
  *(_WORD *)(this + 0xC) = (unsigned __int8)(a2 + *(_BYTE *)(this + 0xC)); /*0x8db5a8*/
  return 0; /*0x8db59c*/
}
