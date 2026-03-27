BOOL __cdecl sub_6BE360(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6D3190(a1, a2);
  if ( result )
    return sub_73B770(a1 + 1, a2 + 1);
  return result;
}
