Sky *__cdecl sub_540EC0(int a1)
{
  Sky *result; // eax

  result = g_Sky;
  if ( g_Sky )
  {
    if ( result->secundaMoon )
    {
      result = *((Sky **)result->secundaMoon + 4);
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
