0x64AE20: push    esi
0x64AE21: mov     esi, ecx
0x64AE23: cmp     dword ptr [esi+2Ch], 0
0x64AE27: push    edi
0x64AE28: mov     edi, [esp+8+arg_0]
0x64AE2C: jnz     short loc_64AE39
0x64AE2E: mov     eax, [esi]
0x64AE30: mov     edx, [eax+558h]
0x64AE36: push    edi
0x64AE37: call    edx
0x64AE39: mov     eax, [esi]
0x64AE3B: mov     edx, [eax+188h]
0x64AE41: push    1
0x64AE43: push    edi
0x64AE44: mov     ecx, esi
0x64AE46: call    edx
0x64AE48: pop     edi
0x64AE49: pop     esi
0x64AE4A: retn    4
