_DWORD *__thiscall sub_942930(_DWORD *this, char a2)
{
  sub_90D480(this); /*0x942933*/
  if ( (a2 & 1) != 0 ) /*0x94293d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94294f*/
      this,
      *((unsigned __int16 *)this + 2),
      6);
  return this; /*0x942954*/
}
