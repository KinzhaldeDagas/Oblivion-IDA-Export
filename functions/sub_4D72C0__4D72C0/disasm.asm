0x4D72C0: push    ebx
0x4D72C1: push    esi
0x4D72C2: mov     esi, ecx
0x4D72C4: mov     eax, [esi]
0x4D72C6: mov     edx, [eax+170h]
0x4D72CC: xor     bl, bl
0x4D72CE: call    edx
0x4D72D0: cmp     byte ptr [eax+4], 20h ; ' '
0x4D72D4: jnz     short loc_4D72ED
0x4D72D6: push    17h; a2
0x4D72D8: lea     ecx, [esi+44h]; this
0x4D72DB: call    BaseExtraList_GetExtraData
0x4D72E0: test    eax, eax
0x4D72E2: jz      short loc_4D72ED
0x4D72E4: pop     esi
0x4D72E5: pop     ebx
0x4D72E6: mov     ecx, eax
0x4D72E8: jmp     sub_4295D0
0x4D72ED: pop     esi
0x4D72EE: mov     al, bl
0x4D72F0: pop     ebx
0x4D72F1: retn    4
