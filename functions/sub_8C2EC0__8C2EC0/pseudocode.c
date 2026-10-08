signed int __thiscall sub_8C2EC0(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c2ee4*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x29); /*0x8c2ef9*/
    v2[2] = 0x30; /*0x8c2efb*/
    *(this + 1) = sub_913C30(v2); /*0x8c2f14*/
  }
  return 0x30; /*0x8c2f1c*/
}
