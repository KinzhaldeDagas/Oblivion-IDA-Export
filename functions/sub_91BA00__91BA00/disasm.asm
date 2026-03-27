0x91BA00: mov     edx, [ecx+14h]
0x91BA03: add     ecx, 0FFFFFFE0h
0x91BA06: xor     eax, eax
0x91BA08: test    edx, edx
0x91BA0A: jle     short locret_91BA27
0x91BA0C: push    esi
0x91BA0D: mov     esi, [ecx+30h]
0x91BA10: push    edi
0x91BA11: mov     edi, [esp+8+arg_0]
0x91BA15: push    ebx
0x91BA16: mov     ebx, [esi]
0x91BA18: cmp     [ebx], edi
0x91BA1A: jz      short loc_91BA2A
0x91BA1C: inc     eax
0x91BA1D: add     esi, 4
0x91BA20: cmp     eax, edx
0x91BA22: jl      short loc_91BA16
0x91BA24: pop     ebx
0x91BA25: pop     edi
0x91BA26: pop     esi
0x91BA27: retn    4
0x91BA2A: test    eax, eax
0x91BA2C: jl      short loc_91BA24
0x91BA2E: pop     ebx
0x91BA2F: pop     edi
0x91BA30: pop     esi
0x91BA31: mov     [esp+arg_0], eax
0x91BA35: jmp     sub_91B8C0
