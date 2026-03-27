0x7123C0: push    ebx
0x7123C1: mov     ebx, [esp+4+arg_0]
0x7123C5: push    esi
0x7123C6: mov     esi, ecx
0x7123C8: mov     eax, [esi]
0x7123CA: mov     edx, [eax+4]
0x7123CD: push    edi
0x7123CE: push    ebx
0x7123CF: call    edx
0x7123D1: mov     ecx, [esi+8]
0x7123D4: mov     edi, [ecx+eax*4]
0x7123D7: test    edi, edi
0x7123D9: jz      short loc_7123F8
0x7123DB: jmp     short loc_7123E0
0x7123DD: align 10h
0x7123E0: mov     eax, [edi+4]
0x7123E3: mov     edx, [esi]
0x7123E5: mov     edx, [edx+8]
0x7123E8: push    eax
0x7123E9: push    ebx
0x7123EA: mov     ecx, esi
0x7123EC: call    edx
0x7123EE: test    al, al
0x7123F0: jnz     short loc_712400
0x7123F2: mov     edi, [edi]
0x7123F4: test    edi, edi
0x7123F6: jnz     short loc_7123E0
0x7123F8: pop     edi
0x7123F9: pop     esi
0x7123FA: xor     al, al
0x7123FC: pop     ebx
0x7123FD: retn    8
0x712400: mov     ax, [edi+8]
0x712404: mov     ecx, [esp+0Ch+arg_4]
0x712408: pop     edi
0x712409: pop     esi
0x71240A: mov     [ecx], ax
0x71240D: mov     al, 1
0x71240F: pop     ebx
0x712410: retn    8
