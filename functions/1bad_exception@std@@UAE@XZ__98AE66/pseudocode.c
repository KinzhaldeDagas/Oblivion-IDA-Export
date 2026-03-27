void __thiscall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  std::exception::~exception(this);
}
