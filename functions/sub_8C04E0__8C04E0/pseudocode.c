signed int __thiscall sub_8C04E0(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c0504*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x29); /*0x8c0519*/
    v2[2] = 0x30; /*0x8c051b*/
    *(this + 1) = sub_910E00(v2); /*0x8c0534*/
  }
  return 0x30; /*0x8c053c*/
}
