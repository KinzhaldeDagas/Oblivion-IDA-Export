int (__stdcall ****__thiscall sub_8E7CB0(int (__stdcall ****this)(signed int), char a2))(signed int)
{
  int (__stdcall ***v3)(signed int); // ecx
  int (__stdcall ***v4)(signed int); // ecx

  v3 = *(this + 6); /*0x8e7cb3*/
  *this = (int (__stdcall ***)(signed int))&off_A9A77C; /*0x8e7cb8*/
  if ( v3 ) /*0x8e7cbe*/
  {
    sub_8BC730(v3); /*0x8e7cc0*/
    *(this + 6) = 0; /*0x8e7cc5*/
  }
  v4 = *(this + 7); /*0x8e7ccc*/
  if ( v4 ) /*0x8e7cd1*/
  {
    sub_8BC730(v4); /*0x8e7cd3*/
    *(this + 7) = 0; /*0x8e7cd8*/
  }
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8e7ce4*/
  if ( (a2 & 1) != 0 ) /*0x8e7cea*/
    (*(void (__stdcall **)(int (__stdcall ****)(signed int), _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e7cfc*/
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this; /*0x8e7d01*/
}
