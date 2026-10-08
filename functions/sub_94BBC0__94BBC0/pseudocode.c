_DWORD *__thiscall sub_94BBC0(_DWORD *this, char a2)
{
  sub_94BBF0(this); /*0x94bbc3*/
  if ( (a2 & 1) != 0 ) /*0x94bbcd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94bbdf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x94bbe4*/
}
