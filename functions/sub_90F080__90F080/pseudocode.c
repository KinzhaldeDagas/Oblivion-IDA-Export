_WORD *__thiscall sub_90F080(_WORD *this)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9CAA8;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0x80000000;
  *((_DWORD *)this + 2) = 0;
  return this;
}
