0x69AF68: mov     eax, [esi]
0x69AF6A: mov     edx, [eax+20h]
0x69AF6D: mov     ecx, esi
0x69AF6F: mov     dword ptr [esi+8], 4
0x69AF76: call    edx
0x69AF78: mov     edi, eax
0x69AF7A: mov     eax, [esi]
0x69AF7C: mov     edx, [eax+20h]
0x69AF7F: mov     ecx, esi
0x69AF81: call    edx
0x69AF83: test    eax, eax
0x69AF85: jz      short loc_69AF9C
0x69AF87: mov     edx, [eax]
0x69AF89: mov     ecx, eax
0x69AF8B: mov     eax, [edx+190h]
0x69AF91: call    eax
0x69AF93: test    al, al
0x69AF95: jz      short loc_69AF9C
0x69AF97: lea     ebp, [esi-5Ch]
0x69AF9A: jmp     short MagicCaster_ApplyActiveMagicItem___CheckIsPoison
0x69AF9C: xor     ebp, ebp
