signed int __thiscall sub_8C25B0(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c25d4*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x29); /*0x8c25e9*/
    v2[2] = 0x60; /*0x8c25eb*/
    *(this + 1) = sub_9138D0(v2); /*0x8c2604*/
  }
  return 0x60; /*0x8c260c*/
}
