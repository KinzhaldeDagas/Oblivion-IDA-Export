BOOL __cdecl sub_6BB490(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6D3190(a1, a2);
  if ( result )
    return a2[1] == a1[1];
  return result;
}
