0x4FD580: push    ebx
0x4FD581: push    edi
0x4FD582: lea     edi, [ecx+3Ch]
0x4FD585: xor     ebx, ebx
0x4FD587: cmp     edi, ebx
0x4FD589: jz      short loc_4FD5DF
0x4FD58B: push    esi
0x4FD58C: lea     esp, [esp+0]
0x4FD590: mov     ecx, edi
0x4FD592: call    BSSimpleList_IsEmpty
0x4FD597: test    al, al
0x4FD599: jnz     short loc_4FD5DE
0x4FD59B: mov     esi, [edi]
0x4FD59D: cmp     esi, ebx
0x4FD59F: jz      short loc_4FD5BE
0x4FD5A1: mov     eax, [esi+18h]
0x4FD5A4: push    eax
0x4FD5A5: call    FormHeapFree
0x4FD5AA: push    esi
0x4FD5AB: mov     [esi+18h], ebx
0x4FD5AE: mov     [esi+1Eh], bx
0x4FD5B2: mov     [esi+1Ch], bx
0x4FD5B6: call    FormHeapFree
0x4FD5BB: add     esp, 8
0x4FD5BE: mov     eax, [edi+4]
0x4FD5C1: cmp     eax, ebx
0x4FD5C3: jz      short loc_4FD5DA
0x4FD5C5: mov     ecx, [eax+4]
0x4FD5C8: mov     [edi+4], ecx
0x4FD5CB: mov     edx, [eax]
0x4FD5CD: push    eax
0x4FD5CE: mov     [edi], edx
0x4FD5D0: call    FormHeapFree
0x4FD5D5: add     esp, 4
0x4FD5D8: jmp     short loc_4FD590
0x4FD5DA: mov     [edi], ebx
0x4FD5DC: jmp     short loc_4FD590
0x4FD5DE: pop     esi
0x4FD5DF: pop     edi
0x4FD5E0: pop     ebx
0x4FD5E1: retn
