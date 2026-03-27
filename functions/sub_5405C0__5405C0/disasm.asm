0x5405C0: mov     ecx, [ecx+0E0h]
0x5405C6: test    ecx, ecx
0x5405C8: push    esi
0x5405C9: push    edi
0x5405CA: jz      short loc_5405EC
0x5405CC: mov     edx, [esp+8+arg_4]
0x5405D0: mov     esi, [esp+8+arg_0]
0x5405D4: mov     eax, [ecx]
0x5405D6: test    eax, eax
0x5405D8: jz      short loc_5405EC
0x5405DA: mov     edi, [eax]
0x5405DC: cmp     [edi], esi
0x5405DE: jnz     short loc_5405E5
0x5405E0: cmp     [eax+4], edx
0x5405E3: jz      short loc_5405F3
0x5405E5: mov     ecx, [ecx+4]
0x5405E8: test    ecx, ecx
0x5405EA: jnz     short loc_5405D4
0x5405EC: pop     edi
0x5405ED: xor     al, al
0x5405EF: pop     esi
0x5405F0: retn    8
0x5405F3: pop     edi
0x5405F4: mov     al, 1
0x5405F6: pop     esi
0x5405F7: retn    8
