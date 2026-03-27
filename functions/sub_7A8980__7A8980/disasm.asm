0x7A8980: sub     esp, 10h
0x7A8983: push    ebx
0x7A8984: mov     ebx, [esp+14h+arg_0]
0x7A8988: cmp     ebx, 0FFFFFFFFh
0x7A898B: mov     edx, ecx
0x7A898D: mov     [esp+14h+var_C], edx
0x7A8991: jbe     short loc_7A8998
0x7A8993: call    sub_7A8900
0x7A8998: mov     ecx, [edx+8]
0x7A899B: push    esi
0x7A899C: push    edi
0x7A899D: lea     esi, [edx+4]
0x7A89A0: lea     edi, [ebx+1Fh]
0x7A89A3: shr     edi, 5
0x7A89A6: test    ecx, ecx
0x7A89A8: jz      short loc_7A89FF
0x7A89AA: mov     eax, [esi+8]
0x7A89AD: sub     eax, ecx
0x7A89AF: sar     eax, 2
0x7A89B2: cmp     edi, eax
0x7A89B4: jnb     short loc_7A89FF
0x7A89B6: push    ebp
0x7A89B7: mov     ebp, [esi+8]
0x7A89BA: cmp     ecx, ebp
0x7A89BC: jbe     short loc_7A89C3
0x7A89BE: call    __invalid_parameter_noinfo
0x7A89C3: mov     ebx, [esi+4]
0x7A89C6: cmp     ebx, [esi+8]
0x7A89C9: jbe     short loc_7A89D0
0x7A89CB: call    __invalid_parameter_noinfo
0x7A89D0: mov     [esp+20h+var_4], ebx
0x7A89D4: lea     ebx, [ebx+edi*4]
0x7A89D7: cmp     ebx, [esi+8]
0x7A89DA: ja      short loc_7A89E1
0x7A89DC: cmp     ebx, [esi+4]
0x7A89DF: jnb     short loc_7A89E6
0x7A89E1: call    __invalid_parameter_noinfo
0x7A89E6: push    ebp; Src
0x7A89E7: push    esi; int
0x7A89E8: push    ebx; Dst
0x7A89E9: push    esi; int
0x7A89EA: lea     eax, [esp+30h+var_8]
0x7A89EE: push    eax; int
0x7A89EF: mov     ecx, esi
0x7A89F1: call    sub_439050
0x7A89F6: mov     edx, [esp+20h+var_C]
0x7A89FA: mov     ebx, [esp+20h+arg_0]
0x7A89FE: pop     ebp
0x7A89FF: mov     [edx], ebx
0x7A8A01: and     ebx, 1Fh
0x7A8A04: jbe     short loc_7A8A35
0x7A8A06: mov     ecx, [esi+4]
0x7A8A09: add     edi, 0FFFFFFFFh
0x7A8A0C: test    ecx, ecx
0x7A8A0E: jz      short loc_7A8A1C
0x7A8A10: mov     eax, [esi+8]
0x7A8A13: sub     eax, ecx
0x7A8A15: sar     eax, 2
0x7A8A18: cmp     edi, eax
0x7A8A1A: jb      short loc_7A8A21
0x7A8A1C: call    __invalid_parameter_noinfo
0x7A8A21: mov     ecx, [esi+4]
0x7A8A24: lea     eax, [ecx+edi*4]
0x7A8A27: mov     edx, 1
0x7A8A2C: mov     ecx, ebx
0x7A8A2E: shl     edx, cl
0x7A8A30: sub     edx, 1
0x7A8A33: and     [eax], edx
0x7A8A35: pop     edi
0x7A8A36: pop     esi
0x7A8A37: pop     ebx
0x7A8A38: add     esp, 10h
0x7A8A3B: retn    4
