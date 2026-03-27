hkCharControllerShape *__thiscall hkCharControllerShape::`scalar deleting destructor'(
        hkCharControllerShape *this,
        char a2)
{
  hkCharControllerShape::~hkCharControllerShape(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(hkCharControllerShape *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
