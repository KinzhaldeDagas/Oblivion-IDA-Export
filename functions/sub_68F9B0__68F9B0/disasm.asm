0x68F9B0: push    esi
0x68F9B1: push    edi
0x68F9B2: mov     edi, [esp+8+arg_0]
0x68F9B6: lea     esi, [ecx-4]
0x68F9B9: push    esi
0x68F9BA: mov     ecx, edi
0x68F9BC: call    sub_8A63A0
0x68F9C1: test    esi, esi
0x68F9C3: jz      short loc_68F9CA
0x68F9C5: lea     eax, [esi+4]
0x68F9C8: jmp     short loc_68F9CC
0x68F9CA: xor     eax, eax
0x68F9CC: push    eax
0x68F9CD: mov     ecx, edi
0x68F9CF: call    sub_8A6300
0x68F9D4: test    esi, esi
0x68F9D6: jz      short loc_68F9DD
0x68F9D8: lea     eax, [esi+8]
0x68F9DB: jmp     short loc_68F9DF
0x68F9DD: xor     eax, eax
0x68F9DF: push    eax
0x68F9E0: mov     ecx, edi
0x68F9E2: call    sub_8A6350
0x68F9E7: test    esi, esi
0x68F9E9: jz      short loc_68F9F6
0x68F9EB: mov     eax, [esi]
0x68F9ED: mov     edx, [eax+10h]
0x68F9F0: push    1
0x68F9F2: mov     ecx, esi
0x68F9F4: call    edx
0x68F9F6: pop     edi
0x68F9F7: pop     esi
0x68F9F8: retn    4
