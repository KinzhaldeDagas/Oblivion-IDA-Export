_DWORD *__thiscall sub_8F06C0(_DWORD *this, char a2)
{
  sub_8F0540(this); /*0x8f06c3*/
  if ( (a2 & 1) != 0 ) /*0x8f06cd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f06df*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8f06e4*/
}
