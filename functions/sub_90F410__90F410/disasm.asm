0x90F410: push    esi
0x90F411: mov     esi, [ecx+124h]
0x90F417: xor     edx, edx
0x90F419: test    esi, esi
0x90F41B: jle     short loc_90F43C
0x90F41D: mov     eax, [ecx+120h]
0x90F423: mov     ecx, [esp+4+arg_4]
0x90F427: add     eax, 4
0x90F42A: lea     ebx, [ebx+0]
0x90F430: cmp     [eax], ecx
0x90F432: jz      short loc_90F447
0x90F434: inc     edx
0x90F435: add     eax, 8
0x90F438: cmp     edx, esi
0x90F43A: jl      short loc_90F430
0x90F43C: mov     eax, [esp+4+arg_0]
0x90F440: mov     byte ptr [eax], 0
0x90F443: pop     esi
0x90F444: retn    8
0x90F447: mov     eax, [esp+4+arg_0]
0x90F44B: mov     byte ptr [eax], 1
0x90F44E: pop     esi
0x90F44F: retn    8
