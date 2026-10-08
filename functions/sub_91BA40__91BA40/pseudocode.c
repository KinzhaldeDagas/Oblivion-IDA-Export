int *__thiscall sub_91BA40(int *this, char a2)
{
  sub_91B970(this); /*0x91ba43*/
  if ( (a2 & 1) != 0 ) /*0x91ba4d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91ba5f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91ba64*/
}
