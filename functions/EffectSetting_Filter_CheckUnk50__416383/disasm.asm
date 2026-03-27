0x416383: mov     eax, [edi+50h]
0x416386: test    eax, eax
0x416388: jz      short EffectSetting_Filter___CheckFlags
0x41638A: mov     ecx, [edi+54h]
0x41638D: push    ecx
0x41638E: push    esi
0x41638F: call    eax
0x416391: add     esp, 8
0x416394: test    al, al
0x416396: jz      short EffectSetting_Filter___Return_0
