_DWORD *__thiscall sub_943170(_DWORD *this, char a2)
{
  sub_9431A0(this); /*0x943173*/
  if ( (a2 & 1) != 0 ) /*0x94317d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94318f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x943194*/
}
