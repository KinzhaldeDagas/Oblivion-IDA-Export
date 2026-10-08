int *__thiscall sub_925E00(int *this, char a2)
{
  sub_8DBCE0(this); /*0x925e03*/
  if ( (a2 & 1) != 0 ) /*0x925e0d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x925e1f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x925e24*/
}
