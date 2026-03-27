int __usercall ActiveEffect_Base_ProcessEffect_::TestMenuMode@<eax>(int a1@<esi>)
{
  int v5; // ecx

  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20)) != TESDataHandler_g_PlayerRef
    || !InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::ClearHitEffectList(a1);
  }
  *(_DWORD *)(a1 + 0x14) |= 0x40u;
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList_(v5);
}
