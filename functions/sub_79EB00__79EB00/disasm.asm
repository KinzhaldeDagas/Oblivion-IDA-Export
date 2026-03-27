0x79EB00: push    ecx
0x79EB01: push    ebx
0x79EB02: push    ebp
0x79EB03: mov     ebp, [esp+0Ch+arg_8]
0x79EB07: push    esi
0x79EB08: push    edi
0x79EB09: mov     edi, ecx
0x79EB0B: mov     esi, [edi+4]
0x79EB0E: test    esi, esi
0x79EB10: jz      short loc_79EB2C
0x79EB12: mov     ebx, [edi+8]
0x79EB15: mov     ecx, ebx
0x79EB17: sub     ecx, esi
0x79EB19: mov     eax, 2E8BA2E9h
0x79EB1E: imul    ecx
0x79EB20: sar     edx, 3
0x79EB23: mov     eax, edx
0x79EB25: shr     eax, 1Fh
0x79EB28: add     eax, edx
0x79EB2A: jnz     short loc_79EB34
0x79EB2C: mov     ebx, [esp+14h+arg_4]
0x79EB30: xor     esi, esi
0x79EB32: jmp     short loc_79EB63
0x79EB34: cmp     esi, ebx
0x79EB36: jbe     short loc_79EB3D
0x79EB38: call    __invalid_parameter_noinfo
0x79EB3D: mov     ebx, [esp+14h+arg_4]
0x79EB41: test    ebx, ebx
0x79EB43: jz      short loc_79EB49
0x79EB45: cmp     ebx, edi
0x79EB47: jz      short loc_79EB4E
0x79EB49: call    __invalid_parameter_noinfo
0x79EB4E: mov     ecx, ebp
0x79EB50: sub     ecx, esi
0x79EB52: mov     eax, 2E8BA2E9h
0x79EB57: imul    ecx
0x79EB59: sar     edx, 3
0x79EB5C: mov     esi, edx
0x79EB5E: shr     esi, 1Fh
0x79EB61: add     esi, edx
0x79EB63: mov     ecx, [esp+14h+arg_C]
0x79EB67: push    ecx
0x79EB68: push    1
0x79EB6A: push    ebp
0x79EB6B: push    ebx
0x79EB6C: mov     ecx, edi
0x79EB6E: call    sub_79E400
