0x6B8610: lea     eax, [ecx+4]
0x6B8613: xor     edx, edx
0x6B8615: test    eax, eax
0x6B8617: push    esi
0x6B8618: jz      short loc_6B8633
0x6B861A: mov     eax, [eax+4]
0x6B861D: test    eax, eax
0x6B861F: jz      short loc_6B8633
0x6B8621: mov     esi, [esp+4+arg_0]
0x6B8625: cmp     edx, esi
0x6B8627: jge     short loc_6B8639
0x6B8629: mov     eax, [eax+4]
0x6B862C: add     edx, 1
0x6B862F: test    eax, eax
0x6B8631: jnz     short loc_6B8625
0x6B8633: xor     eax, eax
0x6B8635: pop     esi
0x6B8636: retn    4
0x6B8639: test    eax, eax
0x6B863B: jz      short loc_6B8633
0x6B863D: mov     [ecx], eax
0x6B863F: cmp     dword ptr [eax], 0
0x6B8642: jz      short loc_6B8633
0x6B8644: mov     eax, 1
0x6B8649: pop     esi
0x6B864A: retn    4
