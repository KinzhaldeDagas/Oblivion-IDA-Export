0x68EAD7: mov     eax, [esi]
0x68EAD9: lea     ecx, [esp+arg_60]
0x68EADD: push    ecx
0x68EADE: push    eax
0x68EADF: mov     ecx, offset NiTMap_AECreatorFuncs; Verified (Oblivion): looks up the current EffectSetting.effectCode in NiTMap_AECreatorFuncs; a hit invokes its ActiveEffectFactory with caster, MagicItem and EffectItem.
0x68EAE4: mov     [esp+8+arg_60], 0
0x68EAEC: call    NiTMap_GetAt
0x68EAF1: test    al, al
0x68EAF3: jz      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode; Verified (Oblivion): only the unregistered-code fallback is handled here. Registered DIWE/DIAR codes are dispatched through NiTMap_AECreatorFuncs before this fallback switch.
0x68EAF5: mov     eax, [esp+arg_60]
0x68EAF9: test    eax, eax
0x68EAFB: jz      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode; Verified (Oblivion): only the unregistered-code fallback is handled here. Registered DIWE/DIAR codes are dispatched through NiTMap_AECreatorFuncs before this fallback switch.
