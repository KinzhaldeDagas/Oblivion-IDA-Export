0x7A0A50: push    ecx
0x7A0A51: push    ebx
0x7A0A52: push    ebp
0x7A0A53: mov     ebp, [esp+0Ch+arg_8]
0x7A0A57: push    esi
0x7A0A58: mov     esi, ecx
0x7A0A5A: push    edi
0x7A0A5B: mov     edi, [esi+4]
0x7A0A5E: test    edi, edi
0x7A0A60: jz      short loc_7A0A7C
0x7A0A62: mov     ebx, [esi+8]
0x7A0A65: mov     ecx, ebx
0x7A0A67: sub     ecx, edi
0x7A0A69: mov     eax, 2AAAAAABh
0x7A0A6E: imul    ecx
0x7A0A70: sar     edx, 3
0x7A0A73: mov     eax, edx
0x7A0A75: shr     eax, 1Fh
0x7A0A78: add     eax, edx
0x7A0A7A: jnz     short loc_7A0A84
0x7A0A7C: mov     ebx, [esp+14h+arg_4]
0x7A0A80: xor     edi, edi
0x7A0A82: jmp     short loc_7A0AB3
0x7A0A84: cmp     edi, ebx
0x7A0A86: jbe     short loc_7A0A8D
0x7A0A88: call    __invalid_parameter_noinfo
0x7A0A8D: mov     ebx, [esp+14h+arg_4]
0x7A0A91: test    ebx, ebx
0x7A0A93: jz      short loc_7A0A99
0x7A0A95: cmp     ebx, esi
0x7A0A97: jz      short loc_7A0A9E
0x7A0A99: call    __invalid_parameter_noinfo
0x7A0A9E: mov     ecx, ebp
0x7A0AA0: sub     ecx, edi
0x7A0AA2: mov     eax, 2AAAAAABh
0x7A0AA7: imul    ecx
0x7A0AA9: sar     edx, 3
0x7A0AAC: mov     edi, edx
0x7A0AAE: shr     edi, 1Fh
0x7A0AB1: add     edi, edx
0x7A0AB3: mov     ecx, [esp+14h+arg_C]
0x7A0AB7: push    ecx
0x7A0AB8: push    1
0x7A0ABA: push    ebp
0x7A0ABB: push    ebx
0x7A0ABC: mov     ecx, esi
0x7A0ABE: call    sub_79F700
