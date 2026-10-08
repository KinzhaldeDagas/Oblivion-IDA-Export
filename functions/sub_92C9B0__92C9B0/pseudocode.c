_BYTE *__cdecl sub_92C9B0(_BYTE *a1, float *a2, float *a3)
{
  if ( *a2 < (double)*a3 || *a2 == *a3 && a2[1] < (double)a3[1] || *a2 == *a3 && a2[1] == a3[1] && a2[2] < (double)a3[2] ) /*0x92ca0c*/
  {
    *a1 = 1; /*0x92c9c7*/
    return a1; /*0x92c9c3*/
  }
  else
  {
    *a1 = 0; /*0x92ca12*/
    return a1; /*0x92ca0e*/
  }
}
