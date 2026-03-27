Sky *__cdecl sub_542E70(int a1)
{
  Sky *result; // eax

  result = g_Sky;
  if ( g_Sky )
  {
    if ( result->sun )
    {
      result = (Sky *)result->sun->membr.SunGlareBillboard;
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
