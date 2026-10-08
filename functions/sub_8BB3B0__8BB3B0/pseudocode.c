_DWORD *__thiscall sub_8BB3B0(_DWORD *this, char a2)
{
  *this = &off_A982A0; /*0x8bb3b3*/
  sub_8BB320((int)this); /*0x8bb3b9*/
  *this = &hkBaseObject::`vftable'; /*0x8bb3c3*/
  if ( (a2 & 1) != 0 ) /*0x8bb3c9*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bb3db*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8bb3e0*/
}
