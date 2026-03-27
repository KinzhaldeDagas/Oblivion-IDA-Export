_DWORD *__thiscall sub_4FCC40(_DWORD *this)
{
  *this = 0;
  *(this + 0x81) = 0;
  *(this + 0x82) = 0;
  *(this + 0x103) = 0;
  *(this + 0x106) = 0;
  _memset(this + 1, 0, 0x200);
  _memset(this + 0x83, 0, 0x200);
  return this;
}
