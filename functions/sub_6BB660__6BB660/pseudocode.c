BOOL __cdecl sub_6BB660(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6BB490(a1, a2); /*0x6bb66c*/
  if ( result ) /*0x6bb676*/
    return a2[2] == a1[2] && a2[3] == a1[3]; /*0x6bb69a*/
  return result; /*0x6bb678*/
}
