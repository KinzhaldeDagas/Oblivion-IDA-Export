int __thiscall sub_809050(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = unk_B47620; /*0x809054*/
  do /*0x809078*/
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++); /*0x80906d*/
  while ( (int)v2 < (int)&unk_B47710 ); /*0x809078*/
  return result; /*0x80907a*/
}
