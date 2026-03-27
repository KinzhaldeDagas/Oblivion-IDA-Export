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

  result = FullPath;
  if ( (byte_B3F480 & 8) != 0 )
  {
    for ( i = *FullPath; i; i = *++result )
    {
      if ( i != 0x20 )
        break;
    }
  }
  if ( (byte_B3F480 & 6) != 0 )
  {
    _splitpath(result, Drive, Dir, Filename, Ext);
    v4 = byte_B3F480;
    if ( (byte_B3F480 & 2) == 0 )
    {
      Drive[0] = 0;
      Dir[0] = 0;
    }
    if ( (v4 & 4) == 0 )
      Ext[0] = 0;
    return (const char *)sub_9853B2(a1, (int)Drive, (unsigned __int8 *)Dir, (int)Filename, (int)Ext);
  }
  else
  {
    v5 = a1 - (_DWORD)result;
    do
    {
      v6 = *result;
      result[v5] = *result;
      ++result;
    }
    while ( v6 );
  }
  return result;
}
