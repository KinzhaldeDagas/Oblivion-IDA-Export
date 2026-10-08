_DWORD *__thiscall sub_8F7EF0(_DWORD *this, char a2)
{
  sub_8F7C70(this); /*0x8f7ef3*/
  if ( (a2 & 1) != 0 ) /*0x8f7efd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f7f0f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x8f7f14*/
}
