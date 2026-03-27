unsigned int __cdecl sub_70E2F0(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int i; // edx
  unsigned int v4; // eax
  unsigned int j; // ecx
  unsigned int result; // eax

  if ( !a1 || !a2 )
    return 0;
  v2 = a1 >> 1;
  for ( i = 1; v2; v2 >>= 1 )
    ++i;
  v4 = a2 >> 1;
  for ( j = 1; v4; v4 >>= 1 )
    ++j;
  result = i;
  if ( j >= i )
    return j;
  return result;
}
