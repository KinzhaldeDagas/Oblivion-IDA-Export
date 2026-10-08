int *__thiscall sub_8BA180(int *this, char a2)
{
  sub_8BA0D0(this); /*0x8ba183*/
  if ( (a2 & 1) != 0 ) /*0x8ba18d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8ba19f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x31);
  return this; /*0x8ba1a4*/
}
