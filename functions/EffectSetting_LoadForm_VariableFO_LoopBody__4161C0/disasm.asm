0x4161C0: cmp     byte_B0341C[eax*8], 0
0x4161C8: jz      short EffectSetting_LoadForm___VariableFO_LoopContinue
0x4161CA: mov     ecx, EffectSetting_DisplayedFlagList[eax*8]
0x4161D1: test    [esi], ecx
0x4161D3: jz      short loc_4161D9
0x4161D5: or      edi, ecx
0x4161D7: jmp     short EffectSetting_LoadForm___VariableFO_LoopContinue
0x4161D9: not     ecx
0x4161DB: and     edi, ecx
