void __thiscall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable'; /*0x412cf0*/
  std::exception::~exception(this); /*0x412cf6*/
}
