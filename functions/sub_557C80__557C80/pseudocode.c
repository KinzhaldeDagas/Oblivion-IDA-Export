// Allocate and construct a BSFaceGen EGT data object from the named asset.
BSFaceGenEgtData *__cdecl BSFaceGenEgtData_CreateFromFile(const char *path)
{
  BSFaceGenEgtData *v1; // eax

  v1 = (BSFaceGenEgtData *)FormHeapAlloc(0x24u); /*0x557ca3*/
  if ( v1 ) /*0x557cb9*/
    return BSFaceGenEgtData_ConstructFromFile(v1, path); /*0x557cc2*/
  else
    return 0; /*0x557cd7*/
}
