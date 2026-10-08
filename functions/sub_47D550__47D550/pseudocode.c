signed int __cdecl sub_47D550(const char *a1)
{
  int v1; // edx
  char v2; // al
  int v3; // ecx

  v1 = strlen(a1); /*0x47d557*/
  if ( v1 ) /*0x47d56d*/
  {
    if ( (v2 = *a1, *a1 >= 0x30) && v2 <= 0x39 || v2 == 0x2D ) /*0x47d57b*/
    {
      if ( v1 != 1 || v2 != 0x2D ) /*0x47d584*/
      {
        v3 = 1; /*0x47d586*/
        if ( v1 <= 1 ) /*0x47d58d*/
          return 1; /*0x47d5a6*/
        while ( (unsigned __int8)(a1[v3] - 0x30) <= 9u ) /*0x47d597*/
        {
          if ( ++v3 >= v1 ) /*0x47d59e*/
            return 1; /*0x47d59e*/
        }
      }
    }
  }
  return 0; /*0x47d5a5*/
}
