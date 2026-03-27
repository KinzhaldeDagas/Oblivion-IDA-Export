0x447CA0: push    ebx
0x447CA1: push    esi
0x447CA2: push    edi
0x447CA3: mov     edi, ecx
0x447CA5: mov     ebx, [edi+0CCh]
0x447CAB: xor     esi, esi
0x447CAD: test    ebx, ebx
0x447CAF: jle     short loc_447CCE
0x447CB1: mov     eax, [edi+0C4h]
0x447CB7: mov     ecx, [eax+esi*4]
0x447CBA: test    ecx, ecx
0x447CBC: jz      short loc_447CC7
0x447CBE: push    1
0x447CC0: push    1
0x447CC2: call    sub_4CB8C0
0x447CC7: add     esi, 1
0x447CCA: cmp     esi, ebx
0x447CCC: jl      short loc_447CB1
0x447CCE: lea     esi, [edi+0Ch]
0x447CD1: test    esi, esi
0x447CD3: jz      short loc_447CF6
0x447CD5: mov     ecx, [esi]
0x447CD7: test    ecx, ecx
0x447CD9: jz      short loc_447CEF
0x447CDB: call    sub_4EF1E0
0x447CE0: test    eax, eax
0x447CE2: jz      short loc_447CEF
0x447CE4: push    1
0x447CE6: push    1
0x447CE8: mov     ecx, eax
0x447CEA: call    sub_4CB8C0
0x447CEF: mov     esi, [esi+4]
0x447CF2: test    esi, esi
0x447CF4: jnz     short loc_447CD5
0x447CF6: pop     edi
0x447CF7: pop     esi
0x447CF8: pop     ebx
0x447CF9: retn
