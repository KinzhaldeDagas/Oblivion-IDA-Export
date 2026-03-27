0x795990: sub     esp, 8
0x795993: push    ebx
0x795994: push    ebp
0x795995: push    esi
0x795996: mov     esi, ecx
0x795998: mov     ecx, [esi+4]
0x79599B: test    ecx, ecx
0x79599D: push    edi
0x79599E: jnz     short loc_7959A4
0x7959A0: xor     eax, eax
0x7959A2: jmp     short loc_7959AB
0x7959A4: mov     eax, [esi+8]
0x7959A7: sub     eax, ecx
0x7959A9: sar     eax, 1
0x7959AB: mov     ebx, [esp+18h+arg_0]
0x7959AF: cmp     eax, ebx
0x7959B1: jnb     short loc_7959E9
0x7959B3: test    ecx, ecx
0x7959B5: jnz     short loc_7959BB
0x7959B7: xor     edi, edi
0x7959B9: jmp     short loc_7959C2
0x7959BB: mov     edi, [esi+8]
0x7959BE: sub     edi, ecx
0x7959C0: sar     edi, 1
0x7959C2: mov     ebp, [esi+8]
0x7959C5: cmp     ecx, ebp
0x7959C7: jbe     short loc_7959CE
0x7959C9: call    __invalid_parameter_noinfo
0x7959CE: lea     eax, [esp+18h+arg_4]
0x7959D2: push    eax; int
0x7959D3: sub     ebx, edi
0x7959D5: push    ebx; int
0x7959D6: push    ebp; Src
0x7959D7: push    esi; int
0x7959D8: mov     ecx, esi
0x7959DA: call    sub_7952B0
0x7959DF: pop     edi
0x7959E0: pop     esi
0x7959E1: pop     ebp
0x7959E2: pop     ebx
0x7959E3: add     esp, 8
0x7959E6: retn    8
0x7959E9: test    ecx, ecx
0x7959EB: jz      short loc_795A36
0x7959ED: mov     ebp, [esi+8]
0x7959F0: mov     eax, ebp
0x7959F2: sub     eax, ecx
0x7959F4: sar     eax, 1
0x7959F6: cmp     ebx, eax
0x7959F8: jnb     short loc_795A36
0x7959FA: cmp     ecx, ebp
0x7959FC: jbe     short loc_795A03
0x7959FE: call    __invalid_parameter_noinfo
0x795A03: mov     edi, [esi+4]
0x795A06: cmp     edi, [esi+8]
0x795A09: jbe     short loc_795A10
0x795A0B: call    __invalid_parameter_noinfo
0x795A10: mov     [esp+18h+var_4], edi
0x795A14: lea     edi, [edi+ebx*2]
0x795A17: cmp     edi, [esi+8]
0x795A1A: ja      short loc_795A21
0x795A1C: cmp     edi, [esi+4]
0x795A1F: jnb     short loc_795A26
0x795A21: call    __invalid_parameter_noinfo
0x795A26: push    ebp; Src
0x795A27: push    esi; int
0x795A28: push    edi; Dst
0x795A29: push    esi; int
0x795A2A: lea     ecx, [esp+28h+var_8]
0x795A2E: push    ecx; int
0x795A2F: mov     ecx, esi
0x795A31: call    sub_794EE0
0x795A36: pop     edi
0x795A37: pop     esi
0x795A38: pop     ebp
0x795A39: pop     ebx
0x795A3A: add     esp, 8
0x795A3D: retn    8
