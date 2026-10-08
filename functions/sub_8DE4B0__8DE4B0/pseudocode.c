int *__thiscall sub_8DE4B0(int *this, char a2)
{
  sub_8DE350(this); /*0x8de4b3*/
  if ( (a2 & 1) != 0 ) /*0x8de4bd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8de4cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2F);
  return this; /*0x8de4d4*/
}
