signed int __thiscall sub_8C1F30(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c1f54*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x4C, 0x29); /*0x8c1f69*/
    v2[2] = 0x4C; /*0x8c1f6b*/
    *(this + 1) = sub_913180(v2); /*0x8c1f84*/
  }
  return 0x4C; /*0x8c1f8c*/
}
