std::exception *__thiscall sub_6F7DD0(std::exception *this, _DWORD *a2)
{
  std::exception::exception(this);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0xF;
  *((_BYTE *)this + 0x10) = 0;
  sub_414420((int)this + 0xC, a2, 0, 0xFFFFFFFF);
  return this;
}
