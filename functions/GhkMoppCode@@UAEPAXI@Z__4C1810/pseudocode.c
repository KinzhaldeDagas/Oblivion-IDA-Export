hkMoppCode *__thiscall hkMoppCode::`scalar deleting destructor'(hkMoppCode *this, char a2)
{
  hkMoppCode::~hkMoppCode(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(hkMoppCode *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x25);
  return this;
}
