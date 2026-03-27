0x416398: mov     eax, [edi+58h]
0x41639B: test    eax, eax
0x41639D: jz      short EffectSetting_Filter___CheckForceFlags
0x41639F: cmp     [esp+arg_C], 0
0x4163A4: jz      short loc_4163AE
0x4163A6: test    [esi+58h], eax
0x4163A9: setnz   al
0x4163AC: jmp     short loc_4163B8
0x4163AE: mov     edx, [esi+58h]
0x4163B1: and     edx, eax
0x4163B3: cmp     edx, eax
0x4163B5: setz    al
0x4163B8: test    al, al
0x4163BA: jz      short EffectSetting_Filter___Return_0
