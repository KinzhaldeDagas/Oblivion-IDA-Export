0x708BE0: push    ebx
0x708BE1: push    edi
0x708BE2: mov     edi, ecx
0x708BE4: xor     ebx, ebx
0x708BE6: cmp     [edi+0D8h], ebx
0x708BEC: jz      short loc_708C20
0x708BEE: push    esi
0x708BEF: lea     esi, [edi+0CCh]
0x708BF5: mov     ecx, [esi+4]
0x708BF8: mov     eax, [ecx]
0x708BFA: cmp     eax, ebx
0x708BFC: mov     [esi+4], eax
0x708BFF: jz      short loc_708C06
0x708C01: mov     [eax+4], ebx
0x708C04: jmp     short loc_708C09
0x708C06: mov     [esi+8], ebx
0x708C09: mov     eax, [esi]
0x708C0B: mov     edx, [eax+8]
0x708C0E: push    ecx
0x708C0F: mov     ecx, esi
0x708C11: call    edx
0x708C13: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x708C17: cmp     [edi+0D8h], ebx
0x708C1D: jnz     short loc_708BF5
0x708C1F: pop     esi
0x708C20: pop     edi
0x708C21: pop     ebx
0x708C22: retn
