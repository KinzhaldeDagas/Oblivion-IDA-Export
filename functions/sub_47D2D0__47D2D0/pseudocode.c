unsigned __int16 __cdecl sub_47D2D0(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // ax
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 result; // ax
  int i; // ecx

  v2 = a1;
  v3 = a2;
  if ( a2 > 0xCu )
    v3 = 0xB;
  v4 = v3;
  v5 = *(_WORD *)(2 * v3 + 0xB06710);
  if ( a1 >= v5 )
    v2 = v5 - 1;
  result = v2;
  for ( i = 0; i < v4; ++i )
    result += *(_WORD *)(2 * i + 0xB06710);
  return result;
}
