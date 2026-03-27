int __fastcall LcidFromHexString(int a1, char *a2)
{
  int i; // esi
  char v3; // cl

  for ( i = 0; ; i = 0x10 * i + v3 - 0x30 )
  {
    v3 = *a2;
    if ( !*a2 )
      break;
    ++a2;
    if ( (unsigned __int8)(v3 - 0x61) > 5u )
    {
      if ( (unsigned __int8)(v3 - 0x41) <= 5u )
        v3 -= 7;
    }
    else
    {
      v3 -= 0x27;
    }
  }
  return i;
}
