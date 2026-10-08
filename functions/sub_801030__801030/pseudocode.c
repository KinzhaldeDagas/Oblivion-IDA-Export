char *__cdecl sub_801030(char *FullPath, int a2)
{
  char *result; // eax
  unsigned int v3; // eax
  char *v4; // edi
  char Ext[8]; // [esp+4h] [ebp-2A4h] BYREF
  char Drive[16]; // [esp+Ch] [ebp-29Ch] BYREF
  char Filename[127]; // [esp+1Ch] [ebp-28Ch] BYREF
  char v9; // [esp+9Bh] [ebp-20Dh] BYREF
  char v10[260]; // [esp+9Ch] [ebp-20Ch] BYREF
  char Dir[260]; // [esp+1A0h] [ebp-108h] BYREF

  result = FullPath; /*0x801044*/
  if ( a2 ) /*0x801055*/
  {
    _splitpath(FullPath, Drive, Dir, Filename, Ext); /*0x801073*/
    _splitpath(&OB_RendererGlobalState_010201A0[0xCF], Drive, v10, 0, 0); /*0x80108e*/
    v3 = strlen(Dir) + 1; /*0x8010a7*/
    v4 = &v9; /*0x8010b4*/
    while ( *++v4 ) /*0x8010bf*/
      ; /*0x8010b7*/
    qmemcpy(v4, Dir, v3); /*0x8010c8*/
    return (char *)sub_9853B2(a2, (int)Drive, (unsigned __int8 *)v10, (int)Filename, (int)Ext); /*0x8010e9*/
  }
  return result; /*0x8010f3*/
}
