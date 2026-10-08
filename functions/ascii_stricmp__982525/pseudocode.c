int __cdecl __ascii_stricmp(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // eax
  int v5; // ecx

  do /*0x982553*/
  {
    v4 = *a1++; /*0x98252f*/
    if ( (unsigned int)(v4 - 0x41) <= 0x19 ) /*0x982539*/
      v4 += 0x20; /*0x98253b*/
    v5 = *a2++; /*0x98253e*/
    if ( (unsigned int)(v5 - 0x41) <= 0x19 ) /*0x982548*/
      v5 += 0x20; /*0x98254a*/
  }
  while ( v4 && v4 == v5 ); /*0x982553*/
  return v4 - v5; /*0x982555*/
}
