signed int __thiscall sub_8BFDB0(_DWORD *this)
{
  _WORD *v2; // eax

  if ( !*(this + 1) ) /*0x8bfdd4*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x8bfdec*/
    v2[2] = 0xA0; /*0x8bfdee*/
    *(this + 1) = sub_9107C0(v2); /*0x8bfe07*/
  }
  return 0xA0; /*0x8bfe0f*/
}
