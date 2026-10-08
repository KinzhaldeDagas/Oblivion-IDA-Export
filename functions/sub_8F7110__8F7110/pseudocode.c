_DWORD *__thiscall sub_8F7110(_DWORD *this, char a2)
{
  sub_8F6E30(this); /*0x8f7113*/
  if ( (a2 & 1) != 0 ) /*0x8f711d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f712f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x8f7134*/
}
