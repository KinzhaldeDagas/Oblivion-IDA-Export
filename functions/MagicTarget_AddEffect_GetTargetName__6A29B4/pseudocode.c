int __usercall MagicTarget_AddEffect_::GetTargetName@<eax>(int a1@<edi>)
{
  TESObjectREFR *v1; // eax

  if ( !bGameSetting_MagicTargetDebugMsg__ )
    JUMPOUT(0x6A2CBA);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) )
  {
    v1 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    TESObjectREFR_GetName(v1);
  }
  return MagicTarget_AddEffect_::PrintEffectResisted_DebugMsg();
}
