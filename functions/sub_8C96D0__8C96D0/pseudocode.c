int __thiscall sub_8C96D0(void *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int result; // eax

  v2 = a2; /*0x8c96d2*/
  sub_712A20(a2); /*0x8c96da*/
  sub_8AEAB0((signed int)v2); /*0x8c96e2*/
  result = (*(int (__thiscall **)(void *, unsigned int **))(*(_DWORD *)this + 0x74))(this, &a2); /*0x8c96f3*/
  if ( result ) /*0x8c96f9*/
    *(_DWORD *)(result + 8) = 0; /*0x8c96fb*/
  return result; /*0x8c96f7*/
}
