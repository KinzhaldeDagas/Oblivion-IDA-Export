0x7C5D90: push    ecx
0x7C5D91: push    ebx
0x7C5D92: push    ebp
0x7C5D93: mov     ebp, [esp+0Ch+arg_0]
0x7C5D97: movzx   eax, word ptr [ebp+0B6h]
0x7C5D9E: xor     ebx, ebx
0x7C5DA0: test    eax, eax
0x7C5DA2: mov     [esp+0Ch+var_4], ecx
0x7C5DA6: jbe     loc_7C5E61
0x7C5DAC: cmp     eax, ebx
0x7C5DAE: push    esi
0x7C5DAF: push    edi
0x7C5DB0: jbe     loc_7C5E4D
0x7C5DB6: mov     eax, [ebp+0B0h]
0x7C5DBC: mov     edi, [eax+ebx*4]
0x7C5DBF: test    edi, edi
0x7C5DC1: jz      loc_7C5E4D
0x7C5DC7: mov     edx, [edi]
0x7C5DC9: mov     eax, [edx+10h]
0x7C5DCC: mov     ecx, edi
0x7C5DCE: call    eax
0x7C5DD0: test    eax, eax
0x7C5DD2: mov     ecx, edi
0x7C5DD4: jz      short loc_7C5E38
0x7C5DD6: push    4
0x7C5DD8: call    NiNode_GetNiPropertyByID
0x7C5DDD: mov     esi, eax
0x7C5DDF: test    esi, esi
0x7C5DE1: jz      short loc_7C5E06
0x7C5DE3: mov     edx, [esi]
0x7C5DE5: mov     eax, [edx+54h]
0x7C5DE8: mov     ecx, esi
0x7C5DEA: call    eax
0x7C5DEC: cmp     eax, 1
0x7C5DEF: jl      short loc_7C5E06
0x7C5DF1: mov     edx, [esi]
0x7C5DF3: mov     eax, [edx+54h]
0x7C5DF6: mov     ecx, esi
0x7C5DF8: call    eax
0x7C5DFA: cmp     eax, 0Ah
0x7C5DFD: jg      short loc_7C5E06
0x7C5DFF: mov     eax, 1
0x7C5E04: jmp     short loc_7C5E08
0x7C5E06: xor     eax, eax
0x7C5E08: neg     eax
0x7C5E0A: sbb     eax, eax
0x7C5E0C: test    esi, eax
0x7C5E0E: jz      short loc_7C5E4D
0x7C5E10: mov     ecx, [esp+14h+var_4]
0x7C5E14: mov     esi, [ecx+0E8h]
0x7C5E1A: test    esi, esi
0x7C5E1C: jz      short loc_7C5E4D
0x7C5E1E: mov     edi, edi
0x7C5E20: mov     ecx, [esi+8]
0x7C5E23: test    ecx, ecx
0x7C5E25: lea     eax, [esi+8]
0x7C5E28: mov     esi, [esi]
0x7C5E2A: jz      short loc_7C5E32
0x7C5E2C: push    edi
0x7C5E2D: call    sub_7D6940
0x7C5E32: test    esi, esi
0x7C5E34: jnz     short loc_7C5E20
0x7C5E36: jmp     short loc_7C5E4D
0x7C5E38: mov     edx, [edi]
0x7C5E3A: mov     eax, [edx+8]
0x7C5E3D: call    eax
0x7C5E3F: test    eax, eax
0x7C5E41: jz      short loc_7C5E4D
0x7C5E43: mov     ecx, [esp+14h+var_4]
0x7C5E47: push    eax
0x7C5E48: call    sub_7C5D90
0x7C5E4D: movzx   eax, word ptr [ebp+0B6h]
0x7C5E54: add     ebx, 1
0x7C5E57: cmp     eax, ebx
0x7C5E59: ja      loc_7C5DB6
0x7C5E5F: pop     edi
0x7C5E60: pop     esi
0x7C5E61: pop     ebp
0x7C5E62: pop     ebx
0x7C5E63: pop     ecx
0x7C5E64: retn    4
