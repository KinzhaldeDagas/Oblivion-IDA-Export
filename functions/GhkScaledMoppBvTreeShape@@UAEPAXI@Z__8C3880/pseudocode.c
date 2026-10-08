hkScaledMoppBvTreeShape *__thiscall hkScaledMoppBvTreeShape::`scalar deleting destructor'(
        hkScaledMoppBvTreeShape *this,
        char a2)
{
  hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(this); /*0x8c3883*/
  if ( (a2 & 1) != 0 ) /*0x8c388d*/
    (*(void (__stdcall **)(hkScaledMoppBvTreeShape *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8c38a2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8c38a6*/
}
