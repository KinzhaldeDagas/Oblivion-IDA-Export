BOOL __cdecl sub_6BC2C0(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6BBE80(a1, a2);
  if ( result )
    return a2[4] == a1[4] && a2[5] == a1[5] && a2[6] == a1[6] && sub_8AA350(a1 + 7, a2 + 7);
  return result;
}
