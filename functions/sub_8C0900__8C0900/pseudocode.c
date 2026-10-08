signed int __thiscall sub_8C0900(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8c0924*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 0x29); /*0x8c093c*/
    v2[2] = 0x90; /*0x8c093e*/
    *(this + 1) = sub_911000(v2); /*0x8c0957*/
  }
  return 0x90; /*0x8c095f*/
}
