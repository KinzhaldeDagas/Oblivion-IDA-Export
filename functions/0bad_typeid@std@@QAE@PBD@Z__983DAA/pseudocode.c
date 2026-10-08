std::bad_typeid *__thiscall std::bad_typeid::bad_typeid(std::bad_typeid *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2); /*0x983db2*/
  *(_DWORD *)this = &std::bad_typeid::`vftable'; /*0x983db7*/
  return this; /*0x983dbf*/
}
