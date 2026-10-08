int (__stdcall ****__thiscall sub_8F57E0(int (__stdcall ****this)(signed int), char a2))(signed int)
{
  int (__stdcall ***v3)(signed int); // ecx

  v3 = *(this + 6); /*0x8f57e3*/
  *this = (int (__stdcall ***)(signed int))&off_A9B370; /*0x8f57e8*/
  if ( v3 ) /*0x8f57ee*/
  {
    sub_8BC730(v3); /*0x8f57f0*/
    *(this + 6) = 0; /*0x8f57f5*/
  }
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8f5801*/
  if ( (a2 & 1) != 0 ) /*0x8f5807*/
    (*(void (__stdcall **)(int (__stdcall ****)(signed int), _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f5819*/
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this; /*0x8f581e*/
}
