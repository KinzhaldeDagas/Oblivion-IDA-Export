std::bad_cast *__thiscall std::bad_cast::bad_cast(std::bad_cast *this, const struct std::bad_cast *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}
