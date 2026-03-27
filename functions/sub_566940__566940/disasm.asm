0x566940: push    ebx
0x566941: push    esi
0x566942: mov     ebx, ecx
0x566944: mov     esi, [ebx+24h]
0x566947: push    edi
0x566948: xor     edi, edi
0x56694A: test    esi, esi
0x56694C: jz      loc_566A11
0x566952: mov     ecx, esi
0x566954: call    sub_569740
0x566959: cmp     eax, 2
0x56695C: jz      loc_566A11
0x566962: mov     ecx, esi
0x566964: call    sub_569740
0x566969: cmp     eax, 5; switch 6 cases
0x56696C: ja      def_566972; jumptable 00566972 default case, case 2
0x566972: jmp     ds:jpt_566972[eax*4]; switch jump
0x566979: mov     ecx, esi; jumptable 00566972 case 1
0x56697B: call    sub_569800
0x566980: test    eax, eax
0x566982: jz      def_566972; jumptable 00566972 default case, case 2
0x566988: mov     ecx, esi
0x56698A: call    sub_569800
0x56698F: mov     ecx, eax; this
0x566991: call    TESObjectCELL_GetWorldSpace
0x566996: mov     edi, eax
0x566998: pop     edi
0x566999: pop     esi
0x56699A: pop     ebx
0x56699B: retn    4
0x56699E: mov     ecx, esi; jumptable 00566972 case 0
0x5669A0: call    sub_5697E0
0x5669A5: test    eax, eax
0x5669A7: jz      short def_566972; jumptable 00566972 default case, case 2
0x5669A9: mov     ecx, esi
0x5669AB: call    sub_5697E0
0x5669B0: mov     ecx, eax; this
0x5669B2: call    TESObjectREFR_GetWorldSpace
0x5669B7: mov     edi, eax
0x5669B9: pop     edi
0x5669BA: pop     esi
0x5669BB: pop     ebx
0x5669BC: retn    4
0x5669BF: mov     ecx, [esp+0Ch+arg_0]; jumptable 00566972 case 3
0x5669C3: test    ecx, ecx
0x5669C5: jz      short def_566972; jumptable 00566972 default case, case 2
0x5669C7: call    sub_5E1F40
0x5669CC: mov     edi, eax
0x5669CE: pop     edi
0x5669CF: pop     esi
0x5669D0: pop     ebx
0x5669D1: retn    4
0x5669D4: mov     esi, [esp+0Ch+arg_0]; jumptable 00566972 cases 4,5
0x5669D8: test    esi, esi
0x5669DA: jz      short def_566972; jumptable 00566972 default case, case 2
0x5669DC: mov     ecx, [esi+58h]
0x5669DF: test    ecx, ecx
0x5669E1: jz      short def_566972; jumptable 00566972 default case, case 2
0x5669E3: mov     eax, [ecx]
0x5669E5: mov     edx, [eax+184h]
0x5669EB: call    edx
0x5669ED: cmp     eax, ebx
0x5669EF: jnz     short def_566972; jumptable 00566972 default case, case 2
0x5669F1: mov     ecx, [esi+58h]
0x5669F4: mov     eax, [ecx]
0x5669F6: mov     edx, [eax+3B8h]
0x5669FC: call    edx
0x5669FE: test    eax, eax
0x566A00: jnz     short loc_5669B0
0x566A02: mov     ecx, esi; this
0x566A04: call    TESObjectREFR_GetWorldSpace
0x566A09: mov     edi, eax
0x566A0B: pop     edi
0x566A0C: pop     esi
0x566A0D: pop     ebx
0x566A0E: retn    4
0x566A11: mov     ecx, [esp+0Ch+arg_0]
0x566A15: test    ecx, ecx
0x566A17: jz      short def_566972; jumptable 00566972 default case, case 2
0x566A19: call    sub_4D79B0
0x566A1E: mov     edi, eax
0x566A20: mov     eax, edi; jumptable 00566972 default case, case 2
0x566A22: pop     edi
0x566A23: pop     esi
0x566A24: pop     ebx
0x566A25: retn    4
