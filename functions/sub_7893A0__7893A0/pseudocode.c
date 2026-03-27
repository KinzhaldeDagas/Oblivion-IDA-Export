void __thiscall sub_7893A0(std::exception *this)
{
  *(_DWORD *)this = &std::runtime_error::`vftable';
  if ( *((_DWORD *)this + 9) >= 0x10u )
    FormHeapFree(*((_DWORD *)this + 4));
  *((_DWORD *)this + 9) = 0xF;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 0x10) = 0;
  std::exception::~exception(this);
}
