0x9A9CE1: push    ebx; Locale
0x9A9CE2: xor     ebx, ebx
0x9A9CE4: cmp     dword_BA9E10, ebx
0x9A9CEA: jnz     short loc_9A9D2E
0x9A9CEC: mov     eax, [esp+4+String]
0x9A9CF0: cmp     eax, ebx
0x9A9CF2: jnz     short loc_9A9D10
0x9A9CF4: call    __errno
0x9A9CF9: push    ebx
0x9A9CFA: push    ebx
0x9A9CFB: push    ebx
0x9A9CFC: push    ebx
0x9A9CFD: push    ebx
0x9A9CFE: mov     dword ptr [eax], 16h
0x9A9D04: call    __invalid_parameter
0x9A9D09: add     esp, 14h
0x9A9D0C: xor     eax, eax
0x9A9D0E: pop     ebx
0x9A9D0F: retn
0x9A9D10: cmp     [eax], bl
0x9A9D12: mov     edx, eax
0x9A9D14: jz      short loc_9A9D41
0x9A9D16: mov     cl, [edx]
0x9A9D18: cmp     cl, 41h ; 'A'
0x9A9D1B: jl      short loc_9A9D27
0x9A9D1D: cmp     cl, 5Ah ; 'Z'
0x9A9D20: jg      short loc_9A9D27
0x9A9D22: add     cl, 20h ; ' '
0x9A9D25: mov     [edx], cl
0x9A9D27: inc     edx
0x9A9D28: cmp     [edx], bl
0x9A9D2A: jnz     short loc_9A9D16
0x9A9D2C: pop     ebx
0x9A9D2D: retn
0x9A9D2E: push    ebx; Locale
0x9A9D2F: push    0FFFFFFFFh; Size
0x9A9D31: push    [esp+0Ch+String]; Str
0x9A9D35: call    __strlwr_s_l
0x9A9D3A: mov     eax, [esp+10h+String]
0x9A9D3E: add     esp, 0Ch
0x9A9D41: pop     ebx
0x9A9D42: retn
