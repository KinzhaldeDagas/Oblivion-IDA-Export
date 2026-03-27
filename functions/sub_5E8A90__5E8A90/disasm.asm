0x5E8A90: push    ebx
0x5E8A91: push    esi
0x5E8A92: mov     esi, ecx
0x5E8A94: mov     eax, [esi]
0x5E8A96: mov     edx, [eax+128h]
0x5E8A9C: push    edi
0x5E8A9D: call    edx
0x5E8A9F: mov     edi, eax
0x5E8AA1: mov     eax, [esi]
0x5E8AA3: mov     edx, [eax+170h]
0x5E8AA9: mov     ecx, esi
0x5E8AAB: call    edx
0x5E8AAD: test    edi, edi
0x5E8AAF: mov     ebx, eax
0x5E8AB1: jnz     short loc_5E8AC9
0x5E8AB3: test    ebx, ebx
0x5E8AB5: jz      short loc_5E8AC9
0x5E8AB7: mov     eax, [esi]
0x5E8AB9: mov     edx, [eax+190h]
0x5E8ABF: mov     ecx, esi
0x5E8AC1: call    edx
0x5E8AC3: test    al, al
0x5E8AC5: jz      short loc_5E8AC9
0x5E8AC7: mov     edi, ebx
0x5E8AC9: test    edi, edi
0x5E8ACB: mov     ebx, edi
0x5E8ACD: jz      short loc_5E8B01
0x5E8ACF: cmp     dword ptr [edi+40h], 0
0x5E8AD3: jnz     short loc_5E8B01
0x5E8AD5: cmp     dword ptr [edi+3Ch], 0
0x5E8AD9: jnz     short loc_5E8B01
0x5E8ADB: mov     eax, [esi]
0x5E8ADD: mov     edx, [eax+170h]
0x5E8AE3: mov     ecx, esi
0x5E8AE5: xor     ebx, ebx
0x5E8AE7: call    edx
0x5E8AE9: mov     edi, eax
0x5E8AEB: test    edi, edi
0x5E8AED: jz      short loc_5E8B01
0x5E8AEF: mov     eax, [esi]
0x5E8AF1: mov     edx, [eax+190h]
0x5E8AF7: mov     ecx, esi
0x5E8AF9: call    edx
0x5E8AFB: test    al, al
0x5E8AFD: jz      short loc_5E8B01
0x5E8AFF: mov     ebx, edi
0x5E8B01: pop     edi
0x5E8B02: pop     esi
0x5E8B03: lea     ecx, [ebx+24h]
0x5E8B06: pop     ebx
0x5E8B07: jmp     loc_4675A0
