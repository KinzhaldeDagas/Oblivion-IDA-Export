char *__cdecl sub_497B20(char *a1)
{
  char *result; // eax
  char v2; // cl

  result = a1;
  byte_B34FC8[0] = 0;
  if ( a1 )
  {
    do
    {
      v2 = *result;
      result[byte_B34FC8 - a1] = *result;
      ++result;
    }
    while ( v2 );
  }
  return result;
}
