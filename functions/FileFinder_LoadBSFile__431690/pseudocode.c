void *__cdecl FileFinder_LoadBSFile(const char *a1, int a2, int a3)
{
  ArchiveFile *NiFile; // esi
  void *result; // eax

  NiFile = FileFinder_LoadNiFile__(a1, a2, a3, 0xFFFF); /*0x4316b6*/
  result = OblivionDynamicCast( /*0x4316bb*/
             NiFile,
             0,
             (struct _s_RTTICompleteObjectLocator *)&NiFile `RTTI Type Descriptor',
             &BSFile `RTTI Type Descriptor',
             0);
  if ( !result ) /*0x4316c5*/
  {
    if ( NiFile ) /*0x4316c9*/
      (**(void (__thiscall ***)(ArchiveFile *, int))NiFile)(NiFile, 1); /*0x4316d3*/
    return 0; /*0x4316d5*/
  }
  return result; /*0x4316d7*/
}
