_DWORD *__thiscall sub_898870(_DWORD *this, char a2)
{
  sub_8D3390(this); /*0x898873*/
  if ( (a2 & 1) != 0 ) /*0x89887d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x89888f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x898894*/
}
