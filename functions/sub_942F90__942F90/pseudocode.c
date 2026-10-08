int __thiscall sub_942F90(int *this, int a2, char *a3)
{
  int result; // eax

  result = sub_942B40(this + 2, a3, 0); /*0x942f9a*/
  if ( result ) /*0x942fa1*/
  {
    result = *(_DWORD *)(result + 4); /*0x942fa3*/
    if ( result ) /*0x942fa8*/
      return ((int (__cdecl *)(int))result)(a2); /*0x942faf*/
  }
  return result; /*0x942fb2*/
}
