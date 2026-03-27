0x4150D0: push    esi
0x4150D1: mov     esi, ecx
0x4150D3: cmp     dword ptr [esi+8], 0
0x4150D7: jnz     short loc_4150E3
0x4150D9: cmp     dword ptr [esi+4], 0
0x4150DD: jnz     short loc_4150E3
0x4150DF: xor     al, al
0x4150E1: pop     esi
0x4150E2: retn
0x4150E3: push    ebx
0x4150E4: xor     bl, bl
0x4150E6: test    esi, esi
0x4150E8: jz      short loc_415124
0x4150EA: push    edi
0x4150EB: jmp     short loc_4150F0
0x4150ED: align 10h
0x4150F0: test    bl, bl
0x4150F2: jnz     short loc_415123
0x4150F4: mov     edi, [esi+4]
0x4150F7: test    edi, edi
0x4150F9: jz      short loc_415117
0x4150FB: mov     ecx, edi
0x4150FD: call    EffectItem_GetArea
0x415102: cmp     eax, 1
0x415105: jle     short loc_415117
0x415107: mov     eax, [edi+1Ch]
0x41510A: mov     ecx, [eax+58h]
0x41510D: shr     ecx, 16h
0x415110: test    cl, 1
0x415113: jnz     short loc_415117
0x415115: mov     bl, 1
0x415117: mov     esi, [esi+8]
0x41511A: test    esi, esi
0x41511C: jz      short loc_415123
0x41511E: add     esi, 0FFFFFFFCh
0x415121: jnz     short loc_4150F0
0x415123: pop     edi
0x415124: mov     al, bl
0x415126: pop     ebx
0x415127: pop     esi
0x415128: retn
