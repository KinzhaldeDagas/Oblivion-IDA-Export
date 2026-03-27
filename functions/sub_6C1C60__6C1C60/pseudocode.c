int __cdecl sub_6C1C60(float a1, int a2, int a3, _BYTE *a4)
{
  int result; // eax

  result = a2;
  if ( a1 >= 1.0 )
    result = a3;
  *a4 = *(_BYTE *)(result + 4);
  return result;
}
