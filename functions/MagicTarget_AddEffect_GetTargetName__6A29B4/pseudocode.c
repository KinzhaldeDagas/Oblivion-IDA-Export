int __usercall MagicTarget_AddEffect_::GetTargetName@<eax>(int a1@<edi>)
{
  TESObjectREFR *v1; // eax

  if ( !MEMORY[0xB3355C] ) /*0x6a29bb*/
    JUMPOUT(0x6A2CBA); /*0x6a2cba*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) ) /*0x6a29c8*/
  {
    v1 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6a29d5*/
    TESObjectREFR_GetName(v1); /*0x6a29d9*/
  }
  return MagicTarget_AddEffect_::PrintEffectResisted_DebugMsg();
}
