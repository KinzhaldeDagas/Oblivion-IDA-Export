signed int __thiscall sub_926B00(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) )
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x29);
    v2[2] = 0xA0;
    *(this + 1) = sub_924930(v2);
  }
  return 0xA0;
}
