0x4FC6C0: push    ebx
0x4FC6C1: push    edi
0x4FC6C2: lea     edi, [ecx+48h]
0x4FC6C5: xor     ebx, ebx
0x4FC6C7: cmp     edi, ebx
0x4FC6C9: jz      short loc_4FC71F
0x4FC6CB: push    esi
0x4FC6CC: lea     esp, [esp+0]
0x4FC6D0: mov     ecx, edi
0x4FC6D2: call    BSSimpleList_IsEmpty
0x4FC6D7: test    al, al
0x4FC6D9: jnz     short loc_4FC71E
0x4FC6DB: mov     esi, [edi]
0x4FC6DD: cmp     esi, ebx
0x4FC6DF: jz      short loc_4FC6FE
0x4FC6E1: mov     eax, [esi+18h]
0x4FC6E4: push    eax
0x4FC6E5: call    FormHeapFree
0x4FC6EA: push    esi
0x4FC6EB: mov     [esi+18h], ebx
0x4FC6EE: mov     [esi+1Eh], bx
0x4FC6F2: mov     [esi+1Ch], bx
0x4FC6F6: call    FormHeapFree
0x4FC6FB: add     esp, 8
0x4FC6FE: mov     eax, [edi+4]
0x4FC701: cmp     eax, ebx
0x4FC703: jz      short loc_4FC71A
0x4FC705: mov     ecx, [eax+4]
0x4FC708: mov     [edi+4], ecx
0x4FC70B: mov     edx, [eax]
0x4FC70D: push    eax
0x4FC70E: mov     [edi], edx
0x4FC710: call    FormHeapFree
0x4FC715: add     esp, 4
0x4FC718: jmp     short loc_4FC6D0
0x4FC71A: mov     [edi], ebx
0x4FC71C: jmp     short loc_4FC6D0
0x4FC71E: pop     esi
0x4FC71F: pop     edi
0x4FC720: pop     ebx
0x4FC721: retn
