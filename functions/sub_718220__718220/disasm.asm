0x718220: push    esi
0x718221: push    edi
0x718222: mov     edi, [esp+8+arg_0]
0x718226: push    edi
0x718227: mov     esi, ecx
0x718229: call    sub_6D7E00
0x71822E: test    al, al
0x718230: jz      short loc_718293
0x718232: mov     al, [esi+18h]
0x718235: xor     al, [edi+18h]
0x718238: test    al, 1
0x71823A: jnz     short loc_718293
0x71823C: movzx   eax, word ptr [edi+18h]
0x718240: movzx   ecx, word ptr [esi+18h]
0x718244: mov     dl, al
0x718246: xor     dl, cl
0x718248: test    dl, 1Eh
0x71824B: jnz     short loc_718293
0x71824D: mov     edx, eax
0x71824F: xor     edx, ecx
0x718251: test    edx, 1E0h
0x718257: jnz     short loc_718293
0x718259: push    ebx
0x71825A: mov     edx, eax
0x71825C: mov     ebx, ecx
0x71825E: shr     ebx, 9
0x718261: shr     edx, 9
0x718264: xor     dl, bl
0x718266: test    dl, 1
0x718269: pop     ebx
0x71826A: jnz     short loc_718293
0x71826C: mov     edx, eax
0x71826E: xor     edx, ecx
0x718270: test    edx, 1C00h
0x718276: jnz     short loc_718293
0x718278: mov     dl, [esi+1Ah]
0x71827B: cmp     dl, [edi+1Ah]
0x71827E: jnz     short loc_718293
0x718280: shr     eax, 0Dh
0x718283: shr     ecx, 0Dh
0x718286: xor     al, cl
0x718288: test    al, 1
0x71828A: jnz     short loc_718293
0x71828C: pop     edi
0x71828D: mov     al, 1
0x71828F: pop     esi
0x718290: retn    4
0x718293: pop     edi
0x718294: xor     al, al
0x718296: pop     esi
0x718297: retn    4
