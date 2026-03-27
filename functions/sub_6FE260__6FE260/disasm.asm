0x6FE260: push    ecx
0x6FE261: push    esi
0x6FE262: mov     esi, [esp+8+arg_4]
0x6FE266: test    esi, esi
0x6FE268: push    edi
0x6FE269: mov     edi, ecx
0x6FE26B: jnz     short loc_6FE271
0x6FE26D: xor     eax, eax
0x6FE26F: jmp     short loc_6FE296
0x6FE271: mov     eax, [esi]
0x6FE273: mov     edx, [eax+4]
0x6FE276: mov     ecx, esi
0x6FE278: call    edx
0x6FE27A: test    eax, eax
0x6FE27C: jz      short loc_6FE28E
0x6FE27E: mov     edi, edi
0x6FE280: cmp     eax, offset dword_B3FA80
0x6FE285: jz      short loc_6FE2E9
0x6FE287: mov     eax, [eax+4]
0x6FE28A: test    eax, eax
0x6FE28C: jnz     short loc_6FE280
0x6FE28E: xor     al, al
0x6FE290: neg     al
0x6FE292: sbb     eax, eax
0x6FE294: and     eax, esi
0x6FE296: test    eax, eax
0x6FE298: mov     [esp+0Ch+var_4], eax
0x6FE29C: jz      short loc_6FE2ED
0x6FE29E: mov     eax, [eax+1Ch]
0x6FE2A1: test    eax, eax
0x6FE2A3: jz      short loc_6FE2ED
0x6FE2A5: mov     ecx, [esp+0Ch+arg_0]
0x6FE2A9: mov     ecx, [ecx+488h]
0x6FE2AF: test    ecx, ecx
0x6FE2B1: mov     eax, [eax+8]
0x6FE2B4: mov     [esp+0Ch+arg_4], 0
0x6FE2BC: jz      short loc_6FE2ED
0x6FE2BE: test    eax, eax
0x6FE2C0: jz      short loc_6FE2ED
0x6FE2C2: lea     edx, [esp+0Ch+arg_4]
0x6FE2C6: push    edx
0x6FE2C7: push    eax
0x6FE2C8: call    NiTMap_GetAt
0x6FE2CD: cmp     [esp+0Ch+arg_4], 0
0x6FE2D2: jz      short loc_6FE2ED
0x6FE2D4: lea     eax, [esp+0Ch+var_4]
0x6FE2D8: push    eax
0x6FE2D9: lea     ecx, [edi+8]
0x6FE2DC: call    NiTArray_Add
0x6FE2E1: pop     edi
0x6FE2E2: mov     al, 1
0x6FE2E4: pop     esi
0x6FE2E5: pop     ecx
0x6FE2E6: retn    8
0x6FE2E9: mov     al, 1
0x6FE2EB: jmp     short loc_6FE290
0x6FE2ED: pop     edi
0x6FE2EE: xor     al, al
0x6FE2F0: pop     esi
0x6FE2F1: pop     ecx
0x6FE2F2: retn    8
