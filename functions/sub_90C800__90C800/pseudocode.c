_DWORD *__thiscall sub_90C800(_DWORD *this, char a2)
{
  sub_90C830(this); /*0x90c803*/
  if ( (a2 & 1) != 0 ) /*0x90c80d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90c81f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x90c824*/
}
