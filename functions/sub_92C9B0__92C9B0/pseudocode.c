_BYTE *__cdecl sub_92C9B0(_BYTE *a1, float *a2, float *a3)
{
  if ( *a2 < (double)*a3 || *a2 == *a3 && a2[1] < (double)a3[1] || *a2 == *a3 && a2[1] == a3[1] && a2[2] < (double)a3[2] )
  {
    *a1 = 1;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
