int *__thiscall sub_90D810(int *this, char a2)
{
  *this = (int)&off_A9C990; /*0x90d813*/
  sub_940E30(this); /*0x90d819*/
  if ( (a2 & 1) != 0 ) /*0x90d823*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))(this, *((unsigned __int16 *)this + 2), 6); /*0x90d835*/
  return this; /*0x90d83a*/
}
