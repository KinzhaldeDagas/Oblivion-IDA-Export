int __cdecl sub_47D330(unsigned __int16 a1)
{
  unsigned __int16 v1; // cx
  unsigned __int16 v2; // ax

  v1 = a1;
  v2 = 1;
  if ( a1 > (unsigned __int16)dword_B067B8 )
    v1 = dword_B067B8 - 1;
  do
  {
    if ( v1 < *(_WORD *)(2 * v2 + 0xB06728) )
      break;
    ++v2;
  }
  while ( v2 < 0xCu );
  return (unsigned __int16)(v2 - 1);
}
