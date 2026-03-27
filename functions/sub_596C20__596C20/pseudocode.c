int __cdecl sub_596C20(unsigned __int8 *a1, unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // eax
  const unsigned __int8 *v3; // ecx

  v2 = *((const unsigned __int8 **)a2 + 7);
  if ( !v2 )
    v2 = (const unsigned __int8 *)EmptyString;
  v3 = *((const unsigned __int8 **)a1 + 7);
  if ( !v3 )
    v3 = (const unsigned __int8 *)EmptyString;
  return _mbsicmp(v3, v2);
}
