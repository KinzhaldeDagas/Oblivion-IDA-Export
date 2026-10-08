void *__cdecl sub_431130(const char *a1, int a2, int a3, int a4)
{
  ArchiveFile *NiFile; // esi
  void *result; // eax

  NiFile = FileFinder_LoadNiFile__(a1, a2, a3, a4); /*0x431156*/
  result = OblivionDynamicCast( /*0x43115b*/
             NiFile,
             0,
             (struct _s_RTTICompleteObjectLocator *)&NiFile `RTTI Type Descriptor',
             &BSFile `RTTI Type Descriptor',
             0);
  if ( !result ) /*0x431165*/
  {
    if ( NiFile ) /*0x431169*/
      (**(void (__thiscall ***)(ArchiveFile *, int))NiFile)(NiFile, 1); /*0x431173*/
    return 0; /*0x431175*/
  }
  return result; /*0x431177*/
}
