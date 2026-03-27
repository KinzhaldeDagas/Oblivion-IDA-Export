0x4D8050: push    ebx
0x4D8051: push    ebp
0x4D8052: push    esi
0x4D8053: mov     esi, ecx
0x4D8055: lea     ebx, [esi+44h]
0x4D8058: push    edi
0x4D8059: mov     ecx, ebx
0x4D805B: call    sub_41E650
0x4D8060: mov     ebp, eax
0x4D8062: mov     eax, [esi]
0x4D8064: mov     edx, [eax+170h]
0x4D806A: mov     ecx, esi
0x4D806C: xor     edi, edi
0x4D806E: call    edx
0x4D8070: cmp     byte ptr [eax+4], 1Ah
0x4D8074: jnz     short loc_4D8084
0x4D8076: mov     eax, [esi]
0x4D8078: mov     edx, [eax+170h]
0x4D807E: mov     ecx, esi
0x4D8080: call    edx
0x4D8082: mov     edi, eax
0x4D8084: test    ebp, ebp
0x4D8086: jz      short loc_4D8096
0x4D8088: test    edi, edi
0x4D808A: jz      short loc_4D8096
0x4D808C: push    0
0x4D808E: push    ebp
0x4D808F: mov     ecx, edi
0x4D8091: call    sub_4B22E0
0x4D8096: mov     ecx, ebx
0x4D8098: call    sub_41E670
0x4D809D: test    eax, eax
0x4D809F: jz      short loc_4D80AF
0x4D80A1: test    edi, edi
0x4D80A3: jz      short loc_4D80AF
0x4D80A5: push    0
0x4D80A7: push    eax
0x4D80A8: mov     ecx, edi
0x4D80AA: call    sub_4B22E0
0x4D80AF: pop     edi
0x4D80B0: pop     esi
0x4D80B1: pop     ebp
0x4D80B2: pop     ebx
0x4D80B3: retn
