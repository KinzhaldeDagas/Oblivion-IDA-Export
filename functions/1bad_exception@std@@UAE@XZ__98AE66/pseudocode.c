void __thiscall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable'; /*0x98ae66*/
  std::exception::~exception(this); /*0x98ae6c*/
}
