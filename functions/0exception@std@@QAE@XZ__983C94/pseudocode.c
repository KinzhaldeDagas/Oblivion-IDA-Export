std::exception *__thiscall std::exception::exception(std::exception *this)
{
  *((_DWORD *)this + 1) = 0; /*0x983c96*/
  *((_DWORD *)this + 2) = 0; /*0x983c9a*/
  *(_DWORD *)this = &std::exception::`vftable'; /*0x983c9e*/
  return this; /*0x983ca4*/
}
