int *__thiscall sub_91B2E0(int *this, char a2)
{
  sub_91B210(this); /*0x91b2e3*/
  if ( (a2 & 1) != 0 ) /*0x91b2ed*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91b2ff*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91b304*/
}
