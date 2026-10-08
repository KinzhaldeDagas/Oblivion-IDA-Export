unsigned __int16 __cdecl sub_47D2D0(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // ax
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 result; // ax
  int i; // ecx

  v2 = a1; /*0x47d2e0*/
  v3 = a2; /*0x47d2e3*/
  if ( a2 > 0xCu ) /*0x47d2e6*/
    v3 = 0xB; /*0x47d2e8*/
  v4 = v3; /*0x47d2ed*/
  v5 = *(_WORD *)(2 * v3 + 0xB06710); /*0x47d2f0*/
  if ( a1 >= v5 ) /*0x47d2fb*/
    v2 = v5 - 1; /*0x47d300*/
  result = v2; /*0x47d303*/
  for ( i = 0; i < v4; ++i ) /*0x47d310*/
    result += *(_WORD *)(2 * i + 0xB06710); /*0x47d312*/
  return result; /*0x47d30a*/
}
