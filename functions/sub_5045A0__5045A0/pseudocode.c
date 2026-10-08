char __cdecl sub_5045A0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, double *a7)
{
  bool v7; // zf
  char result; // al

  *a7 = 0.0; /*0x5045ac*/
  if ( !a3 || !a6 ) /*0x5045b6*/
    return 1; /*0x5045d0*/
  v7 = !sub_4FB5F0(a6, 0, 0x80000000); /*0x5045c4*/
  result = 1; /*0x5045c6*/
  if ( !v7 ) /*0x5045c8*/
    *a7 = 1.0; /*0x5045cc*/
  return result; /*0x5045ce*/
}
