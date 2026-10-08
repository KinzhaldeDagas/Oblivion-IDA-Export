hkCharControllerShape *__thiscall sub_9176F0(hkCharControllerShape *this, char a2)
{
  hkCharControllerShape::~hkCharControllerShape(this); /*0x9176f3*/
  if ( (a2 & 1) != 0 ) /*0x9176fd*/
    (*(void (__stdcall **)(hkCharControllerShape *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91770f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x917714*/
}
