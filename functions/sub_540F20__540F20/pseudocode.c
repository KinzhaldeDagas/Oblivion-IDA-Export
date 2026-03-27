Sky *__cdecl sub_540F20(int a1)
{
  Sky *result; // eax

  result = g_Sky;
  if ( g_Sky )
  {
    if ( result->secundaMoon )
    {
      result = *((Sky **)result->secundaMoon + 5);
      if ( result )
      {
        if ( a1 )
          LOWORD(result->weather018) |= 0x20u;
        else
          LOWORD(result->weather018) &= ~0x20u;
      }
    }
  }
  return result;
}
