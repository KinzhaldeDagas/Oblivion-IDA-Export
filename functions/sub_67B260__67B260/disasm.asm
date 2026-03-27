0x67B260: push    esi
0x67B261: push    edi
0x67B262: mov     edi, [esp+8+arg_0]
0x67B266: cmp     edi, ds:0B333C4h
0x67B26C: mov     esi, ecx
0x67B26E: jz      loc_67B30A
0x67B274: cmp     [esp+8+arg_8], 0
0x67B279: jnz     short loc_67B2CB
0x67B27B: cmp     [esp+8+arg_4], 0
0x67B280: push    edi
0x67B281: jnz     short loc_67B2A7
0x67B283: call    BSSimpleList_PushFront
0x67B288: mov     ecx, [edi+58h]
0x67B28B: mov     eax, [ecx]
0x67B28D: mov     edx, [eax+28h]
0x67B290: call    edx
0x67B292: fstp    st
0x67B294: mov     eax, [esi+8]
0x67B297: mov     ecx, [eax]
0x67B299: mov     ecx, [ecx+58h]
0x67B29C: mov     edx, [ecx]
0x67B29E: mov     eax, [edx+28h]
0x67B2A1: call    eax
0x67B2A3: fstp    st
0x67B2A5: jmp     short loc_67B2FD
0x67B2A7: mov     ecx, [esi+8]
0x67B2AA: call    BSSimpleList_PushBack
0x67B2AF: mov     ecx, [edi+58h]
0x67B2B2: mov     edx, [ecx]
0x67B2B4: mov     eax, [edx+28h]
0x67B2B7: call    eax
0x67B2B9: fstp    st
0x67B2BB: mov     ecx, [esi]
0x67B2BD: mov     ecx, [ecx+58h]
0x67B2C0: mov     edx, [ecx]
0x67B2C2: mov     eax, [edx+28h]
0x67B2C5: call    eax
0x67B2C7: fstp    st
0x67B2C9: jmp     short loc_67B2FD
0x67B2CB: test    esi, esi
0x67B2CD: jz      short loc_67B2FD
0x67B2CF: mov     edx, [esp+8+arg_C]
0x67B2D3: mov     eax, [ecx+4]
0x67B2D6: test    eax, eax
0x67B2D8: jnz     short loc_67B2DE
0x67B2DA: cmp     [ecx], eax
0x67B2DC: jz      short loc_67B2FD
0x67B2DE: cmp     [ecx], edx
0x67B2E0: jz      short loc_67B2EA
0x67B2E2: mov     ecx, eax
0x67B2E4: test    ecx, ecx
0x67B2E6: jnz     short loc_67B2D3
0x67B2E8: jmp     short loc_67B2FD
0x67B2EA: cmp     [esp+8+arg_4], 0
0x67B2EF: push    edi
0x67B2F0: jz      short loc_67B2F8
0x67B2F2: test    eax, eax
0x67B2F4: jz      short loc_67B30F
0x67B2F6: mov     ecx, eax
0x67B2F8: call    BSSimpleList_PushFront
0x67B2FD: mov     ecx, [esi+8]
0x67B300: mov     eax, [ecx+4]
0x67B303: test    eax, eax
0x67B305: jz      short loc_67B30A
0x67B307: mov     [esi+8], eax
0x67B30A: pop     edi
0x67B30B: pop     esi
0x67B30C: retn    10h
0x67B30F: call    BSSimpleList_PushBack
0x67B314: jmp     short loc_67B2FD
