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

  v3 = FullPath; /*0x6fa2e4*/
  v4 = 0; /*0x6fa2f5*/
  if ( a3 != 2 ) /*0x6fa2fc*/
  {
    Drive[0] = 0; /*0x6fa31a*/
    Dir[0] = 0; /*0x6fa31e*/
    Filename[0] = 0; /*0x6fa325*/
    Ext[0] = 0; /*0x6fa329*/
    _splitpath(FullPath, Drive, Dir, Filename, Ext); /*0x6fa32d*/
    if ( a3 ) /*0x6fa337*/
    {
      v6 = 0; /*0x6fa33f*/
      do /*0x6fa34e*/
      {
        v7 = Drive[v6]; /*0x6fa341*/
        Filename[v6++] = v7; /*0x6fa345*/
      }
      while ( v7 ); /*0x6fa34e*/
      v8 = strlen(Dir) + 1; /*0x6fa367*/
      v9 = &v15; /*0x6fa370*/
      while ( *++v9 ) /*0x6fa37b*/
        ; /*0x6fa373*/
      qmemcpy(v9, Dir, v8); /*0x6fa384*/
      if ( !Filename[0] ) /*0x6fa392*/
        strcpy(Filename, "."); /*0x6fa394*/
      v11 = strlen(Filename); /*0x6fa39b*/
      if ( Filename[v11 - 1] == 0x5C ) /*0x6fa3b6*/
        Filename[v11 - 1] = 0; /*0x6fa3b8*/
    }
    else
    {
      v4 = Ext; /*0x6fa339*/
    }
    v3 = Filename; /*0x6fa3ba*/
  }
  sub_6FA080(v3, v4, (int)this); /*0x6fa3c1*/
  return this; /*0x6fa3d0*/
}
