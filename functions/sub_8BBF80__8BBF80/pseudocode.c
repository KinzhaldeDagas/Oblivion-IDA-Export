_WORD *__thiscall sub_8BBF80(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A98328;
  *((_DWORD *)this + 2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_BA7FB4 + 0x10))(dword_BA7FB4, a2);
  return this;
}
