0x8ECEF0: mov     edx, [ecx+124h]
0x8ECEF6: push    esi
0x8ECEF7: xor     eax, eax
0x8ECEF9: test    edx, edx
0x8ECEFB: jle     short loc_8ECF13
0x8ECEFD: mov     ecx, [ecx+120h]
0x8ECF03: mov     esi, [esp+4+arg_4]
0x8ECF07: cmp     [ecx], esi
0x8ECF09: jz      short loc_8ECF1E
0x8ECF0B: inc     eax
0x8ECF0C: add     ecx, 4
0x8ECF0F: cmp     eax, edx
0x8ECF11: jl      short loc_8ECF07
0x8ECF13: mov     eax, [esp+4+arg_0]
0x8ECF17: mov     byte ptr [eax], 0
0x8ECF1A: pop     esi
0x8ECF1B: retn    8
0x8ECF1E: mov     eax, [esp+4+arg_0]
0x8ECF22: mov     byte ptr [eax], 1
0x8ECF25: pop     esi
0x8ECF26: retn    8
