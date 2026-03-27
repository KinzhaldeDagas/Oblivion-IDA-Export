int __usercall ActiveEffect_Base_ProcessEffect_::CheckQueuedHitFX@<eax>(int a1@<ecx>, int a2@<esi>, int a3, float a4)
{
  if ( (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) != TESDataHandler_g_PlayerRef
    || InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::UpdateEffect(a2, a3, a4);
  }
  if ( (*(_DWORD *)(a2 + 0x14) & 0x40) != 0 )
    return ActiveEffect_Base_ProcessEffect_::ApplyQueuedHitVFX(*(_DWORD *)(a2 + 0x34));
  return ActiveEffect_Base_ProcessEffect_::ProcessQueuedSoundFX();
}
