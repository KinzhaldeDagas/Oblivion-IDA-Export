void __thiscall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
}
