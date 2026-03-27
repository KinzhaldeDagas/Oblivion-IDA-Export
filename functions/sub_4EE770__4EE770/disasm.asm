0x4EE770: push    esi
0x4EE771: mov     esi, ecx
0x4EE773: test    esi, esi
0x4EE775: push    edi
0x4EE776: mov     edi, esi
0x4EE778: jz      short loc_4EE796
0x4EE77A: lea     ebx, [ebx+0]
0x4EE780: mov     eax, [edi]
0x4EE782: test    eax, eax
0x4EE784: jz      short loc_4EE796
0x4EE786: push    eax
0x4EE787: call    FormHeapFree
0x4EE78C: mov     edi, [edi+4]
0x4EE78F: add     esp, 4
0x4EE792: test    edi, edi
0x4EE794: jnz     short loc_4EE780
0x4EE796: cmp     dword ptr [esi+4], 0
0x4EE79A: jz      short loc_4EE7B6
0x4EE79C: lea     esp, [esp+0]
0x4EE7A0: mov     eax, [esi+4]
0x4EE7A3: mov     edi, [eax+4]
0x4EE7A6: push    eax
0x4EE7A7: call    FormHeapFree
0x4EE7AC: add     esp, 4
0x4EE7AF: test    edi, edi
0x4EE7B1: mov     [esi+4], edi
0x4EE7B4: jnz     short loc_4EE7A0
0x4EE7B6: pop     edi
0x4EE7B7: mov     dword ptr [esi], 0
0x4EE7BD: pop     esi
0x4EE7BE: retn
