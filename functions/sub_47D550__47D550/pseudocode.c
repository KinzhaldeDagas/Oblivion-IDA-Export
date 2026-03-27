signed int __cdecl sub_47D550(const char *a1)
{
  int v1; // edx
  char v2; // al
  int v3; // ecx

  v1 = strlen(a1);
  if ( v1 )
  {
    if ( (v2 = *a1, *a1 >= 0x30) && v2 <= 0x39 || v2 == 0x2D )
    {
      if ( v1 != 1 || v2 != 0x2D )
      {
        v3 = 1;
        if ( v1 <= 1 )
          return 1;
        while ( (unsigned __int8)(a1[v3] - 0x30) <= 9u )
        {
          if ( ++v3 >= v1 )
            return 1;
        }
      }
    }
  }
  return 0;
}
