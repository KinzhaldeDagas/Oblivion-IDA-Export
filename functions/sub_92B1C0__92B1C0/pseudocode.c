int *__thiscall sub_92B1C0(int *this, char a2)
{
  sub_92B110(this); /*0x92b1c3*/
  if ( (a2 & 1) != 0 ) /*0x92b1cd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92b1df*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92b1e4*/
}
