0x60DD60: cmp     dword ptr [ecx+30h], 0
0x60DD64: jz      short loc_60DD76
0x60DD66: mov     ecx, [ecx+30h]
0x60DD69: mov     eax, [ecx]
0x60DD6B: mov     edx, [eax+8]
0x60DD6E: call    edx
0x60DD70: test    eax, eax
0x60DD72: setnz   al
0x60DD75: retn
0x60DD76: xor     eax, eax
0x60DD78: test    eax, eax
0x60DD7A: setnz   al
0x60DD7D: retn
