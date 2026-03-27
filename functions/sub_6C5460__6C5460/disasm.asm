0x6C5460: mov     eax, [esp+arg_4]
0x6C5464: add     ecx, 8
0x6C5467: test    eax, eax
0x6C5469: jnz     short loc_6C5478
0x6C546B: mov     eax, [esp+arg_0]
0x6C546F: push    eax
0x6C5470: call    NiTMap_RemoveAt
0x6C5475: retn    8
0x6C5478: mov     [esp+arg_4], eax
0x6C547C: jmp     sub_412D30
