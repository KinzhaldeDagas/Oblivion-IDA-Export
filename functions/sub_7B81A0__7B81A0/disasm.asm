0x7B81A0: push    esi
0x7B81A1: push    edi
0x7B81A2: mov     edi, offset dword_B42EC0
0x7B81A7: mov     eax, [edi]
0x7B81A9: test    eax, eax
0x7B81AB: jz      short loc_7B81E5
0x7B81AD: mov     esi, [eax+4]
0x7B81B0: test    esi, esi
0x7B81B2: jz      short loc_7B81E5
0x7B81B4: mov     eax, [esi]
0x7B81B6: mov     edx, [eax+4]
0x7B81B9: mov     ecx, esi
0x7B81BB: call    edx
0x7B81BD: test    eax, eax
0x7B81BF: jz      short loc_7B81CF
0x7B81C1: cmp     eax, offset ImageSpaceShaderRTTI???
0x7B81C6: jz      short loc_7B81F3
0x7B81C8: mov     eax, [eax+4]
0x7B81CB: test    eax, eax
0x7B81CD: jnz     short loc_7B81C1
0x7B81CF: xor     al, al
0x7B81D1: neg     al
0x7B81D3: sbb     eax, eax
0x7B81D5: and     eax, esi
0x7B81D7: jz      short loc_7B81E5
0x7B81D9: mov     edx, [eax]
0x7B81DB: mov     ecx, eax
0x7B81DD: mov     eax, [edx+8Ch]
0x7B81E3: call    eax
0x7B81E5: add     edi, 4
0x7B81E8: cmp     edi, offset byte_B42F30
0x7B81EE: jl      short loc_7B81A7
0x7B81F0: pop     edi
0x7B81F1: pop     esi
0x7B81F2: retn
0x7B81F3: mov     al, 1
0x7B81F5: jmp     short loc_7B81D1
