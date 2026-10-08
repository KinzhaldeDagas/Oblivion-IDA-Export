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

  Drive[0] = 0; /*0x6fa1f6*/
  Dir[0] = 0; /*0x6fa1fa*/
  Filename[0] = 0; /*0x6fa201*/
  Ext[0] = 0; /*0x6fa205*/
  _splitpath(FullPath, Drive, Dir, Filename, Ext); /*0x6fa209*/
  sub_6FA080(Filename, Ext, a3); /*0x6fa219*/
  v3 = 0; /*0x6fa221*/
  do /*0x6fa230*/
  {
    v4 = Drive[v3]; /*0x6fa223*/
    Filename[v3++] = v4; /*0x6fa227*/
  }
  while ( v4 ); /*0x6fa230*/
  v5 = strlen(Dir) + 1; /*0x6fa247*/
  v6 = &v12; /*0x6fa250*/
  while ( *++v6 ) /*0x6fa25b*/
    ; /*0x6fa253*/
  qmemcpy(v6, Dir, v5); /*0x6fa264*/
  if ( !Filename[0] ) /*0x6fa272*/
    strcpy(Filename, "."); /*0x6fa274*/
  v8 = strlen(Filename); /*0x6fa27b*/
  if ( Filename[v8 - 1] == 0x5C ) /*0x6fa296*/
    Filename[v8 - 1] = 0; /*0x6fa298*/
  return sub_6FA080(Filename, 0, a2); /*0x6fa2b0*/
}
