0x6F2AB0: sub     esp, 8
0x6F2AB3: push    ebx
0x6F2AB4: push    ebp
0x6F2AB5: push    esi
0x6F2AB6: mov     esi, ecx
0x6F2AB8: mov     ecx, [esi+4]
0x6F2ABB: test    ecx, ecx
0x6F2ABD: push    edi
0x6F2ABE: jnz     short loc_6F2AC4
0x6F2AC0: xor     eax, eax
0x6F2AC2: jmp     short loc_6F2ACC
0x6F2AC4: mov     eax, [esi+8]
0x6F2AC7: sub     eax, ecx
0x6F2AC9: sar     eax, 2
0x6F2ACC: mov     ebx, [esp+18h+arg_0]
0x6F2AD0: cmp     eax, ebx
0x6F2AD2: jnb     short loc_6F2B0B
0x6F2AD4: test    ecx, ecx
0x6F2AD6: jnz     short loc_6F2ADC
0x6F2AD8: xor     edi, edi
0x6F2ADA: jmp     short loc_6F2AE4
0x6F2ADC: mov     edi, [esi+8]
0x6F2ADF: sub     edi, ecx
0x6F2AE1: sar     edi, 2
0x6F2AE4: mov     ebp, [esi+8]
0x6F2AE7: cmp     ecx, ebp
0x6F2AE9: jbe     short loc_6F2AF0
0x6F2AEB: call    __invalid_parameter_noinfo
0x6F2AF0: lea     eax, [esp+18h+arg_4]
0x6F2AF4: push    eax; int
0x6F2AF5: sub     ebx, edi
0x6F2AF7: push    ebx; int
0x6F2AF8: push    ebp; Src
0x6F2AF9: push    esi; int
0x6F2AFA: mov     ecx, esi
0x6F2AFC: call    sub_6F1C40
0x6F2B01: pop     edi
0x6F2B02: pop     esi
0x6F2B03: pop     ebp
0x6F2B04: pop     ebx
0x6F2B05: add     esp, 8
0x6F2B08: retn    8
0x6F2B0B: test    ecx, ecx
0x6F2B0D: jz      short loc_6F2B59
0x6F2B0F: mov     ebp, [esi+8]
0x6F2B12: mov     eax, ebp
0x6F2B14: sub     eax, ecx
0x6F2B16: sar     eax, 2
0x6F2B19: cmp     ebx, eax
0x6F2B1B: jnb     short loc_6F2B59
0x6F2B1D: cmp     ecx, ebp
0x6F2B1F: jbe     short loc_6F2B26
0x6F2B21: call    __invalid_parameter_noinfo
0x6F2B26: mov     edi, [esi+4]
0x6F2B29: cmp     edi, [esi+8]
0x6F2B2C: jbe     short loc_6F2B33
0x6F2B2E: call    __invalid_parameter_noinfo
0x6F2B33: mov     [esp+18h+var_4], edi
0x6F2B37: lea     edi, [edi+ebx*4]
0x6F2B3A: cmp     edi, [esi+8]
0x6F2B3D: ja      short loc_6F2B44
0x6F2B3F: cmp     edi, [esi+4]
0x6F2B42: jnb     short loc_6F2B49
0x6F2B44: call    __invalid_parameter_noinfo
0x6F2B49: push    ebp; Src
0x6F2B4A: push    esi; int
0x6F2B4B: push    edi; Dst
0x6F2B4C: push    esi; int
0x6F2B4D: lea     ecx, [esp+28h+var_8]
0x6F2B51: push    ecx; int
0x6F2B52: mov     ecx, esi
0x6F2B54: call    sub_439050
0x6F2B59: pop     edi
0x6F2B5A: pop     esi
0x6F2B5B: pop     ebp
0x6F2B5C: pop     ebx
0x6F2B5D: add     esp, 8
0x6F2B60: retn    8
