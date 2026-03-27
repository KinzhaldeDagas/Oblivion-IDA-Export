0x4161F0: mov     eax, EffectSetting_OverridableFlagList[ecx*4]
0x4161F7: test    [esi], eax
0x4161F9: jz      short loc_4161FF
0x4161FB: or      edi, eax
0x4161FD: jmp     short EffectSetting_LoadForm___ForcedFO_LoopContinue
0x4161FF: not     eax
0x416201: and     edi, eax
