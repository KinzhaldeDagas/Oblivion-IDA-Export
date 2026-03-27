0x68EAD7: mov     eax, [esi]
0x68EAD9: lea     ecx, [esp+arg_60]
0x68EADD: push    ecx
0x68EADE: push    eax
0x68EADF: mov     ecx, offset NiTMap_AECreatorFuncs
0x68EAE4: mov     [esp+8+arg_60], 0
0x68EAEC: call    NiTMap_GetAt
0x68EAF1: test    al, al
0x68EAF3: jz      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode
0x68EAF5: mov     eax, [esp+arg_60]
0x68EAF9: test    eax, eax
0x68EAFB: jz      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode
