0x6A8982: fld     dword ptr [esi+18h]
0x6A8985: push    ecx
0x6A8986: fchs
0x6A8988: mov     ecx, esi
0x6A898A: fstp    [esp+4+var_4]
0x6A898D: push    edi
0x6A898E: call    ValueModifierEffect_ModifyAV; OBMEFix 2026-05-30: vanilla ValueModifierEffect::ApplyToActor clamps negative DamageAV_F so non-fatigue actor values cannot be driven below zero. OBME's replacement helper omits this clamp; OBMEFix restores it for OBME-origin PlayerCharacter::DamageAV_F calls.
