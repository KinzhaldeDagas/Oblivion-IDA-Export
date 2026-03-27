0x4163BC: mov     eax, [esp+arg_10]
0x4163C0: test    eax, eax
0x4163C2: jz      short EffectSetting_Filter___CheckMeta
0x4163C4: mov     ecx, [esi+58h]
0x4163C7: and     ecx, eax
0x4163C9: xor     edx, edx
0x4163CB: cmp     ecx, eax
0x4163CD: setnz   dl
0x4163D0: mov     eax, edx
0x4163D2: test    eax, eax
0x4163D4: jz      short EffectSetting_Filter___Return_0
