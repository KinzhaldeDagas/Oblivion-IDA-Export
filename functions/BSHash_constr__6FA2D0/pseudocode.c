void *__thiscall BSHash_constr(void *this, char *FullPath, int a3)
{
  char *v3; // eax
  char *v4; // ebx
  int v6; // eax
  char v7; // cl
  unsigned int v8; // eax
  char *v9; // edi
  unsigned int v11; // kr00_4
  char Drive[16]; // [esp+Ch] [ebp-22Ch] BYREF
  char Ext[15]; // [esp+1Ch] [ebp-21Ch] BYREF
  char v15; // [esp+2Bh] [ebp-20Dh] BYREF
  char Filename[260]; // [esp+2Ch] [ebp-20Ch] BYREF
  char Dir[260]; // [esp+130h] [ebp-108h] BYREF

  v3 = FullPath;
  v4 = 0;
  if ( a3 != 2 )
  {
    Drive[0] = 0;
    Dir[0] = 0;
    Filename[0] = 0;
    Ext[0] = 0;
    _splitpath(FullPath, Drive, Dir, Filename, Ext);
    if ( a3 )
    {
      v6 = 0;
      do
      {
        v7 = Drive[v6];
        Filename[v6++] = v7;
      }
      while ( v7 );
      v8 = strlen(Dir) + 1;
      v9 = &v15;
      while ( *++v9 )
        ;
      qmemcpy(v9, Dir, v8);
      if ( !Filename[0] )
        strcpy(Filename, ".");
      v11 = strlen(Filename);
      if ( Filename[v11 - 1] == 0x5C )
        Filename[v11 - 1] = 0;
    }
    else
    {
      v4 = Ext;
    }
    v3 = Filename;
  }
  sub_6FA080(v3, v4, (int)this);
  return this;
}
