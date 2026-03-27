0x4D6FA0: push    ebx
0x4D6FA1: push    esi
0x4D6FA2: mov     esi, ecx
0x4D6FA4: mov     eax, [esi]
0x4D6FA6: mov     edx, [eax+170h]
0x4D6FAC: xor     bl, bl
0x4D6FAE: call    edx
0x4D6FB0: test    eax, eax
0x4D6FB2: jz      short loc_4D6FC8
0x4D6FB4: mov     eax, [esi]
0x4D6FB6: mov     edx, [eax+170h]
0x4D6FBC: mov     ecx, esi
0x4D6FBE: call    edx
0x4D6FC0: cmp     byte ptr [eax+4], 1Eh
0x4D6FC4: mov     al, 1
0x4D6FC6: jz      short loc_4D6FCA
0x4D6FC8: mov     al, bl
0x4D6FCA: pop     esi
0x4D6FCB: pop     ebx
0x4D6FCC: retn
