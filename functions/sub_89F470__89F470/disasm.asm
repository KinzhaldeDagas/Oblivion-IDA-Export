0x89F470: push    ebx
0x89F471: push    ebp
0x89F472: push    esi
0x89F473: mov     esi, ecx
0x89F475: test    esi, esi
0x89F477: jz      short loc_89F47E
0x89F479: mov     ebp, [esi+8]
0x89F47C: jmp     short loc_89F480
0x89F47E: xor     ebp, ebp
0x89F480: xor     bl, bl
0x89F482: test    ebp, ebp
0x89F484: jz      short loc_89F4C3
0x89F486: mov     eax, [esi]
0x89F488: push    edi
0x89F489: mov     edi, [esp+10h+arg_0]
0x89F48D: test    edi, edi
0x89F48F: jz      short loc_89F4B5
0x89F491: mov     edx, [eax+58h]
0x89F494: call    edx
0x89F496: cmp     eax, [edi+8]
0x89F499: jz      short loc_89F4BA
0x89F49B: mov     eax, [esi]
0x89F49D: mov     edx, [eax+60h]
0x89F4A0: mov     ecx, esi
0x89F4A2: call    edx
0x89F4A4: push    ebp
0x89F4A5: mov     ecx, edi
0x89F4A7: call    sub_88C210
0x89F4AC: pop     edi
0x89F4AD: pop     esi
0x89F4AE: pop     ebp
0x89F4AF: mov     al, 1
0x89F4B1: pop     ebx
0x89F4B2: retn    4
0x89F4B5: mov     edx, [eax+60h]
0x89F4B8: call    edx
0x89F4BA: pop     edi
0x89F4BB: pop     esi
0x89F4BC: pop     ebp
0x89F4BD: mov     al, bl
0x89F4BF: pop     ebx
0x89F4C0: retn    4
0x89F4C3: pop     esi
0x89F4C4: pop     ebp
0x89F4C5: mov     al, bl
0x89F4C7: pop     ebx
0x89F4C8: retn    4
