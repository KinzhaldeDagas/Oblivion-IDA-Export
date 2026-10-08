// Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
void __cdecl BSTreeManager_Create(bool recreate)
{
  BSTreeManager_OblivionVerifiedLayout *v1; // esi
  BSTreeManager_OblivionVerifiedLayout *v2; // eax
  BSTreeManager_OblivionVerifiedLayout *v3; // eax

  if ( g_BSTreeManager_Instance ) /*0x55f772*/
  {
    if ( !recreate ) /*0x55f781*/
      return; /*0x55f781*/
    v1 = g_BSTreeManager_Instance; /*0x55f783*/
    BSTreeManager_dtor(g_BSTreeManager_Instance); /*0x55f785*/
    FormHeapFree((unsigned int)v1); /*0x55f78b*/
    g_BSTreeManager_Instance = 0; /*0x55f793*/
  }
  v2 = (BSTreeManager_OblivionVerifiedLayout *)FormHeapAlloc(0x28u); /*0x55f79f*/
  if ( v2 ) /*0x55f7b5*/
    v3 = BSTreeManager_ctor(v2); /*0x55f7b9*/
  else
    v3 = 0; /*0x55f7c0*/
  g_BSTreeManager_Instance = v3; /*0x55f7c2*/
}
