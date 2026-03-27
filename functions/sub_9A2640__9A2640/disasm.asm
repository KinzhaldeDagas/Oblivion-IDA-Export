0x9A2640: push    ebx
0x9A2641: push    esi
0x9A2642: xor     esi, esi
0x9A2644: cmp     dword_B3245C, esi
0x9A264A: push    edi
0x9A264B: jbe     short loc_9A2675
0x9A264D: mov     ebx, [esp+0Ch+Str1]
0x9A2651: mov     edi, offset unk_B32460
0x9A2656: mov     eax, [edi+4]
0x9A2659: push    eax; Str2
0x9A265A: push    ebx; Str1
0x9A265B: call    __strcmp
0x9A2660: add     esp, 8
0x9A2663: test    eax, eax
0x9A2665: jz      short loc_9A267B
0x9A2667: add     esi, 1
0x9A266A: add     edi, 8
0x9A266D: cmp     esi, dword_B3245C
0x9A2673: jb      short loc_9A2656
0x9A2675: pop     edi
0x9A2676: pop     esi
0x9A2677: xor     eax, eax
0x9A2679: pop     ebx
0x9A267A: retn
0x9A267B: mov     eax, [edi]
0x9A267D: pop     edi
0x9A267E: pop     esi
0x9A267F: pop     ebx
0x9A2680: retn
