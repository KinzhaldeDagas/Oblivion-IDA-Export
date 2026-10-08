// [Controller decode 2026-07-09] Reset-defaults confirmation callback. Resets currently selected scheme and marks bindings dirty for label refresh.
void __cdecl ControlsMenu::ConfirmResetDefaultsCallback()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v2; // esi

  if ( InterfaceManager_ConsumeMessageButton() == 2 ) /*0x59b8c7*/
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FD); /*0x59b8ce*/
    if ( OpenMenuTile ) /*0x59b8d8*/
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x59b8dc*/
    else
      ParentMenu = 0; /*0x59b8e3*/
    v2 = OblivionDynamicCast( /*0x59b8fa*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ControlsMenu `RTTI Type Descriptor',
           0);
    if ( v2 ) /*0x59b901*/
    {
      InputGlobals::ResetControlMap((DIDEVCAPS *)MEMORY[0xB33398]->input, v2[0x17]); /*0x59b910*/
      *((_BYTE *)v2 + 0xD4) = 1; /*0x59b915*/
    }
  }
}
