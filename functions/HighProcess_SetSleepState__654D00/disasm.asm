0x654D00: push    ebx
0x654D01: push    ebp
0x654D02: mov     ebp, [esp+8+arg_0]
0x654D06: test    ebp, ebp
0x654D08: push    esi
0x654D09: push    edi
0x654D0A: mov     esi, ecx
0x654D0C: jz      loc_654DB6
0x654D12: mov     eax, [ebp+0]
0x654D15: mov     edx, [eax+154h]
0x654D1B: mov     ecx, ebp
0x654D1D: call    edx
0x654D1F: mov     edi, eax
0x654D21: test    edi, edi
0x654D23: jz      loc_654DB6
0x654D29: cmp     ebp, ds:0B333C4h
0x654D2F: jz      loc_654DB6
0x654D35: mov     al, [esi+11Dh]
0x654D3B: cmp     al, 9
0x654D3D: jz      short loc_654D48
0x654D3F: cmp     al, 4
0x654D41: mov     byte ptr [esp+10h+arg_0], 0
0x654D46: jnz     short loc_654D4D
0x654D48: mov     byte ptr [esp+10h+arg_0], 1
0x654D4D: mov     eax, [esp+10h+arg_4]
0x654D51: cmp     eax, 9
0x654D54: jz      short loc_654D5F
0x654D56: cmp     eax, 4
0x654D59: jz      short loc_654D5F
0x654D5B: xor     bl, bl
0x654D5D: jmp     short loc_654D61
0x654D5F: mov     bl, 1
0x654D61: mov     eax, [esi]
0x654D63: mov     edx, [eax+8]
0x654D66: mov     ecx, esi
0x654D68: call    edx
0x654D6A: test    eax, eax
0x654D6C: jnz     short loc_654D80
0x654D6E: cmp     byte ptr [esp+10h+arg_0], al
0x654D72: jz      short loc_654D80
0x654D74: test    bl, bl
0x654D76: jnz     short loc_654D80
0x654D78: push    0
0x654D7A: push    1
0x654D7C: push    0
0x654D7E: jmp     short loc_654DAD
0x654D80: mov     eax, [esi]
0x654D82: mov     edx, [eax+8]
0x654D85: mov     ecx, esi
0x654D87: call    edx
0x654D89: test    eax, eax
0x654D8B: jnz     short loc_654DB6
0x654D8D: test    bl, bl
0x654D8F: jz      short loc_654DB6
0x654D91: cmp     byte ptr [esp+10h+arg_0], al
0x654D95: jnz     short loc_654DB6
0x654D97: mov     eax, [ebp+0]
0x654D9A: mov     edx, [eax+380h]
0x654DA0: mov     ecx, ebp
0x654DA2: call    edx
0x654DA4: test    eax, eax
0x654DA6: jnz     short loc_654DB6
0x654DA8: push    eax
0x654DA9: push    1
0x654DAB: push    1
0x654DAD: push    edi
0x654DAE: call    sub_88CE30
0x654DB3: add     esp, 10h
0x654DB6: mov     eax, [esi+17Ch]
0x654DBC: test    eax, eax
0x654DBE: mov     ebx, [esp+10h+arg_4]
0x654DC2: jz      loc_654E5F
0x654DC8: cmp     ebx, 3
0x654DCB: jl      short loc_654E18
0x654DCD: cmp     ebx, 5
0x654DD0: jg      short loc_654E18
0x654DD2: mov     eax, [eax+98h]
0x654DD8: mov     ecx, [eax+7Ch]
0x654DDB: mov     edx, [ecx]
0x654DDD: mov     eax, ds:0B06560h
0x654DE2: mov     edx, [edx+4Ch]
0x654DE5: push    eax
0x654DE6: call    edx
0x654DE8: test    eax, eax
0x654DEA: jz      short loc_654DF1
0x654DEC: or      word ptr [eax+18h], 1
0x654DF1: mov     eax, [esi+17Ch]
0x654DF7: mov     ecx, [eax+98h]
0x654DFD: mov     ecx, [ecx+7Ch]
0x654E00: mov     edx, [ecx]
0x654E02: mov     eax, ds:0B06568h
0x654E07: mov     edx, [edx+4Ch]
0x654E0A: push    eax
0x654E0B: call    edx
0x654E0D: test    eax, eax
0x654E0F: jz      short loc_654E5F
0x654E11: or      word ptr [eax+18h], 1
0x654E16: jmp     short loc_654E5F
0x654E18: mov     eax, [eax+98h]
0x654E1E: mov     ecx, [eax+7Ch]
0x654E21: mov     edx, [ecx]
0x654E23: mov     eax, ds:0B06560h
0x654E28: mov     edx, [edx+4Ch]
0x654E2B: push    eax
0x654E2C: call    edx
0x654E2E: test    eax, eax
0x654E30: mov     edi, 0FFFEh
0x654E35: jz      short loc_654E3B
0x654E37: and     [eax+18h], di
0x654E3B: mov     eax, [esi+17Ch]
0x654E41: mov     ecx, [eax+98h]
0x654E47: mov     ecx, [ecx+7Ch]
0x654E4A: mov     edx, [ecx]
0x654E4C: mov     eax, ds:0B06568h
0x654E51: mov     edx, [edx+4Ch]
0x654E54: push    eax
0x654E55: call    edx
0x654E57: test    eax, eax
0x654E59: jz      short loc_654E5F
0x654E5B: and     [eax+18h], di
0x654E5F: test    ebp, ebp
0x654E61: jz      short loc_654E75
0x654E63: mov     ecx, ebp
0x654E65: call    sub_4A9720
0x654E6A: push    ecx
0x654E6B: mov     ecx, ebp; int
0x654E6D: fstp    [esp+14h+var_14]; float
0x654E70: call    sub_65A650
0x654E75: mov     eax, [esp+10h+arg_8]
0x654E79: mov     cl, [esp+10h+arg_C]
0x654E7D: pop     edi
0x654E7E: mov     [esi+11Dh], bl
0x654E84: mov     [esi+120h], eax
0x654E8A: mov     [esi+124h], cl
0x654E90: pop     esi
0x654E91: pop     ebp
0x654E92: pop     ebx
0x654E93: retn    10h
