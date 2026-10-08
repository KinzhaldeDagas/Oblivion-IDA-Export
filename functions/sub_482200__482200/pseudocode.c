int *__userpurge sub_482200@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  int *result; // eax

  result = (int *)(a1[4] + 8 * (a6 + a5 * a1[3])); /*0x482218*/
  if ( *result ) /*0x48221b*/
  {
    sub_4D6450(*result, a2, a3, a4); /*0x482221*/
    return (*(int *(__thiscall **)(_DWORD *, int, int))(*a1 + 0x1C))(a1, a5, a6); /*0x48222f*/
  }
  return result; /*0x482231*/
}
