int *__thiscall sub_8E6460(int *this, char a2)
{
  sub_8E5050(this); /*0x8e6463*/
  if ( (a2 & 1) != 0 ) /*0x8e646d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e647f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1E);
  return this; /*0x8e6484*/
}
