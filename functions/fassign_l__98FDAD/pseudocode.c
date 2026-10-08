int *__cdecl _fassign_l(int a1, int *a2, char *a3, struct localeinfo_struct *a4)
{
  int *result; // eax
  int v5[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a1 ) /*0x98fdbc*/
  {
    sub_99DF41(v5, a3, a4); /*0x98fdc2*/
    result = a2; /*0x98fdca*/
    *a2 = v5[0]; /*0x98fdcd*/
    result[1] = v5[1]; /*0x98fdd2*/
  }
  else
  {
    sub_99DFE7(&a1, a3, a4); /*0x98fddb*/
    result = a2; /*0x98fde0*/
    *a2 = a1; /*0x98fde6*/
  }
  return result; /*0x98fdeb*/
}
