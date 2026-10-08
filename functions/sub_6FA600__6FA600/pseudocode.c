const char *__cdecl sub_6FA600(int a1, char *FullPath)
{
  const char *result; // eax
  char i; // cl
  char v4; // al
  int v5; // edx
  char v6; // cl
  char Drive[4]; // [esp+4h] [ebp-308h] BYREF
  char Ext[256]; // [esp+8h] [ebp-304h] BYREF
  char Dir[256]; // [esp+108h] [ebp-204h] BYREF
  char Filename[256]; // [esp+208h] [ebp-104h] BYREF

  result = FullPath; /*0x6fa61d*/
  if ( (unk_B3F480 & 8) != 0 ) /*0x6fa62c*/
  {
    for ( i = *FullPath; i; i = *++result ) /*0x6fa62e*/
    {
      if ( i != 0x20 ) /*0x6fa637*/
        break; /*0x6fa637*/
    }
  }
  if ( (unk_B3F480 & 6) != 0 ) /*0x6fa646*/
  {
    _splitpath(result, Drive, Dir, Filename, Ext); /*0x6fa663*/
    v4 = unk_B3F480; /*0x6fa668*/
    if ( (unk_B3F480 & 2) == 0 ) /*0x6fa672*/
    {
      Drive[0] = 0; /*0x6fa674*/
      Dir[0] = 0; /*0x6fa679*/
    }
    if ( (v4 & 4) == 0 ) /*0x6fa683*/
      Ext[0] = 0; /*0x6fa685*/
    return (const char *)sub_9853B2(a1, (int)Drive, (unsigned __int8 *)Dir, (int)Filename, (int)Ext); /*0x6fa6a5*/
  }
  else
  {
    v5 = a1 - (_DWORD)result; /*0x6fa6c5*/
    do /*0x6fa6d1*/
    {
      v6 = *result; /*0x6fa6c7*/
      result[v5] = *result; /*0x6fa6c9*/
      ++result; /*0x6fa6cc*/
    }
    while ( v6 ); /*0x6fa6d1*/
  }
  return result; /*0x6fa6ad*/
}
