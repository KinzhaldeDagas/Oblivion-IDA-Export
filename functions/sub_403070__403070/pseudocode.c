int __thiscall sub_403070(DIDEVCAPS *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 0x28 * a2 + a3 + 0x14);
  if ( (_WORD)v3 == 0xFFFF )
    return 0xFFFFFFFF;
  else
    return v3 / 0x1194 + 0x20;
}
