int *__thiscall sub_9294B0(int *this, char a2)
{
  sub_9294E0(this); /*0x9294b3*/
  if ( (a2 & 1) != 0 ) /*0x9294bd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9294cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x9294d4*/
}
