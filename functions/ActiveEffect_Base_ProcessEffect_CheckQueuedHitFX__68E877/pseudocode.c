int __usercall ActiveEffect_Base_ProcessEffect_::CheckQueuedHitFX@<eax>(
        int ecx0@<ecx>,
        _BYTE *a1@<esi>,
        int a2,
        float a3)
{
  if ( (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0 + 4))(ecx0) != reference /*0x68e886*/
    || InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::UpdateEffect(a1, a2, a3); /*0x68e884*/
  }
  if ( (*((_DWORD *)a1 + 5) & 0x40) != 0 ) /*0x68e898*/
    return ActiveEffect_Base_ProcessEffect_::ApplyQueuedHitVFX(*((_DWORD *)a1 + 0xD)); /*0x68e89b*/
  return ActiveEffect_Base_ProcessEffect_::ProcessQueuedSoundFX();
}
