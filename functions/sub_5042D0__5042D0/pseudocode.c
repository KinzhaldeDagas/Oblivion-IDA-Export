char __cdecl sub_5042D0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, double *a7)
{
  bool v7; // zf
  char result; // al

  *a7 = 0.0; /*0x5042dc*/
  if ( !a3 || !a6 ) /*0x5042e6*/
    return 1; /*0x5042fd*/
  v7 = !sub_4FB5F0(a6, 0, 0x40); /*0x5042f1*/
  result = 1; /*0x5042f3*/
  if ( !v7 ) /*0x5042f5*/
    *a7 = 1.0; /*0x5042f9*/
  return result; /*0x5042fb*/
}
