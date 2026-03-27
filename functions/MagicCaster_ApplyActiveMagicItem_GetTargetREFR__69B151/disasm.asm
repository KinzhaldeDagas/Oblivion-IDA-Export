0x69B151: test    ebx, ebx
0x69B153: jz      short loc_69B166
0x69B155: mov     edx, [ebx]
0x69B157: mov     eax, [edx+4]
0x69B15A: mov     ecx, ebx
0x69B15C: call    eax
0x69B15E: mov     ebx, eax
0x69B160: mov     [esp+arg_1C], eax
0x69B164: jmp     short MagicCaster_ApplyActiveMagicItem___GetMagicItemData
0x69B166: xor     ebx, ebx
0x69B168: mov     [esp+arg_1C], ebx
