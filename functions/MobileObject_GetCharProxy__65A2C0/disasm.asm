0x65A2C0: push    ecx
0x65A2C1: cmp     dword ptr [ecx+58h], 0
0x65A2C5: jz      short loc_65A309
0x65A2C7: mov     ecx, [ecx+58h]
0x65A2CA: mov     eax, [ecx]
0x65A2CC: mov     eax, [eax+18Ch]
0x65A2D2: push    edi
0x65A2D3: lea     edx, [esp+8+var_4]
0x65A2D7: push    edx
0x65A2D8: call    eax
0x65A2DA: mov     edi, [eax]
0x65A2DC: mov     eax, [esp+8+var_4]
0x65A2E0: test    eax, eax
0x65A2E2: jz      short loc_65A304
0x65A2E4: push    esi
0x65A2E5: mov     esi, eax
0x65A2E7: add     eax, 4
0x65A2EA: push    eax; lpAddend
0x65A2EB: call    dword ptr ds:0A2807Ch
0x65A2F1: test    eax, eax
0x65A2F3: jnz     short loc_65A303
0x65A2F5: test    esi, esi
0x65A2F7: jz      short loc_65A303
0x65A2F9: mov     edx, [esi]
0x65A2FB: mov     eax, [edx]
0x65A2FD: push    1
0x65A2FF: mov     ecx, esi
0x65A301: call    eax
0x65A303: pop     esi
0x65A304: mov     eax, edi
0x65A306: pop     edi
0x65A307: pop     ecx
0x65A308: retn
0x65A309: xor     eax, eax
0x65A30B: pop     ecx
0x65A30C: retn
