std::exception *__thiscall sub_414900(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *((_DWORD *)this + 9) = 0xF;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 0x10) = 0;
  sub_414420((int)this + 0xC, (_DWORD *)a2 + 3, 0, 0xFFFFFFFF);
  return this;
}
