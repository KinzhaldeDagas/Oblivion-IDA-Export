0x9031F0: push    esi
0x9031F1: push    edi
0x9031F2: mov     edi, ecx
0x9031F4: mov     eax, [edi+10h]
0x9031F7: xor     esi, esi
0x9031F9: test    eax, eax
0x9031FB: jle     short loc_903217
0x9031FD: push    ebx
0x9031FE: mov     ebx, [esp+0Ch+arg_0]
0x903202: mov     eax, [edi+0Ch]
0x903205: mov     ecx, [eax+esi*4]
0x903208: mov     edx, [ecx]
0x90320A: push    ebx
0x90320B: call    dword ptr [edx+20h]
0x90320E: mov     eax, [edi+10h]
0x903211: inc     esi
0x903212: cmp     esi, eax
0x903214: jl      short loc_903202
0x903216: pop     ebx
0x903217: pop     edi
0x903218: pop     esi
0x903219: retn    4
