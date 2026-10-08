_DWORD *__thiscall sub_918E10(_DWORD *this, char a2)
{
  *this = &off_A9D270; /*0x918e16*/
  *(this + 2) = &off_A9D258; /*0x918e1c*/
  *(this + 8) = off_A9D250; /*0x918e23*/
  sub_948D90(this + 0xA); /*0x918e2a*/
  sub_949180(this); /*0x918e31*/
  if ( (a2 & 1) != 0 ) /*0x918e3b*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x918e4d*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x918e52*/
}
