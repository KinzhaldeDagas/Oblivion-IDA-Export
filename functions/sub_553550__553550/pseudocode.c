// Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
void __cdecl FaceGenManager_EnsureInitialized()
{
  void *v0; // eax

  if ( !g_faceGenManager ) /*0x553571*/
  {
    v0 = (void *)FormHeapAlloc(0xDBCu); /*0x55357f*/
    if ( v0 ) /*0x553595*/
      g_faceGenManager = FaceGenManager_Construct(v0); /*0x55359e*/
    else
      g_faceGenManager = 0; /*0x5535b5*/
  }
}
