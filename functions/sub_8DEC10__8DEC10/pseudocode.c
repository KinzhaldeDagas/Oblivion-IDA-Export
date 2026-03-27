_WORD *__thiscall sub_8DEC10(_WORD *this)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9A524;
  *((_DWORD *)this + 2) = 0x42040000;
  *((_DWORD *)this + 3) = 0x427C0000;
  return this;
}
