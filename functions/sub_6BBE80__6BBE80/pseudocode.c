BOOL __cdecl sub_6BBE80(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6D3190(a1, a2); /*0x6bbe8c*/
  if ( result ) /*0x6bbe96*/
    return a2[1] == a1[1] && a2[2] == a1[2] && a2[3] == a1[3]; /*0x6bbec9*/
  return result; /*0x6bbe98*/
}
