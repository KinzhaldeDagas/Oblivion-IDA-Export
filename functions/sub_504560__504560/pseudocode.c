char __cdecl sub_504560(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, double *a7)
{
  bool v7; // zf
  char result; // al

  *a7 = 0.0; /*0x50456c*/
  if ( !a3 || !a6 ) /*0x504576*/
    return 1; /*0x504590*/
  v7 = !sub_4FB5F0(a6, 0, 0x1000); /*0x504584*/
  result = 1; /*0x504586*/
  if ( !v7 ) /*0x504588*/
    *a7 = 1.0; /*0x50458c*/
  return result; /*0x50458e*/
}
