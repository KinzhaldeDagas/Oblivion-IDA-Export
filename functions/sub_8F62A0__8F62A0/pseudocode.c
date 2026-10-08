_DWORD *__thiscall sub_8F62A0(_DWORD *this, char a2)
{
  sub_8F5FA0(this); /*0x8f62a3*/
  if ( (a2 & 1) != 0 ) /*0x8f62ad*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f62bf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x8f62c4*/
}
