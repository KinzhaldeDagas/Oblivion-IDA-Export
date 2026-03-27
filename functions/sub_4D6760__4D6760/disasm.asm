0x4D6760: push    ebx
0x4D6761: mov     ebx, [esp+4+arg_0]
0x4D6765: push    esi
0x4D6766: mov     esi, ecx
0x4D6768: mov     eax, [esi]
0x4D676A: mov     edx, [eax+4]
0x4D676D: push    edi
0x4D676E: push    ebx
0x4D676F: call    edx
0x4D6771: mov     ecx, [esi+8]
0x4D6774: mov     edi, [ecx+eax*4]
0x4D6777: test    edi, edi
0x4D6779: jz      short loc_4D6798
0x4D677B: jmp     short loc_4D6780
0x4D677D: align 10h
0x4D6780: mov     eax, [edi+4]
0x4D6783: mov     edx, [esi]
0x4D6785: mov     edx, [edx+8]
0x4D6788: push    eax
0x4D6789: push    ebx
0x4D678A: mov     ecx, esi
0x4D678C: call    edx
0x4D678E: test    al, al
0x4D6790: jnz     short loc_4D67A0
0x4D6792: mov     edi, [edi]
0x4D6794: test    edi, edi
0x4D6796: jnz     short loc_4D6780
0x4D6798: pop     edi
0x4D6799: pop     esi
0x4D679A: xor     al, al
0x4D679C: pop     ebx
0x4D679D: retn    8
0x4D67A0: mov     al, [edi+8]
0x4D67A3: mov     ecx, [esp+0Ch+arg_4]
0x4D67A7: pop     edi
0x4D67A8: pop     esi
0x4D67A9: mov     [ecx], al
0x4D67AB: mov     al, 1
0x4D67AD: pop     ebx
0x4D67AE: retn    8
