// Returns the FaceGen manager's default head-parameter block at manager+0x08, initializing the manager on demand.
const FaceGenHeadParameters *__cdecl FaceGenManager_GetDefaultHeadParameters()
{
  char *v0; // eax

  v0 = (char *)g_faceGenManager; /*0x5538d0*/
  if ( !g_faceGenManager ) /*0x5538d0*/
  {
    FaceGenManager_EnsureInitialized(); /*0x5538d9*/
    v0 = (char *)g_faceGenManager; /*0x5538de*/
  }
  return (const FaceGenHeadParameters *)(v0 + 8); /*0x5538e6*/
}
