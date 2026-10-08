_DWORD *__thiscall sub_906360(_DWORD *this, char a2)
{
  sub_906210(this); /*0x906363*/
  if ( (a2 & 1) != 0 ) /*0x90636d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90637f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x906384*/
}
