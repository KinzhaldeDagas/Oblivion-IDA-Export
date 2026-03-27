int __cdecl sub_6C2710(float a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax

  if ( a1 >= 1.0 )
    a2 = a3;
  *a4 = a2[1];
  a4[1] = a2[2];
  result = a2[3];
  a4[2] = result;
  return result;
}
