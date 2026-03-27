BOOL __cdecl sub_6C1440(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6BB490(a1, a2);
  if ( result )
    return a2[2] == a1[2] && a2[3] == a1[3] && a2[4] == a1[4] && a2[5] == a1[5] && a2[6] == a1[6];
  return result;
}
