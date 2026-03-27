0x69B645: mov     eax, [esp+arg_28]
0x69B649: test    eax, eax
0x69B64B: jz      short loc_69B657
0x69B64D: test    byte ptr [eax+40h], 80h
0x69B651: jz      short loc_69B657
0x69B653: mov     al, 1
0x69B655: jmp     short loc_69B659
0x69B657: xor     al, al
0x69B659: test    ebx, ebx
0x69B65B: jz      short loc_69B661
0x69B65D: mov     edi, ebx
0x69B65F: jmp     short MagicCaster_ApplyActiveMagicItem___GetVFXInfo_Position?
0x69B661: cmp     [esp+arg_14], 0
0x69B666: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B66C: test    al, al
0x69B66E: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B674: mov     edi, [esp+arg_14]
