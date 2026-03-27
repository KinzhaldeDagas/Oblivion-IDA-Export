signed int __thiscall sub_8C0900(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) )
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 0x29);
    v2[2] = 0x90;
    *(this + 1) = sub_911000(v2);
  }
  return 0x90;
}
