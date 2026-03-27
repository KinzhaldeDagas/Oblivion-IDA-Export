0x6B7B60: push    esi
0x6B7B61: mov     esi, ecx
0x6B7B63: test    esi, esi
0x6B7B65: jz      short loc_6B7B80
0x6B7B67: cmp     dword ptr [esi+4], 0
0x6B7B6B: jnz     short loc_6B7B72
0x6B7B6D: cmp     dword ptr [esi], 0
0x6B7B70: jz      short loc_6B7B80
0x6B7B72: mov     ecx, [esi]
0x6B7B74: call    sub_6B7BB0
0x6B7B79: mov     esi, [esi+4]
0x6B7B7C: test    esi, esi
0x6B7B7E: jnz     short loc_6B7B67
0x6B7B80: pop     esi
0x6B7B81: retn
