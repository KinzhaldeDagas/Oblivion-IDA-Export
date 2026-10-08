_DWORD *__thiscall sub_8D4230(_DWORD *this, char a2)
{
  sub_8D3390(this); /*0x8d4233*/
  if ( (a2 & 1) != 0 ) /*0x8d423d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8d424f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x8d4254*/
}
