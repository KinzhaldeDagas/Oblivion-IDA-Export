0x904E60: push    esi
0x904E61: push    edi
0x904E62: mov     edi, ecx
0x904E64: mov     eax, [edi+10h]
0x904E67: xor     esi, esi
0x904E69: test    eax, eax
0x904E6B: jle     short loc_904E9D
0x904E6D: push    ebx
0x904E6E: mov     ebx, [esp+0Ch+arg_8]
0x904E72: push    ebp
0x904E73: mov     ebp, [esp+10h+arg_4]
0x904E77: jmp     short loc_904E80
0x904E79: align 10h
0x904E80: mov     eax, [edi+0Ch]
0x904E83: mov     ecx, [eax+esi*8+4]
0x904E87: mov     eax, [esp+10h+arg_0]
0x904E8B: mov     edx, [ecx]
0x904E8D: push    ebx
0x904E8E: push    ebp
0x904E8F: push    eax
0x904E90: call    dword ptr [edx+24h]
0x904E93: mov     eax, [edi+10h]
0x904E96: inc     esi
0x904E97: cmp     esi, eax
0x904E99: jl      short loc_904E80
0x904E9B: pop     ebp
0x904E9C: pop     ebx
0x904E9D: pop     edi
0x904E9E: pop     esi
0x904E9F: retn    0Ch
