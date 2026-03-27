0x4FC730: push    ebx
0x4FC731: xor     ebx, ebx
0x4FC733: cmp     ds:0B361B0h, ecx
0x4FC739: push    edi
0x4FC73A: jnz     short loc_4FC742
0x4FC73C: mov     ds:0B361B0h, ebx
0x4FC742: lea     edi, [ecx+40h]
0x4FC745: cmp     edi, ebx
0x4FC747: jz      short loc_4FC79D
0x4FC749: push    esi
0x4FC74A: lea     ebx, [ebx+0]
0x4FC750: mov     ecx, edi
0x4FC752: call    BSSimpleList_IsEmpty
0x4FC757: test    al, al
0x4FC759: jnz     short loc_4FC79C
0x4FC75B: mov     esi, [edi]
0x4FC75D: cmp     esi, ebx
0x4FC75F: jz      short loc_4FC77C
0x4FC761: mov     eax, [esi]
0x4FC763: push    eax
0x4FC764: call    FormHeapFree
0x4FC769: push    esi
0x4FC76A: mov     [esi], ebx
0x4FC76C: mov     [esi+6], bx
0x4FC770: mov     [esi+4], bx
0x4FC774: call    FormHeapFree
0x4FC779: add     esp, 8
0x4FC77C: mov     eax, [edi+4]
0x4FC77F: cmp     eax, ebx
0x4FC781: jz      short loc_4FC798
0x4FC783: mov     ecx, [eax+4]
0x4FC786: mov     [edi+4], ecx
0x4FC789: mov     edx, [eax]
0x4FC78B: push    eax
0x4FC78C: mov     [edi], edx
0x4FC78E: call    FormHeapFree
0x4FC793: add     esp, 4
0x4FC796: jmp     short loc_4FC750
0x4FC798: mov     [edi], ebx
0x4FC79A: jmp     short loc_4FC750
0x4FC79C: pop     esi
0x4FC79D: pop     edi
0x4FC79E: pop     ebx
0x4FC79F: retn
