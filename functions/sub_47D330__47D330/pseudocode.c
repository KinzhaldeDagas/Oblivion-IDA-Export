int __cdecl sub_47D330(unsigned __int16 a1)
{
  unsigned __int16 v1; // cx
  unsigned __int16 v2; // ax

  v1 = a1; /*0x47d342*/
  v2 = 1; /*0x47d345*/
  if ( a1 > (unsigned __int16)dword_B067B8 ) /*0x47d34a*/
    v1 = dword_B067B8 - 1; /*0x47d34f*/
  do /*0x47d367*/
  {
    if ( v1 < *(_WORD *)(2 * v2 + 0xB06728) ) /*0x47d35e*/
      break; /*0x47d35e*/
    ++v2; /*0x47d360*/
  }
  while ( v2 < 0xCu ); /*0x47d367*/
  return (unsigned __int16)(v2 - 1); /*0x47d352*/
}
