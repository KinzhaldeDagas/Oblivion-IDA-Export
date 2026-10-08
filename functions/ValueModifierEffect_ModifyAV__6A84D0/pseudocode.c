// OBMEFix 2026-05-30: vanilla ValueModifierEffect::ApplyToActor clamps negative DamageAV_F so non-fatigue actor values cannot be driven below zero. OBME's replacement helper omits this clamp; OBMEFix restores it for OBME-origin PlayerCharacter::DamageAV_F calls.
void __userpurge ValueModifierEffect_ModifyAV(int a1@<ecx>, TESObjectREFR *a2, int a3, int a4, int a5, int a6)
{
  if ( a2 ) /*0x6a84da*/
  {
    if ( Actor_IsPlayer(a2) /*0x6a84ff*/
      && *(_DWORD *)(a1 + 0x28) == 4
      && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 2) != 0 )
    {
      ValueModifierEffect_ModifyAV_::ApplyAbilityAsPermanent((int)a2, a1, (int)a2, a3, a4, a5); /*0x6a8500*/
    }
    else
    {
      ValueModifierEffect_ModifyAV_::GetCasterActor((int)a2, a1, (int)a2, a3, a4, a5, a6); /*0x6a84e9*/
    }
  }
  else
  {
    ValueModifierEffect_ModifyAV_::Done(0, a3); /*0x6a84da*/
  }
}
