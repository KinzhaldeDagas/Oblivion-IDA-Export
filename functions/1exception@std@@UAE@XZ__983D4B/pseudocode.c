void __thiscall std::exception::~exception(std::exception *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0; /*0x983d4b*/
  *(_DWORD *)this = &std::exception::`vftable'; /*0x983d4f*/
  if ( !v1 ) /*0x983d55*/
    free(*((void **)this + 1)); /*0x983d5a*/
}
