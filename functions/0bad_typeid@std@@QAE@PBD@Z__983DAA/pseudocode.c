std::bad_typeid *__thiscall std::bad_typeid::bad_typeid(std::bad_typeid *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_typeid::`vftable';
  return this;
}
