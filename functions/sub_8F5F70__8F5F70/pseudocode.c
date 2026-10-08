int *__thiscall sub_8F5F70(int *this, char a2)
{
  sub_8F5EB0(this); /*0x8f5f73*/
  if ( (a2 & 1) != 0 ) /*0x8f5f7d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f5f8f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8f5f94*/
}
