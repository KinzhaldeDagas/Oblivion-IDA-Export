0x6E80F0: push    esi
0x6E80F1: push    edi
0x6E80F2: mov     edi, ecx
0x6E80F4: mov     esi, [edi+10h]
0x6E80F7: test    esi, esi
0x6E80F9: jz      short loc_6E812A
0x6E80FB: lea     eax, [esi+4]
0x6E80FE: push    eax; lpAddend
0x6E80FF: call    dword ptr ds:0A2807Ch
0x6E8105: test    eax, eax
0x6E8107: jnz     short loc_6E8117
0x6E8109: test    esi, esi
0x6E810B: jz      short loc_6E8117
0x6E810D: mov     edx, [esi]
0x6E810F: mov     eax, [edx]
0x6E8111: push    1
0x6E8113: mov     ecx, esi
0x6E8115: call    eax
0x6E8117: mov     cl, [esp+8+arg_0]
0x6E811B: mov     dword ptr [edi+10h], 0
0x6E8122: mov     [edi+0Ch], cl
0x6E8125: pop     edi
0x6E8126: pop     esi
0x6E8127: retn    4
0x6E812A: mov     dl, [esp+8+arg_0]
0x6E812E: mov     [edi+0Ch], dl
0x6E8131: pop     edi
0x6E8132: pop     esi
0x6E8133: retn    4
