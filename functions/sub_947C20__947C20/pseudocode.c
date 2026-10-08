_RTL_CRITICAL_SECTION_0 **__thiscall sub_947C20(_RTL_CRITICAL_SECTION_0 **this, char a2)
{
  sub_947B60(this); /*0x947c23*/
  if ( (a2 & 1) != 0 ) /*0x947c2d*/
    (*(void (__stdcall **)(_RTL_CRITICAL_SECTION_0 **, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x947c3f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x947c44*/
}
