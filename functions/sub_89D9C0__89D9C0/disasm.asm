0x89D9C0: push    ebx
0x89D9C1: push    esi
0x89D9C2: mov     esi, ecx
0x89D9C4: mov     eax, [esi]
0x89D9C6: mov     edx, [eax+58h]
0x89D9C9: xor     bl, bl
0x89D9CB: call    edx
0x89D9CD: test    eax, eax
0x89D9CF: jz      short loc_89D9D9
0x89D9D1: mov     eax, [eax+2B0h]
0x89D9D7: jmp     short loc_89D9DB
0x89D9D9: xor     eax, eax
0x89D9DB: test    eax, eax
0x89D9DD: jz      short loc_89D9ED
0x89D9DF: mov     ecx, [esi+8]
0x89D9E2: push    ecx
0x89D9E3: mov     ecx, eax
0x89D9E5: call    sub_88B580
0x89D9EA: pop     esi
0x89D9EB: pop     ebx
0x89D9EC: retn
0x89D9ED: pop     esi
0x89D9EE: mov     al, bl
0x89D9F0: pop     ebx
0x89D9F1: retn
