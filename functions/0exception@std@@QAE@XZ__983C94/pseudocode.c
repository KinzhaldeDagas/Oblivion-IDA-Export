std::exception *__thiscall std::exception::exception(std::exception *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &std::exception::`vftable';
  return this;
}
