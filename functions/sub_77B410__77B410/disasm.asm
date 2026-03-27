0x77B410: mov     eax, [esp+arg_0]
0x77B414: test    eax, eax
0x77B416: jz      short locret_77B461
0x77B418: cmp     byte ptr [ecx+1000h], 0
0x77B41F: jnz     short loc_77B429
0x77B421: cmp     [ecx+1004h], eax
0x77B427: jz      short locret_77B461
0x77B429: cmp     byte ptr [esp+arg_4], 0
0x77B42E: mov     byte ptr [ecx+1000h], 0
0x77B435: jz      short loc_77B443
0x77B437: mov     edx, [ecx+1004h]
0x77B43D: mov     [ecx+1008h], edx
0x77B443: mov     [ecx+1004h], eax
0x77B449: mov     ecx, [ecx+0FF8h]
0x77B44F: mov     edx, [ecx]
0x77B451: mov     [esp+arg_4], eax
0x77B455: mov     eax, [edx+164h]
0x77B45B: mov     [esp+arg_0], ecx
0x77B45F: jmp     eax
0x77B461: retn    8
