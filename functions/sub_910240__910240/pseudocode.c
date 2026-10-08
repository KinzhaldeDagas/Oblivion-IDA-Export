int (__stdcall ****__thiscall sub_910240(int (__stdcall ****this)(signed int), char a2))(signed int)
{
  sub_8E7C70(this); /*0x910243*/
  if ( (a2 & 1) != 0 ) /*0x91024d*/
    (*(void (__stdcall **)(int (__stdcall ****)(signed int), _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91025f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this; /*0x910264*/
}
