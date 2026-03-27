0x7F6BF0: push    0FFFFFFFFh
0x7F6BF2: push    offset SEH_7F6BF0
0x7F6BF7: mov     eax, large fs:0
0x7F6BFD: push    eax
0x7F6BFE: sub     esp, 2Ch
0x7F6C01: push    ebx
0x7F6C02: push    ebp
0x7F6C03: push    esi
0x7F6C04: push    edi
0x7F6C05: mov     eax, ds:0B30AACh
0x7F6C0A: xor     eax, esp
0x7F6C0C: push    eax
0x7F6C0D: lea     eax, [esp+4Ch+var_C]
0x7F6C11: mov     large fs:0, eax
0x7F6C17: mov     [esp+4Ch+var_30], ecx
0x7F6C1B: mov     ebx, [esp+4Ch+arg_0]
0x7F6C1F: mov     eax, [ebx+0B4h]
0x7F6C25: mov     eax, [eax+38h]
0x7F6C28: mov     ebp, [esp+4Ch+arg_8]
0x7F6C2C: mov     [esp+4Ch+var_28], eax
0x7F6C30: mov     eax, ds:0B3F928h
0x7F6C35: mov     ecx, [eax+8ACh]
0x7F6C3B: mov     edx, [eax+8B8h]
0x7F6C41: mov     eax, [ebp+18h]
0x7F6C44: xor     edi, edi
0x7F6C46: cmp     eax, edi
0x7F6C48: mov     [esp+4Ch+var_34], edi
0x7F6C4C: mov     [esp+4Ch+var_18], ecx
0x7F6C50: mov     [esp+4Ch+var_2C], edx
0x7F6C54: mov     [esp+4Ch+var_10], eax
0x7F6C58: jbe     loc_7F6DE5
0x7F6C5E: jmp     short loc_7F6C64
0x7F6C60: mov     ebp, [esp+4Ch+arg_8]
0x7F6C64: mov     eax, [ebp+24h]
0x7F6C67: mov     esi, [eax+edi*4]
0x7F6C6A: test    esi, esi
0x7F6C6C: jz      short loc_7F6C91
0x7F6C6E: lea     ecx, [esp+4Ch+var_24]
0x7F6C72: push    ecx
0x7F6C73: mov     ecx, esi
0x7F6C75: call    sub_75FB10
0x7F6C7A: mov     edx, [esp+4Ch+var_30]
0x7F6C7E: mov     eax, [eax]
0x7F6C80: mov     ecx, [edx]
0x7F6C82: or      [esp+4Ch+var_34], 1
0x7F6C87: cmp     [ecx+edi*4], eax
0x7F6C8A: mov     byte ptr [esp+4Ch+arg_0], 1
0x7F6C8F: jnz     short loc_7F6C96
0x7F6C91: mov     byte ptr [esp+4Ch+arg_0], 0
0x7F6C96: test    byte ptr [esp+4Ch+var_34], 1
0x7F6C9B: jz      short loc_7F6CC7
0x7F6C9D: mov     ebp, [esp+4Ch+var_24]
0x7F6CA1: and     [esp+4Ch+var_34], 0FFFFFFFEh
0x7F6CA6: test    ebp, ebp
0x7F6CA8: jz      short loc_7F6CC7
0x7F6CAA: lea     edx, [ebp+4]
0x7F6CAD: push    edx; lpAddend
0x7F6CAE: call    dword ptr ds:0A2807Ch
0x7F6CB4: test    eax, eax
0x7F6CB6: jnz     short loc_7F6CC7
0x7F6CB8: test    ebp, ebp
0x7F6CBA: jz      short loc_7F6CC7
0x7F6CBC: mov     eax, [ebp+0]
0x7F6CBF: mov     edx, [eax]
0x7F6CC1: push    1
0x7F6CC3: mov     ecx, ebp
0x7F6CC5: call    edx
0x7F6CC7: cmp     byte ptr [esp+4Ch+arg_0], 0
0x7F6CCC: jz      loc_7F6DD0
0x7F6CD2: lea     eax, [esp+4Ch+var_20]
0x7F6CD6: push    eax
0x7F6CD7: mov     ecx, esi
0x7F6CD9: call    sub_75FB10
0x7F6CDE: mov     ecx, [esp+4Ch+var_30]
0x7F6CE2: mov     eax, [eax]
0x7F6CE4: mov     edx, [ecx]
0x7F6CE6: mov     [edx+edi*4], eax
0x7F6CE9: mov     eax, [esp+4Ch+var_20]
0x7F6CED: test    eax, eax
0x7F6CEF: jz      short loc_7F6D10
0x7F6CF1: mov     ebp, eax
0x7F6CF3: add     eax, 4
0x7F6CF6: push    eax; lpAddend
0x7F6CF7: call    dword ptr ds:0A2807Ch
0x7F6CFD: test    eax, eax
0x7F6CFF: jnz     short loc_7F6D10
0x7F6D01: test    ebp, ebp
0x7F6D03: jz      short loc_7F6D10
0x7F6D05: mov     eax, [ebp+0]
0x7F6D08: mov     edx, [eax]
0x7F6D0A: push    1
0x7F6D0C: mov     ecx, ebp
0x7F6D0E: call    edx
0x7F6D10: lea     eax, [esp+4Ch+var_1C]
0x7F6D14: push    eax
0x7F6D15: mov     ecx, esi
0x7F6D17: call    sub_75FB10
0x7F6D1C: cmp     dword ptr [eax], 0
0x7F6D1F: mov     eax, [esp+4Ch+var_1C]
0x7F6D23: setnz   byte ptr [esp+4Ch+arg_0]
0x7F6D28: test    eax, eax
0x7F6D2A: jz      short loc_7F6D4B
0x7F6D2C: mov     ebp, eax
0x7F6D2E: add     eax, 4
0x7F6D31: push    eax; lpAddend
0x7F6D32: call    dword ptr ds:0A2807Ch
0x7F6D38: test    eax, eax
0x7F6D3A: jnz     short loc_7F6D4B
0x7F6D3C: test    ebp, ebp
0x7F6D3E: jz      short loc_7F6D4B
0x7F6D40: mov     edx, [ebp+0]
0x7F6D43: mov     eax, [edx]
0x7F6D45: push    1
0x7F6D47: mov     ecx, ebp
0x7F6D49: call    eax
0x7F6D4B: cmp     byte ptr [esp+4Ch+arg_0], 0
0x7F6D50: jz      loc_7F6DD4
0x7F6D56: lea     ecx, [esp+4Ch+var_14]
0x7F6D5A: push    ecx
0x7F6D5B: mov     ecx, esi
0x7F6D5D: call    sub_75FB10
0x7F6D62: mov     edx, [esp+4Ch+var_2C]
0x7F6D66: mov     eax, [eax]
0x7F6D68: mov     ebp, [esp+4Ch+var_18]
0x7F6D6C: mov     edx, [edx]
0x7F6D6E: mov     esi, [ebp+0]
0x7F6D71: mov     edx, [edx+8]
0x7F6D74: lea     ecx, [esp+4Ch+var_38+1]
0x7F6D78: push    ecx
0x7F6D79: lea     ecx, [esp+50h+var_38+2]
0x7F6D7D: push    ecx
0x7F6D7E: lea     ecx, [esp+54h+var_38+3]
0x7F6D82: push    ecx
0x7F6D83: mov     ecx, [esp+58h+var_2C]
0x7F6D87: push    eax
0x7F6D88: mov     [esp+5Ch+var_4], 0
0x7F6D90: add     esi, 0E0h ; 'à'
0x7F6D96: call    edx
0x7F6D98: push    eax
0x7F6D99: mov     eax, [esi]
0x7F6D9B: push    edi
0x7F6D9C: mov     ecx, ebp
0x7F6D9E: call    eax
0x7F6DA0: mov     eax, [esp+4Ch+var_14]
0x7F6DA4: test    eax, eax
0x7F6DA6: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x7F6DAE: jz      short loc_7F6DD4
0x7F6DB0: mov     esi, eax
0x7F6DB2: add     eax, 4
0x7F6DB5: push    eax; lpAddend
0x7F6DB6: call    dword ptr ds:0A2807Ch
0x7F6DBC: test    eax, eax
0x7F6DBE: jnz     short loc_7F6DD4
0x7F6DC0: test    esi, esi
0x7F6DC2: jz      short loc_7F6DD4
0x7F6DC4: mov     edx, [esi]
0x7F6DC6: mov     eax, [edx]
0x7F6DC8: push    1
0x7F6DCA: mov     ecx, esi
0x7F6DCC: call    eax
0x7F6DCE: jmp     short loc_7F6DD4
0x7F6DD0: test    esi, esi
0x7F6DD2: jz      short loc_7F6DE1
0x7F6DD4: add     edi, 1
0x7F6DD7: cmp     edi, [esp+4Ch+var_10]
0x7F6DDB: jb      loc_7F6C60
0x7F6DE1: mov     ebp, [esp+4Ch+arg_8]
0x7F6DE5: cmp     byte ptr [esp+4Ch+arg_C], 0
0x7F6DEA: jz      short loc_7F6DF8
0x7F6DEC: mov     ecx, [ebp+30h]; this
0x7F6DEF: test    ecx, ecx
0x7F6DF1: jz      short loc_7F6DF8
0x7F6DF3: call    NiD3DRenderStateGroup__SetRenderStates
0x7F6DF8: cmp     edi, ds:0B28CB8h
0x7F6DFE: jnb     short loc_7F6E09
0x7F6E00: push    edi
0x7F6E01: call    sub_771790
0x7F6E06: add     esp, 4
0x7F6E09: cmp     dword ptr [ebp+44h], 0
0x7F6E0D: jz      loc_7F6EC9
0x7F6E13: mov     ecx, [esp+4Ch+arg_4]
0x7F6E17: mov     esi, [ecx+2Ch]
0x7F6E1A: test    esi, esi
0x7F6E1C: jz      loc_7F6EC9
0x7F6E22: lea     edx, [esp+4Ch+arg_0]
0x7F6E26: push    edx
0x7F6E27: mov     ecx, ebx
0x7F6E29: call    sub_7016D0
0x7F6E2E: mov     edi, eax
0x7F6E30: lea     eax, [esp+4Ch+arg_C]
0x7F6E34: push    eax
0x7F6E35: mov     ecx, ebx
0x7F6E37: mov     [esp+50h+var_4], 1
0x7F6E3F: call    sub_405760
0x7F6E44: mov     ecx, [ebp+44h]
0x7F6E47: mov     edi, [edi]
0x7F6E49: mov     eax, [eax]
0x7F6E4B: mov     edx, [esi]
0x7F6E4D: push    0
0x7F6E4F: mov     edx, [edx+40h]
0x7F6E52: push    0
0x7F6E54: lea     ebp, [ebx+20h]
0x7F6E57: push    ebp
0x7F6E58: lea     ebp, [ebx+64h]
0x7F6E5B: push    ebp
0x7F6E5C: push    edi
0x7F6E5D: push    eax
0x7F6E5E: mov     eax, [esp+64h+var_28]
0x7F6E62: push    eax
0x7F6E63: push    0
0x7F6E65: push    0
0x7F6E67: push    ebx
0x7F6E68: push    ecx
0x7F6E69: mov     ecx, esi
0x7F6E6B: mov     byte ptr [esp+78h+var_4], 2
0x7F6E70: call    edx
0x7F6E72: mov     eax, [esp+4Ch+arg_C]
0x7F6E76: test    eax, eax
0x7F6E78: mov     byte ptr [esp+4Ch+var_4], 1
0x7F6E7D: jz      short loc_7F6E9D
0x7F6E7F: mov     esi, eax
0x7F6E81: add     eax, 4
0x7F6E84: push    eax; lpAddend
0x7F6E85: call    dword ptr ds:0A2807Ch
0x7F6E8B: test    eax, eax
0x7F6E8D: jnz     short loc_7F6E9D
0x7F6E8F: test    esi, esi
0x7F6E91: jz      short loc_7F6E9D
0x7F6E93: mov     eax, [esi]
0x7F6E95: mov     edx, [eax]
0x7F6E97: push    1
0x7F6E99: mov     ecx, esi
0x7F6E9B: call    edx
0x7F6E9D: mov     esi, [esp+4Ch+arg_0]
0x7F6EA1: test    esi, esi
0x7F6EA3: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x7F6EAB: jz      short loc_7F6EC9
0x7F6EAD: lea     eax, [esi+4]
0x7F6EB0: push    eax; lpAddend
0x7F6EB1: call    dword ptr ds:0A2807Ch
0x7F6EB7: test    eax, eax
0x7F6EB9: jnz     short loc_7F6EC9
0x7F6EBB: test    esi, esi
0x7F6EBD: jz      short loc_7F6EC9
0x7F6EBF: mov     edx, [esi]
0x7F6EC1: mov     eax, [edx]
0x7F6EC3: push    1
0x7F6EC5: mov     ecx, esi
0x7F6EC7: call    eax
0x7F6EC9: mov     ebp, [esp+4Ch+arg_8]
0x7F6ECD: cmp     dword ptr [ebp+58h], 0
0x7F6ED1: jz      loc_7F6F8D
0x7F6ED7: mov     ecx, [esp+4Ch+arg_4]
0x7F6EDB: mov     esi, [ecx+30h]
0x7F6EDE: test    esi, esi
0x7F6EE0: jz      loc_7F6F8D
0x7F6EE6: lea     edx, [esp+4Ch+arg_4]
0x7F6EEA: push    edx
0x7F6EEB: mov     ecx, ebx
0x7F6EED: call    sub_7016D0
0x7F6EF2: mov     edi, eax
0x7F6EF4: lea     eax, [esp+4Ch+arg_8]
0x7F6EF8: push    eax
0x7F6EF9: mov     ecx, ebx
0x7F6EFB: mov     [esp+50h+var_4], 3
0x7F6F03: call    sub_405760
0x7F6F08: mov     ecx, [ebp+58h]
0x7F6F0B: mov     edi, [edi]
0x7F6F0D: mov     eax, [eax]
0x7F6F0F: mov     edx, [esi]
0x7F6F11: push    0
0x7F6F13: mov     edx, [edx+40h]
0x7F6F16: push    0
0x7F6F18: lea     ebp, [ebx+20h]
0x7F6F1B: push    ebp
0x7F6F1C: lea     ebp, [ebx+64h]
0x7F6F1F: push    ebp
0x7F6F20: push    edi
0x7F6F21: push    eax
0x7F6F22: mov     eax, [esp+64h+var_28]
0x7F6F26: push    eax
0x7F6F27: push    0
0x7F6F29: push    0
0x7F6F2B: push    ebx
0x7F6F2C: push    ecx
0x7F6F2D: mov     ecx, esi
0x7F6F2F: mov     byte ptr [esp+78h+var_4], 4
0x7F6F34: call    edx
0x7F6F36: mov     eax, [esp+4Ch+arg_8]
0x7F6F3A: test    eax, eax
0x7F6F3C: mov     byte ptr [esp+4Ch+var_4], 3
0x7F6F41: jz      short loc_7F6F61
0x7F6F43: mov     esi, eax
0x7F6F45: add     eax, 4
0x7F6F48: push    eax; lpAddend
0x7F6F49: call    dword ptr ds:0A2807Ch
0x7F6F4F: test    eax, eax
0x7F6F51: jnz     short loc_7F6F61
0x7F6F53: test    esi, esi
0x7F6F55: jz      short loc_7F6F61
0x7F6F57: mov     eax, [esi]
0x7F6F59: mov     edx, [eax]
0x7F6F5B: push    1
0x7F6F5D: mov     ecx, esi
0x7F6F5F: call    edx
0x7F6F61: mov     esi, [esp+4Ch+arg_4]
0x7F6F65: test    esi, esi
0x7F6F67: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x7F6F6F: jz      short loc_7F6F8D
0x7F6F71: lea     eax, [esi+4]
0x7F6F74: push    eax; lpAddend
0x7F6F75: call    dword ptr ds:0A2807Ch
0x7F6F7B: test    eax, eax
0x7F6F7D: jnz     short loc_7F6F8D
0x7F6F7F: test    esi, esi
0x7F6F81: jz      short loc_7F6F8D
0x7F6F83: mov     edx, [esi]
0x7F6F85: mov     eax, [edx]
0x7F6F87: push    1
0x7F6F89: mov     ecx, esi
0x7F6F8B: call    eax
0x7F6F8D: mov     edx, [ebx]
0x7F6F8F: mov     eax, ds:0B3F928h
0x7F6F94: mov     edx, [edx+88h]
0x7F6F9A: push    eax
0x7F6F9B: mov     ecx, ebx
0x7F6F9D: call    edx
0x7F6F9F: mov     ecx, dword ptr [esp+4Ch+var_C]
0x7F6FA3: mov     large fs:0, ecx
0x7F6FAA: pop     ecx
0x7F6FAB: pop     edi
0x7F6FAC: pop     esi
0x7F6FAD: pop     ebp
0x7F6FAE: pop     ebx
0x7F6FAF: add     esp, 38h
0x7F6FB2: retn    10h
