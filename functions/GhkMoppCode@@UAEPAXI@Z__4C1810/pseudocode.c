hkMoppCode *__thiscall hkMoppCode::`scalar deleting destructor'(hkMoppCode *this, char a2)
{
  hkMoppCode::~hkMoppCode(this); /*0x4c1813*/
  if ( (a2 & 1) != 0 ) /*0x4c181d*/
    (*(void (__stdcall **)(hkMoppCode *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x4c1832*/
      this,
      *((unsigned __int16 *)this + 2),
      0x25);
  return this; /*0x4c1836*/
}
