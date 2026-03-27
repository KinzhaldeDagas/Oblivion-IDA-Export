0x64E2B0: add     ecx, 3Ch ; '<'
0x64E2B3: jz      short locret_64E315
0x64E2B5: xor     edx, edx
0x64E2B7: mov     eax, ecx
0x64E2B9: lea     esp, [esp+0]
0x64E2C0: cmp     dword ptr [eax], 0
0x64E2C3: jz      short loc_64E2C8
0x64E2C5: add     edx, 1
0x64E2C8: mov     eax, [eax+4]
0x64E2CB: test    eax, eax
0x64E2CD: jnz     short loc_64E2C0
0x64E2CF: test    edx, edx
0x64E2D1: push    ebx
0x64E2D2: push    edi
0x64E2D3: mov     edi, edx
0x64E2D5: mov     bl, 1
0x64E2D7: jz      short loc_64E313
0x64E2D9: push    ebp
0x64E2DA: push    esi
0x64E2DB: jmp     short loc_64E2E0
0x64E2DD: align 10h
0x64E2E0: test    bl, bl
0x64E2E2: jz      short loc_64E311
0x64E2E4: xor     bl, bl
0x64E2E6: test    ecx, ecx
0x64E2E8: mov     eax, ecx
0x64E2EA: jz      short loc_64E309
0x64E2EC: lea     esp, [esp+0]
0x64E2F0: mov     edx, [ecx]
0x64E2F2: mov     esi, [eax]
0x64E2F4: mov     ebp, [edx+14h]
0x64E2F7: cmp     ebp, [esi+14h]
0x64E2FA: jle     short loc_64E302
0x64E2FC: mov     [ecx], esi
0x64E2FE: mov     [eax], edx
0x64E300: mov     bl, 1
0x64E302: mov     eax, [eax+4]
0x64E305: test    eax, eax
0x64E307: jnz     short loc_64E2F0
0x64E309: sub     edi, 1
0x64E30C: mov     ecx, [ecx+4]
0x64E30F: jnz     short loc_64E2E0
0x64E311: pop     esi
0x64E312: pop     ebp
0x64E313: pop     edi
0x64E314: pop     ebx
0x64E315: retn
