int __usercall ActiveEffect_Base_ProcessEffect_::TestMenuMode@<eax>(int a1@<esi>, int a2, float a3)
{
  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20)) != reference /*0x68e7a4*/
    || !InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::ClearHitEffectList(a1); /*0x68e7a2*/
  }
  *(_DWORD *)(a1 + 0x14) |= 0x40u; /*0x68e7ad*/
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList_(a1, a2, a3);
}
