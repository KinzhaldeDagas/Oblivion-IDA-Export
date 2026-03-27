0x89F520: test    ecx, ecx
0x89F522: jz      short loc_89F535
0x89F524: mov     eax, [ecx+8]
0x89F527: test    eax, eax
0x89F529: jz      short loc_89F535
0x89F52B: add     eax, 14h
0x89F52E: jz      short loc_89F535
0x89F530: mov     eax, [eax+1Ch]
0x89F533: jmp     short loc_89F537
0x89F535: xor     eax, eax
0x89F537: cmp     [esp+arg_0], 0
0x89F53C: jnz     short loc_89F545
0x89F53E: or      eax, 4000h
0x89F543: jmp     short loc_89F54A
0x89F545: and     eax, 0FFFFBFFFh
0x89F54A: test    ecx, ecx
0x89F54C: jz      short loc_89F55D
0x89F54E: mov     edx, [ecx+8]
0x89F551: test    edx, edx
0x89F553: jz      short loc_89F55D
0x89F555: add     edx, 14h
0x89F558: jz      short loc_89F55D
0x89F55A: mov     [edx+1Ch], eax
0x89F55D: mov     eax, [ecx]
0x89F55F: mov     edx, [eax+80h]
0x89F565: call    edx
0x89F567: retn    4
