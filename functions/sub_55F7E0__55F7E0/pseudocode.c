// Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
BSTreeManager_OblivionVerifiedLayout *__cdecl BSTreeManager_GetInstance(bool createIfMissing)
{
  BSTreeManager_OblivionVerifiedLayout *result; // eax

  result = g_BSTreeManager_Instance; /*0x55f7e0*/
  if ( !g_BSTreeManager_Instance && createIfMissing ) /*0x55f7ed*/
  {
    BSTreeManager_Create((bool)g_BSTreeManager_Instance); /*0x55f7f0*/
    return g_BSTreeManager_Instance; /*0x55f7f5*/
  }
  return result; /*0x55f7fd*/
}
