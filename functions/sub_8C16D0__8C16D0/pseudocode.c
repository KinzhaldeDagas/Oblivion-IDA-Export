signed int __thiscall sub_8C16D0(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c16f4*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x8c170c*/
    v2[2] = 0xA0; /*0x8c170e*/
    *(this + 1) = sub_9117E0(v2); /*0x8c1727*/
  }
  return 0xA0; /*0x8c172f*/
}
