void *__cdecl sub_431130(const char *a1, int a2, int a3, int a4)
{
  ArchiveFile *NiFile; // esi
  void *result; // eax

  NiFile = FileFinder_LoadNiFile__(a1, a2, a3, a4);
  result = OblivionDynamicCast(
             NiFile,
             0,
             (struct _s_RTTICompleteObjectLocator *)&NiFile `RTTI Type Descriptor',
             &BSFile `RTTI Type Descriptor',
             0);
  if ( !result )
  {
    if ( NiFile )
      (**(void (__thiscall ***)(ArchiveFile *, int))NiFile)(NiFile, 1);
    return 0;
  }
  return result;
}
