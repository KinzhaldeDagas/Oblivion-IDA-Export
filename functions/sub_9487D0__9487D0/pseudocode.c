_DWORD *__thiscall sub_9487D0(_DWORD *this, char a2)
{
  sub_918180(this); /*0x9487d3*/
  if ( (a2 & 1) != 0 ) /*0x9487dd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9487ef*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x9487f4*/
}
