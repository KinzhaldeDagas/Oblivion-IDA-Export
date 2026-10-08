signed int __thiscall sub_8B2B00(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8b2b24*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 0x29); /*0x8b2b3c*/
    v2[2] = 0x90; /*0x8b2b3e*/
    *(this + 1) = sub_8B2390(v2); /*0x8b2b57*/
  }
  return 0x90; /*0x8b2b5f*/
}
