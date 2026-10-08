_DWORD *__thiscall sub_89B360(_DWORD *this, char a2)
{
  sub_89AD80(this); /*0x89b363*/
  if ( (a2 & 1) != 0 ) /*0x89b36d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x89b37f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2C);
  return this; /*0x89b384*/
}
