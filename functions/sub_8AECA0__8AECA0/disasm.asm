0x8AECA0: push    ebx
0x8AECA1: push    esi
0x8AECA2: mov     esi, ecx
0x8AECA4: mov     eax, [esi]
0x8AECA6: mov     edx, [eax+58h]
0x8AECA9: xor     bl, bl
0x8AECAB: call    edx
0x8AECAD: test    eax, eax
0x8AECAF: jz      short loc_8AECB9
0x8AECB1: mov     eax, [eax+2B0h]
0x8AECB7: jmp     short loc_8AECBB
0x8AECB9: xor     eax, eax
0x8AECBB: test    eax, eax
0x8AECBD: jz      short loc_8AECCD
0x8AECBF: mov     ecx, [esi+8]
0x8AECC2: push    ecx
0x8AECC3: mov     ecx, eax
0x8AECC5: call    sub_88B4E0
0x8AECCA: pop     esi
0x8AECCB: pop     ebx
0x8AECCC: retn
0x8AECCD: pop     esi
0x8AECCE: mov     al, bl
0x8AECD0: pop     ebx
0x8AECD1: retn
