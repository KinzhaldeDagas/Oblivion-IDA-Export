0x785880: push    ecx
0x785881: push    ebx
0x785882: push    ebp
0x785883: mov     ebp, [esp+0Ch+arg_4]
0x785887: push    esi
0x785888: mov     esi, ecx
0x78588A: push    edi
0x78588B: mov     edi, [esi+4]
0x78588E: test    edi, edi
0x785890: jz      short loc_78589E
0x785892: mov     eax, [esi+8]
0x785895: mov     ecx, eax
0x785897: sub     ecx, edi
0x785899: sar     ecx, 2
0x78589C: jnz     short loc_7858A2
0x78589E: xor     ebx, ebx
0x7858A0: jmp     short loc_7858C1
0x7858A2: cmp     edi, eax
0x7858A4: jbe     short loc_7858AB
0x7858A6: call    __invalid_parameter_noinfo
0x7858AB: test    ebp, ebp
0x7858AD: jz      short loc_7858B3
0x7858AF: cmp     ebp, esi
0x7858B1: jz      short loc_7858B8
0x7858B3: call    __invalid_parameter_noinfo
0x7858B8: mov     ebx, [esp+14h+Src]
0x7858BC: sub     ebx, edi
0x7858BE: sar     ebx, 2
0x7858C1: mov     edx, [esp+14h+arg_C]
0x7858C5: mov     eax, [esp+14h+Src]
0x7858C9: push    edx; int
0x7858CA: push    1; int
0x7858CC: push    eax; Src
0x7858CD: push    ebp; int
0x7858CE: mov     ecx, esi
0x7858D0: call    sub_526FA0
0x7858D5: mov     edi, [esi+4]
0x7858D8: cmp     edi, [esi+8]
0x7858DB: jbe     short loc_7858E2
0x7858DD: call    __invalid_parameter_noinfo
0x7858E2: mov     [esp+14h+Src], edi
0x7858E6: lea     edi, [edi+ebx*4]
0x7858E9: cmp     edi, [esi+8]
0x7858EC: ja      short loc_7858F3
0x7858EE: cmp     edi, [esi+4]
0x7858F1: jnb     short loc_7858F8
0x7858F3: call    __invalid_parameter_noinfo
0x7858F8: mov     eax, [esp+14h+arg_0]
0x7858FC: mov     [eax+4], edi
0x7858FF: pop     edi
0x785900: mov     [eax], esi
0x785902: pop     esi
0x785903: pop     ebp
0x785904: pop     ebx
0x785905: pop     ecx
0x785906: retn    10h
