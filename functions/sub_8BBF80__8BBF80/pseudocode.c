_WORD *__thiscall sub_8BBF80(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x8bbf87*/
  *(_DWORD *)this = &off_A98328; /*0x8bbf8d*/
  *((_DWORD *)this + 2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)unk_BA7FB4 + 0x10))(unk_BA7FB4, a2); /*0x8bbf9f*/
  return this; /*0x8bbfa4*/
}
