char *__cdecl sub_497B20(char *a1)
{
  char *result; // eax
  char v2; // cl

  result = a1; /*0x497b20*/
  MEMORY[0xB33E90][0x1138] = 0; /*0x497b26*/
  if ( a1 ) /*0x497b2d*/
  {
    do /*0x497b40*/
    {
      v2 = *result; /*0x497b36*/
      result[&MEMORY[0xB33E90][0x1138] - a1] = *result; /*0x497b38*/
      ++result; /*0x497b3b*/
    }
    while ( v2 ); /*0x497b40*/
  }
  return result; /*0x497b42*/
}
