_DWORD *__thiscall sub_9279F0(_DWORD *this, char a2)
{
  sub_8895C0(this); /*0x9279f3*/
  if ( (a2 & 1) != 0 ) /*0x9279fd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x927a0f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x927a14*/
}
