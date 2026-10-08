int *__thiscall sub_918B90(int *this, char a2)
{
  sub_9189A0(this); /*0x918b93*/
  if ( (a2 & 1) != 0 ) /*0x918b9d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x918baf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x918bb4*/
}
