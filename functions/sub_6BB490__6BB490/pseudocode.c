BOOL __cdecl sub_6BB490(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6D3190(a1, a2); /*0x6bb49c*/
  if ( result ) /*0x6bb4a6*/
    return a2[1] == a1[1]; /*0x6bb4b8*/
  return result; /*0x6bb4a8*/
}
