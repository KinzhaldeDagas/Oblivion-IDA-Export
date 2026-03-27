signed int __thiscall sub_8DB580(int this, int a2)
{
  if ( a2 + *(unsigned __int16 *)(this + 0xC) + *(_DWORD *)(this + 0x4C) > 0xFE )
    return 1;
  *(_WORD *)(this + 0xC) = (unsigned __int8)(a2 + *(_BYTE *)(this + 0xC));
  return 0;
}
