signed int __thiscall sub_926B00(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x926b24*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x926b3c*/
    v2[2] = 0xA0; /*0x926b3e*/
    *(this + 1) = sub_924930(v2); /*0x926b57*/
  }
  return 0xA0; /*0x926b5f*/
}
