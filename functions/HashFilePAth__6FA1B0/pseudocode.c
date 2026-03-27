int __cdecl HashFilePAth(char *FullPath, int a2, int a3)
{
  int v3; // eax
  char v4; // cl
  unsigned int v5; // eax
  char *v6; // edi
  unsigned int v8; // kr00_4
  char Drive[16]; // [esp+Ch] [ebp-22Ch] BYREF
  char Ext[15]; // [esp+1Ch] [ebp-21Ch] BYREF
  char v12; // [esp+2Bh] [ebp-20Dh] BYREF
  char Filename[260]; // [esp+2Ch] [ebp-20Ch] BYREF
  char Dir[260]; // [esp+130h] [ebp-108h] BYREF

  Drive[0] = 0;
  Dir[0] = 0;
  Filename[0] = 0;
  Ext[0] = 0;
  _splitpath(FullPath, Drive, Dir, Filename, Ext);
  sub_6FA080(Filename, Ext, a3);
  v3 = 0;
  do
  {
    v4 = Drive[v3];
    Filename[v3++] = v4;
  }
  while ( v4 );
  v5 = strlen(Dir) + 1;
  v6 = &v12;
  while ( *++v6 )
    ;
  qmemcpy(v6, Dir, v5);
  if ( !Filename[0] )
    strcpy(Filename, ".");
  v8 = strlen(Filename);
  if ( Filename[v8 - 1] == 0x5C )
    Filename[v8 - 1] = 0;
  return sub_6FA080(Filename, 0, a2);
}
