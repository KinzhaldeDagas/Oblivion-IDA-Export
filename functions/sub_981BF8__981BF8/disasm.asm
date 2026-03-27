0x981BF8: mov     ecx, [esp+arg_0]
0x981BFC: push    esi
0x981BFD: xor     esi, esi
0x981BFF: cmp     ecx, esi
0x981C01: jnz     short loc_981C20
0x981C03: call    __errno
0x981C08: push    esi
0x981C09: push    esi
0x981C0A: push    esi
0x981C0B: push    esi
0x981C0C: push    esi
0x981C0D: mov     dword ptr [eax], 16h
0x981C13: call    __invalid_parameter
0x981C18: add     esp, 14h
0x981C1B: push    16h
0x981C1D: pop     eax
0x981C1E: pop     esi
0x981C1F: retn
0x981C20: mov     eax, ds:0BA9D94h
0x981C25: cmp     eax, esi
0x981C27: jz      short loc_981C03
0x981C29: mov     [ecx], eax
0x981C2B: xor     eax, eax
0x981C2D: pop     esi
0x981C2E: retn
