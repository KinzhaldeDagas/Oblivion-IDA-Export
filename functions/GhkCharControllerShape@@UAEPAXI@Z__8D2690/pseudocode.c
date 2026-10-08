hkCharControllerShape *__thiscall hkCharControllerShape::`scalar deleting destructor'(
        hkCharControllerShape *this,
        char a2)
{
  hkCharControllerShape::~hkCharControllerShape(this); /*0x8d2693*/
  if ( (a2 & 1) != 0 ) /*0x8d269d*/
    (*(void (__stdcall **)(hkCharControllerShape *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8d26b2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8d26b6*/
}
