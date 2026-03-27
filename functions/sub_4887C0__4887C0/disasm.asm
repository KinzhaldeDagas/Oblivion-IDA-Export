0x4887C0: push    esi
0x4887C1: mov     esi, [ecx]
0x4887C3: test    esi, esi
0x4887C5: jz      short loc_4887E4
0x4887C7: cmp     dword ptr [esi+4], 0
0x4887CB: jnz     short loc_4887D2
0x4887CD: cmp     dword ptr [esi], 0
0x4887D0: jz      short loc_4887E4
0x4887D2: mov     ecx, [esi]
0x4887D4: test    ecx, ecx
0x4887D6: jz      short loc_4887DD
0x4887D8: call    sub_485BC0
0x4887DD: mov     esi, [esi+4]
0x4887E0: test    esi, esi
0x4887E2: jnz     short loc_4887C7
0x4887E4: pop     esi
0x4887E5: retn
