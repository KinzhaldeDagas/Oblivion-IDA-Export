int __thiscall sub_80AD10(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = unk_B47718; /*0x80ad14*/
  do /*0x80ad38*/
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++); /*0x80ad2d*/
  while ( (int)v2 < (int)&stru_B47768 ); /*0x80ad38*/
  return result; /*0x80ad3a*/
}
