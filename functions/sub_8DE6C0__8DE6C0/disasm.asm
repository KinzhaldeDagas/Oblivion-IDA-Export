0x8DE6C0: push    esi
0x8DE6C1: mov     esi, [ecx+54h]
0x8DE6C4: xor     eax, eax
0x8DE6C6: test    esi, esi
0x8DE6C8: push    edi
0x8DE6C9: jle     short loc_8DE6DE
0x8DE6CB: mov     edx, [ecx+50h]
0x8DE6CE: mov     edi, [esp+8+arg_0]
0x8DE6D2: cmp     [edx], edi
0x8DE6D4: jz      short loc_8DE6E1
0x8DE6D6: inc     eax
0x8DE6D7: add     edx, 4
0x8DE6DA: cmp     eax, esi
0x8DE6DC: jl      short loc_8DE6D2
0x8DE6DE: or      eax, 0FFFFFFFFh
0x8DE6E1: mov     edi, [ecx+54h]
0x8DE6E4: dec     edi
0x8DE6E5: mov     edx, edi
0x8DE6E7: cmp     eax, edx
0x8DE6E9: mov     [ecx+54h], edi
0x8DE6EC: jge     short loc_8DE704
0x8DE6EE: mov     edi, edi
0x8DE6F0: mov     edx, [ecx+50h]
0x8DE6F3: mov     esi, [edx+eax*4+4]
0x8DE6F7: lea     edx, [edx+eax*4]
0x8DE6FA: mov     [edx], esi
0x8DE6FC: mov     edx, [ecx+54h]
0x8DE6FF: inc     eax
0x8DE700: cmp     eax, edx
0x8DE702: jl      short loc_8DE6F0
0x8DE704: pop     edi
0x8DE705: pop     esi
0x8DE706: retn    4
