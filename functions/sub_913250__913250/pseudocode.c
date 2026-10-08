int *__thiscall sub_913250(int *this, char a2)
{
  sub_9131D0(this); /*0x913253*/
  if ( (a2 & 1) != 0 ) /*0x91325d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91326f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x913274*/
}
