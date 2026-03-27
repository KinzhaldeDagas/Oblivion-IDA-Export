0x52FAE0: push    edi
0x52FAE1: mov     edi, ds:0B33A98h
0x52FAE7: add     edi, 7Ch ; '|'
0x52FAEA: mov     al, 1
0x52FAEC: jz      short loc_52FB31
0x52FAEE: push    ebx
0x52FAEF: mov     ebx, [esp+8+arg_0]
0x52FAF3: push    esi
0x52FAF4: mov     ecx, [edi]
0x52FAF6: test    ecx, ecx
0x52FAF8: jz      short loc_52FB2F
0x52FAFA: test    al, al
0x52FAFC: jz      short loc_52FB2F
0x52FAFE: test    ebx, ebx
0x52FB00: jz      short loc_52FB23
0x52FB02: lea     edx, [ecx+28h]
0x52FB05: test    edx, edx
0x52FB07: jz      short loc_52FB28
0x52FB09: lea     esp, [esp+0]
0x52FB10: mov     esi, [edx]
0x52FB12: test    esi, esi
0x52FB14: jz      short loc_52FB28
0x52FB16: cmp     [esi], ebx
0x52FB18: mov     edx, [edx+4]
0x52FB1B: jz      short loc_52FB23
0x52FB1D: test    edx, edx
0x52FB1F: jnz     short loc_52FB10
0x52FB21: jmp     short loc_52FB28
0x52FB23: call    sub_52F330
0x52FB28: mov     edi, [edi+4]
0x52FB2B: test    edi, edi
0x52FB2D: jnz     short loc_52FAF4
0x52FB2F: pop     esi
0x52FB30: pop     ebx
0x52FB31: pop     edi
0x52FB32: retn
