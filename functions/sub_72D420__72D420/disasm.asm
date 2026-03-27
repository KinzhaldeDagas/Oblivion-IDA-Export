0x72D420: push    ebx
0x72D421: mov     ebx, [esp+4+arg_8]
0x72D425: push    esi
0x72D426: push    edi
0x72D427: xor     edi, edi
0x72D429: test    ebx, ebx
0x72D42B: mov     esi, ecx
0x72D42D: jbe     short loc_72D46E
0x72D42F: nop
0x72D430: mov     eax, [esp+0Ch+arg_0]
0x72D434: mov     ecx, [esp+0Ch+arg_4]
0x72D438: cmp     [ecx+edi*4], eax
0x72D43B: jnz     short loc_72D467
0x72D43D: mov     eax, [esi+4]
0x72D440: cmp     [esi+8], eax
0x72D443: jnz     short loc_72D45A
0x72D445: test    eax, eax
0x72D447: jbe     short loc_72D44D
0x72D449: add     eax, eax
0x72D44B: jmp     short loc_72D452
0x72D44D: mov     eax, 1
0x72D452: push    eax
0x72D453: mov     ecx, esi
0x72D455: call    sub_72CCC0
0x72D45A: mov     edx, [esi+8]
0x72D45D: mov     eax, [esi]
0x72D45F: mov     [eax+edx*2], di
0x72D463: add     dword ptr [esi+8], 1
0x72D467: add     edi, 1
0x72D46A: cmp     edi, ebx
0x72D46C: jb      short loc_72D430
0x72D46E: pop     edi
0x72D46F: pop     esi
0x72D470: pop     ebx
0x72D471: retn    0Ch
