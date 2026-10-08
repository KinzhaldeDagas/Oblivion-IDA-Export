_RTL_CRITICAL_SECTION_0 **__thiscall sub_8A7AF0(_RTL_CRITICAL_SECTION_0 **this, char a2)
{
  sub_8A7A10(this); /*0x8a7af3*/
  if ( (a2 & 1) != 0 ) /*0x8a7afd*/
    (*(void (__stdcall **)(_RTL_CRITICAL_SECTION_0 **, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a7b0f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x8a7b14*/
}
