std::bad_cast *__thiscall std::bad_cast::bad_cast(std::bad_cast *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2); /*0x983d76*/
  *(_DWORD *)this = &std::bad_cast::`vftable'; /*0x983d7b*/
  return this; /*0x983d83*/
}
