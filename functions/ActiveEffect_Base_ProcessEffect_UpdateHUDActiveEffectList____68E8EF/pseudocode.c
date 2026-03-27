int __usercall ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList__@<eax>(_BYTE *a1@<esi>, int a2)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  if ( !a1[0x11]
    && !a1[0x12]
    && (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 8) + 4))(*((_DWORD *)a1 + 8)) == TESDataHandler_g_PlayerRef )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    HUDMainMenu_UpdateActiveEffects(ParentMenu, (int)a1, 0.0);
  }
  return ActiveEffect_Base_ProcessEffect_::CheckForExpiration(a1, a2);
}
