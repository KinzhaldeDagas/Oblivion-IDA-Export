void *__cdecl FaceGenManager_GetSingleton()
{
  void *result; // eax

  result = g_faceGenManager; /*0x553600*/
  if ( !g_faceGenManager ) /*0x553600*/
  {
    FaceGenManager_EnsureInitialized(); /*0x553609*/
    return g_faceGenManager; /*0x55360e*/
  }
  return result; /*0x553613*/
}
