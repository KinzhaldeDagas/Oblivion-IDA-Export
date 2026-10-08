// Reset Face menu action: resolve the open RaceSexMenu, reset the player NPC's active FaceGen delta, synchronously rebuild the player face, then synchronize the menu controls from player state.
void __cdecl RaceSexMenu_ExecuteResetFace()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v2; // esi
  TESNPC *v3; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c9c75*/
  if ( OpenMenuTile ) /*0x5c9c7f*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5c9c92*/
    v2 = OblivionDynamicCast( /*0x5c9c9d*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &RaceSexMenu `RTTI Type Descriptor',
           0);
    if ( v2 ) /*0x5c9ca4*/
    {
      v3 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c9cb4*/
      TESNPC_ResetFaceGenDelta(v3); /*0x5c9cb8*/
      RaceSexMenu_RefreshPlayerFace(v2); /*0x5c9cbf*/
      RaceSexMenu_SynchronizeControlsFromPlayer(v2, 0); /*0x5c9cc8*/
    }
  }
}
