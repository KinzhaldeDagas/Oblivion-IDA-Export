char __thiscall sub_4F0DA0(int this, __int16 a2, unsigned __int16 a3)
{
  if ( *(_BYTE *)(this + 0xD8) )
    return sub_4D6760((_DWORD *)(this + 0xC8), a3 | (a2 << 0x10), &a2);
  else
    return 1;
}
