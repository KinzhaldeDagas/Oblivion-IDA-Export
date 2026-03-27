BOOL __cdecl sub_6BBE80(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6D3190(a1, a2);
  if ( result )
    return a2[1] == a1[1] && a2[2] == a1[2] && a2[3] == a1[3];
  return result;
}
