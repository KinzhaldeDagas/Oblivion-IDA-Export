0x7996F0: push    ecx
0x7996F1: push    ebx
0x7996F2: push    ebp
0x7996F3: mov     ebp, [esp+0Ch+arg_4]
0x7996F7: push    esi
0x7996F8: mov     esi, ecx
0x7996FA: push    edi
0x7996FB: mov     edi, [esi+4]
0x7996FE: test    edi, edi
0x799700: jz      short loc_79970E
0x799702: mov     eax, [esi+8]
0x799705: mov     ecx, eax
0x799707: sub     ecx, edi
0x799709: sar     ecx, 2
0x79970C: jnz     short loc_799712
0x79970E: xor     ebx, ebx
0x799710: jmp     short loc_799731
0x799712: cmp     edi, eax
0x799714: jbe     short loc_79971B
0x799716: call    __invalid_parameter_noinfo
0x79971B: test    ebp, ebp
0x79971D: jz      short loc_799723
0x79971F: cmp     ebp, esi
0x799721: jz      short loc_799728
0x799723: call    __invalid_parameter_noinfo
0x799728: mov     ebx, [esp+14h+Src]
0x79972C: sub     ebx, edi
0x79972E: sar     ebx, 2
0x799731: mov     edx, [esp+14h+arg_C]
0x799735: mov     eax, [esp+14h+Src]
0x799739: push    edx; int
0x79973A: push    1; int
0x79973C: push    eax; Src
0x79973D: push    ebp; int
0x79973E: mov     ecx, esi
0x799740: call    sub_799530
0x799745: mov     edi, [esi+4]
0x799748: cmp     edi, [esi+8]
0x79974B: jbe     short loc_799752
0x79974D: call    __invalid_parameter_noinfo
0x799752: mov     [esp+14h+Src], edi
0x799756: lea     edi, [edi+ebx*4]
0x799759: cmp     edi, [esi+8]
0x79975C: ja      short loc_799763
0x79975E: cmp     edi, [esi+4]
0x799761: jnb     short loc_799768
0x799763: call    __invalid_parameter_noinfo
0x799768: mov     eax, [esp+14h+arg_0]
0x79976C: mov     [eax+4], edi
0x79976F: pop     edi
0x799770: mov     [eax], esi
0x799772: pop     esi
0x799773: pop     ebp
0x799774: pop     ebx
0x799775: pop     ecx
0x799776: retn    10h
