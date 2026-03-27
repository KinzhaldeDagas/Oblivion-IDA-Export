0xA26D60: push    ebx
0xA26D61: push    ebp
0xA26D62: mov     ebp, ds:InterlockedDecrement
0xA26D68: push    esi
0xA26D69: push    edi
0xA26D6A: mov     edi, offset unk_B42570
0xA26D6F: mov     ebx, 0FFh
0xA26D74: mov     esi, [edi-4]
0xA26D77: sub     edi, 4
0xA26D7A: test    esi, esi
0xA26D7C: jz      short loc_A26D96
0xA26D7E: lea     eax, [esi+4]
0xA26D81: push    eax; lpAddend
0xA26D82: call    ebp ; InterlockedDecrement
0xA26D84: test    eax, eax
0xA26D86: jnz     short loc_A26D96
0xA26D88: test    esi, esi
0xA26D8A: jz      short loc_A26D96
0xA26D8C: mov     edx, [esi]
0xA26D8E: mov     eax, [edx]
0xA26D90: push    1
0xA26D92: mov     ecx, esi
0xA26D94: call    eax
0xA26D96: sub     ebx, 1
0xA26D99: jns     short loc_A26D74
0xA26D9B: pop     edi
0xA26D9C: pop     esi
0xA26D9D: pop     ebp
0xA26D9E: pop     ebx
0xA26D9F: retn
