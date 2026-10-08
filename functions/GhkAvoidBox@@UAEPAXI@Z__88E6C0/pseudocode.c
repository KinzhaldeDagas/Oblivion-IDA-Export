hkAvoidBox *__thiscall hkAvoidBox::`scalar deleting destructor'(hkAvoidBox *this, char a2)
{
  hkAvoidBox::~hkAvoidBox(this); /*0x88e6c3*/
  if ( (a2 & 1) != 0 ) /*0x88e6cd*/
    (*(void (__stdcall **)(hkAvoidBox *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x88e6e2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this; /*0x88e6e6*/
}
