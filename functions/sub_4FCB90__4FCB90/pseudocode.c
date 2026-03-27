char __cdecl sub_4FCB90(int a1, int a2)
{
  int v2; // ecx
  char result; // al
  int v4; // edx
  int v5; // eax

  v2 = a2 + a1;
  result = *(_BYTE *)(a2 + a1);
  v4 = 0;
  if ( !result )
    return 1;
  do
  {
    v5 = result - 0x28;
    if ( v5 )
    {
      if ( v5 == 1 )
        --v4;
    }
    else
    {
      ++v4;
    }
    result = *(_BYTE *)++v2;
  }
  while ( result );
  if ( !v4 )
    return 1;
  return result;
}
