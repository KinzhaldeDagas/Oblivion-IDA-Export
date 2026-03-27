0x4163E0: mov     eax, [edi+64h]
0x4163E3: cmp     eax, 6
0x4163E6: jz      short EffectSetting_Filter___Return_1
0x4163E8: xor     ecx, ecx
0x4163EA: cmp     [esi+64h], eax
0x4163ED: setz    cl
0x4163F0: mov     eax, ecx
0x4163F2: test    eax, eax
0x4163F4: jz      short EffectSetting_Filter___Return_0
