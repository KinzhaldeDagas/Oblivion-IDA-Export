std::locale::_Locimp *__thiscall std::locale::_Locimp::_Locimp(std::locale::_Locimp *this, char a2)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  *((_BYTE *)this + 0x14) = a2;
  sub_414750((int)this + 0x18, "*");
  return this;
}
