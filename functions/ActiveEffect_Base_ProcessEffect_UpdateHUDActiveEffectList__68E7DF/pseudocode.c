int __usercall ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList@<eax>(int a1@<esi>, int a2, float a3)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20)) == TESDataHandler_g_PlayerRef )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    HUDMainMenu_UpdateActiveEffects(ParentMenu, a1, 0.0);
  }
  return ActiveEffect_Base_ProcessEffect_::InitActvEffect(a1, a2, a3);
}
