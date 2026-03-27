0x566A40: push    ebx
0x566A41: push    esi
0x566A42: mov     ebx, ecx
0x566A44: mov     esi, [ebx+24h]
0x566A47: push    edi
0x566A48: xor     edi, edi
0x566A4A: test    esi, esi
0x566A4C: jz      loc_566AFB
0x566A52: mov     ecx, esi
0x566A54: call    sub_569740
0x566A59: cmp     eax, 2
0x566A5C: jz      loc_566AFB
0x566A62: mov     ecx, esi
0x566A64: call    sub_569740
0x566A69: cmp     eax, 5; switch 6 cases
0x566A6C: ja      def_566A72; jumptable 00566A72 default case, case 2
0x566A72: jmp     ds:jpt_566A72[eax*4]; switch jump
0x566A79: mov     ecx, esi; jumptable 00566A72 case 1
0x566A7B: call    sub_569800
0x566A80: mov     edi, eax
0x566A82: pop     edi
0x566A83: pop     esi
0x566A84: pop     ebx
0x566A85: retn    4
0x566A88: mov     ecx, esi; jumptable 00566A72 case 0
0x566A8A: call    sub_5697E0
0x566A8F: test    eax, eax
0x566A91: jz      short def_566A72; jumptable 00566A72 default case, case 2
0x566A93: mov     ecx, esi
0x566A95: call    sub_5697E0
0x566A9A: mov     ecx, eax; this
0x566A9C: call    TESObjectREFR_GetParentCell
0x566AA1: mov     edi, eax
0x566AA3: pop     edi
0x566AA4: pop     esi
0x566AA5: pop     ebx
0x566AA6: retn    4
0x566AA9: mov     ecx, [esp+0Ch+arg_0]; jumptable 00566A72 case 3
0x566AAD: test    ecx, ecx
0x566AAF: jz      short def_566A72; jumptable 00566A72 default case, case 2
0x566AB1: call    sub_5E1F60
0x566AB6: mov     edi, eax
0x566AB8: pop     edi
0x566AB9: pop     esi
0x566ABA: pop     ebx
0x566ABB: retn    4
0x566ABE: mov     esi, [esp+0Ch+arg_0]; jumptable 00566A72 cases 4,5
0x566AC2: test    esi, esi
0x566AC4: jz      short def_566A72; jumptable 00566A72 default case, case 2
0x566AC6: mov     ecx, [esi+58h]
0x566AC9: test    ecx, ecx
0x566ACB: jz      short def_566A72; jumptable 00566A72 default case, case 2
0x566ACD: mov     eax, [ecx]
0x566ACF: mov     edx, [eax+184h]
0x566AD5: call    edx
0x566AD7: cmp     eax, ebx
0x566AD9: jnz     short def_566A72; jumptable 00566A72 default case, case 2
0x566ADB: mov     ecx, [esi+58h]
0x566ADE: mov     eax, [ecx]
0x566AE0: mov     edx, [eax+3B8h]
0x566AE6: call    edx
0x566AE8: test    eax, eax
0x566AEA: jnz     short loc_566A9A
0x566AEC: mov     ecx, esi; this
0x566AEE: call    TESObjectREFR_GetParentCell
0x566AF3: mov     edi, eax
0x566AF5: pop     edi
0x566AF6: pop     esi
0x566AF7: pop     ebx
0x566AF8: retn    4
0x566AFB: mov     ecx, [esp+0Ch+arg_0]
0x566AFF: test    ecx, ecx
0x566B01: jz      short def_566A72; jumptable 00566A72 default case, case 2
0x566B03: call    sub_4D79D0
0x566B08: mov     edi, eax
0x566B0A: mov     eax, edi; jumptable 00566A72 default case, case 2
0x566B0C: pop     edi
0x566B0D: pop     esi
0x566B0E: pop     ebx
0x566B0F: retn    4
