void __thiscall MiddleLowProcess::~MiddleLowProcess(#555 *this)
{
  *(_DWORD *)this = &MiddleLowProcess::`vftable'; /*0x658718*/
  AVCollection_destr((AVCollection *)((char *)this + 0x94)); /*0x65872c*/
  LowProcess::~LowProcess(this); /*0x65873b*/
}
