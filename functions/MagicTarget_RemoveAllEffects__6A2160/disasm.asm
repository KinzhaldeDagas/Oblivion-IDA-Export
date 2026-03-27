0x6A2160: mov     eax, [ecx]
0x6A2162: mov     edx, [eax+8]
0x6A2165: push    esi
0x6A2166: call    edx
0x6A2168: mov     esi, eax
0x6A216A: test    esi, esi
0x6A216C: jz      short loc_6A218E
0x6A216E: mov     edi, edi
0x6A2170: mov     eax, [esi+4]
0x6A2173: test    eax, eax
0x6A2175: jnz     short loc_6A217B
0x6A2177: cmp     [esi], eax
0x6A2179: jz      short loc_6A218E
0x6A217B: mov     ecx, [esi]
0x6A217D: test    ecx, ecx
0x6A217F: mov     esi, eax
0x6A2181: jz      short loc_6A218A
0x6A2183: push    1
0x6A2185: call    ActiveEffect_Base_Remove
0x6A218A: test    esi, esi
0x6A218C: jnz     short loc_6A2170
0x6A218E: pop     esi
0x6A218F: retn
