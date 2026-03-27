void __thiscall MiddleLowProcess::~MiddleLowProcess(#555 *this)
{
  *(_DWORD *)this = &MiddleLowProcess::`vftable';
  AVCollection_destr((_DWORD *)this + 0x25);
  LowProcess::~LowProcess(this);
}
