0x67D7B0: mov     eax, ds:0B333A0h
0x67D7B5: mov     ecx, [eax+34h]
0x67D7B8: test    ecx, ecx
0x67D7BA: jz      short loc_67D7CC
0x67D7BC: call    sub_4AF170
0x67D7C1: test    eax, eax
0x67D7C3: jz      short locret_67D81B
0x67D7C5: mov     ecx, eax
0x67D7C7: jmp     sub_4E55A0
0x67D7CC: mov     eax, ds:0B06A2Ch
0x67D7D1: push    edi
0x67D7D2: xor     edi, edi
0x67D7D4: push    esi
0x67D7D5: cmp     edi, eax
0x67D7D7: jnb     short loc_67D819
0x67D7D9: xor     esi, esi
0x67D7DB: jmp     short loc_67D7E0
0x67D7DD: align 10h
0x67D7E0: cmp     esi, eax
0x67D7E2: jnb     short loc_67D814
0x67D7E4: mov     ecx, ds:0B333A0h
0x67D7EA: mov     ecx, [ecx+8]
0x67D7ED: push    esi
0x67D7EE: push    edi
0x67D7EF: call    GetGridEntry
0x67D7F4: mov     ecx, [eax]
0x67D7F6: test    ecx, ecx
0x67D7F8: jz      short loc_67D80A
0x67D7FA: call    sub_4AF170
0x67D7FF: test    eax, eax
0x67D801: jz      short loc_67D80A
0x67D803: mov     ecx, eax
0x67D805: call    sub_4E55A0
0x67D80A: mov     eax, ds:0B06A2Ch
0x67D80F: add     esi, 1
0x67D812: jmp     short loc_67D7E0
0x67D814: add     edi, 1
0x67D817: jmp     short loc_67D7D5
0x67D819: pop     esi
0x67D81A: pop     edi
0x67D81B: retn
