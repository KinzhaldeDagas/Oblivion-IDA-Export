int __cdecl TestDefaultCountry(__int16 a1)
{
  int v1; // eax

  v1 = 0; /*0x99ab9e*/
  while ( a1 != word_AB07A8[v1] ) /*0x99abac*/
  {
    if ( (unsigned int)++v1 >= 0xA ) /*0x99abb3*/
      return 1; /*0x99abb8*/
  }
  return 0; /*0x99abb8*/
}
