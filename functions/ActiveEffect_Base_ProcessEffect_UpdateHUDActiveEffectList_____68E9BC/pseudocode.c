int __userpurge ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList___@<eax>(int a1@<esi>, int a2)
{
  int v2; // ecx
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  v2 = *(_DWORD *)(a1 + 0x20);
  if ( v2 )
  {
    if ( (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2) == TESDataHandler_g_PlayerRef )
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
      ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
      HUDMainMenu_UpdateActiveEffects(ParentMenu, a1, COERCE_FLOAT(1));
    }
  }
  return ActiveEffect_Base_ProcessEffect_::RemoveEffect(a1, a2);
}
