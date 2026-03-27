char __cdecl sub_4FA560(int a1)
{
  char result; // al
  int *v2; // ecx

  result = 0;
  if ( a1 )
  {
    v2 = &dword_B361CC;
    while ( *v2 != a1 )
    {
      v2 = (int *)v2[1];
      if ( !v2 )
        return result;
    }
    return 1;
  }
  return result;
}
