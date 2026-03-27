0x534D30: sub     esp, 8
0x534D33: push    esi
0x534D34: push    edi
0x534D35: mov     edi, [esp+10h+arg_0]
0x534D39: xor     esi, esi
0x534D3B: cmp     [edi+4], esi
0x534D3E: jle     short loc_534D63
0x534D40: mov     eax, [edi]
0x534D42: mov     edx, [eax+esi*8]
0x534D45: mov     eax, [eax+esi*8+4]
0x534D49: mov     ecx, ds:0BA7D98h
0x534D4F: mov     [esp+10h+var_4], eax
0x534D53: mov     eax, [ecx]
0x534D55: push    edx
0x534D56: mov     edx, [eax+4]
0x534D59: call    edx
0x534D5B: add     esi, 1
0x534D5E: cmp     esi, [edi+4]
0x534D61: jl      short loc_534D40
0x534D63: pop     edi
0x534D64: pop     esi
0x534D65: add     esp, 8
0x534D68: retn    4
