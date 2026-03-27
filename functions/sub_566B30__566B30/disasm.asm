0x566B30: mov     eax, ds:0B3F9A8h
0x566B35: mov     edx, ds:0B3F9B0h
0x566B3B: sub     esp, 18h
0x566B3E: push    ebx
0x566B3F: push    esi
0x566B40: mov     esi, [esp+20h+arg_0]
0x566B44: mov     ebx, ecx
0x566B46: mov     ecx, ds:0B3F9ACh
0x566B4C: push    edi
0x566B4D: mov     edi, [ebx+24h]
0x566B50: test    edi, edi
0x566B52: mov     [esi], eax
0x566B54: mov     [esi+4], ecx
0x566B57: mov     [esi+8], edx
0x566B5A: jz      loc_566CBA
0x566B60: mov     ecx, edi
0x566B62: call    sub_569740
0x566B67: cmp     eax, 2
0x566B6A: jz      loc_566CBA
0x566B70: mov     ecx, edi
0x566B72: call    sub_569740
0x566B77: cmp     eax, 5; switch 6 cases
0x566B7A: ja      def_566B80; jumptable 00566B80 default case, case 2
0x566B80: jmp     ds:jpt_566B80[eax*4]; switch jump
0x566B87: mov     ecx, edi; jumptable 00566B80 case 1
0x566B89: call    sub_569800
0x566B8E: mov     ebx, eax
0x566B90: test    ebx, ebx
0x566B92: jz      def_566B80; jumptable 00566B80 default case, case 2
0x566B98: mov     ecx, ebx
0x566B9A: call    sub_4CBA50
0x566B9F: test    eax, eax
0x566BA1: jnz     loc_566C57
0x566BA7: mov     ecx, ebx; this
0x566BA9: call    TESObjectCELL_IsInterior
0x566BAE: test    al, al
0x566BB0: jnz     def_566B80; jumptable 00566B80 default case, case 2
0x566BB6: mov     ecx, edi
0x566BB8: call    sub_569800
0x566BBD: mov     ecx, eax; this
0x566BBF: call    TESObjectCELL_GetXCoordinate
0x566BC4: shl     eax, 0Ch
0x566BC7: mov     [esp+24h+arg_4], eax
0x566BCB: fild    [esp+24h+arg_4]
0x566BCF: mov     ecx, edi
0x566BD1: fstp    dword ptr [esi]
0x566BD3: call    sub_569800
0x566BD8: mov     ecx, eax; this
0x566BDA: call    TESObjectCELL_GetYCoordinate
0x566BDF: shl     eax, 0Ch
0x566BE2: mov     [esp+24h+arg_4], eax
0x566BE6: fild    [esp+24h+arg_4]
0x566BEA: pop     edi
0x566BEB: mov     eax, esi
0x566BED: fstp    dword ptr [esi+4]
0x566BF0: fldz
0x566BF2: fstp    dword ptr [esi+8]
0x566BF5: pop     esi
0x566BF6: pop     ebx
0x566BF7: add     esp, 18h
0x566BFA: retn    8
0x566BFD: mov     ecx, edi; jumptable 00566B80 case 0
0x566BFF: call    sub_5697E0
0x566C04: test    eax, eax
0x566C06: jz      def_566B80; jumptable 00566B80 default case, case 2
0x566C0C: mov     ecx, edi
0x566C0E: call    sub_5697E0
0x566C13: mov     ecx, eax
0x566C15: call    sub_4D74D0
0x566C1A: test    al, al
0x566C1C: jz      short loc_566C50
0x566C1E: mov     ecx, edi
0x566C20: call    sub_5697E0
0x566C25: test    eax, eax
0x566C27: jz      short loc_566C50
0x566C29: lea     ecx, [esp+24h+var_18]
0x566C2D: push    ecx
0x566C2E: mov     ecx, eax
0x566C30: call    sub_625290
0x566C35: mov     edx, [eax]
0x566C37: mov     ecx, [eax+4]
0x566C3A: mov     [esi], edx
0x566C3C: mov     edx, [eax+8]
0x566C3F: mov     [esi+4], ecx
0x566C42: pop     edi
0x566C43: mov     [esi+8], edx
0x566C46: mov     eax, esi
0x566C48: pop     esi
0x566C49: pop     ebx
0x566C4A: add     esp, 18h
0x566C4D: retn    8
0x566C50: mov     ecx, edi
0x566C52: call    sub_5697E0
0x566C57: mov     edx, [eax]
0x566C59: mov     ecx, eax
0x566C5B: mov     eax, [edx+174h]
0x566C61: call    eax
0x566C63: jmp     short loc_566CC7
0x566C65: mov     ecx, [esp+24h+arg_4]; jumptable 00566B80 case 3
0x566C69: test    ecx, ecx
0x566C6B: jz      short def_566B80; jumptable 00566B80 default case, case 2
0x566C6D: mov     edx, [ecx]
0x566C6F: mov     edx, [edx+0F4h]
0x566C75: lea     eax, [esp+24h+var_C]
0x566C79: push    eax
0x566C7A: call    edx
0x566C7C: jmp     short loc_566CC7
0x566C7E: mov     edi, [esp+24h+arg_4]; jumptable 00566B80 cases 4,5
0x566C82: test    edi, edi
0x566C84: jz      short def_566B80; jumptable 00566B80 default case, case 2
0x566C86: mov     ecx, [edi+58h]
0x566C89: test    ecx, ecx
0x566C8B: jz      short def_566B80; jumptable 00566B80 default case, case 2
0x566C8D: mov     edx, [ecx]
0x566C8F: mov     eax, [edx+184h]
0x566C95: call    eax
0x566C97: cmp     eax, ebx
0x566C99: jnz     short def_566B80; jumptable 00566B80 default case, case 2
0x566C9B: mov     ecx, [edi+58h]
0x566C9E: mov     edx, [ecx]
0x566CA0: mov     eax, [edx+3B8h]
0x566CA6: call    eax
0x566CA8: test    eax, eax
0x566CAA: jnz     short loc_566C57
0x566CAC: mov     edx, [edi]
0x566CAE: mov     eax, [edx+174h]
0x566CB4: mov     ecx, edi
0x566CB6: call    eax
0x566CB8: jmp     short loc_566CC7
0x566CBA: mov     ecx, [esp+24h+arg_4]
0x566CBE: test    ecx, ecx
0x566CC0: jz      short def_566B80; jumptable 00566B80 default case, case 2
0x566CC2: call    sub_4D79F0
0x566CC7: mov     ecx, [eax]
0x566CC9: mov     edx, [eax+4]
0x566CCC: mov     eax, [eax+8]
0x566CCF: mov     [esi], ecx
0x566CD1: mov     [esi+4], edx
0x566CD4: mov     [esi+8], eax
0x566CD7: pop     edi; jumptable 00566B80 default case, case 2
0x566CD8: mov     eax, esi
0x566CDA: pop     esi
0x566CDB: pop     ebx
0x566CDC: add     esp, 18h
0x566CDF: retn    8
