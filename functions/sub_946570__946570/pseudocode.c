void **__thiscall sub_946570(void **this, char a2)
{
  sub_946470(this); /*0x946573*/
  if ( (a2 & 1) != 0 ) /*0x94657d*/
    (*(void (__stdcall **)(void **, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94658f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x946594*/
}
