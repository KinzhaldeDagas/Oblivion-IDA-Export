void __thiscall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_DWORD *)this = &std::bad_cast::`vftable';
  std::exception::~exception(this);
}
