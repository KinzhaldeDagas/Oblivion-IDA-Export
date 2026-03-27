0x7F9D10: sub     esp, 14h
0x7F9D13: push    ebx
0x7F9D14: push    ebp
0x7F9D15: push    esi
0x7F9D16: push    edi
0x7F9D17: mov     edi, [esp+24h+arg_0]
0x7F9D1B: test    edi, edi
0x7F9D1D: mov     esi, ecx
0x7F9D1F: jz      short loc_7F9D6D
0x7F9D21: mov     ecx, [edi+20h]
0x7F9D24: test    ecx, ecx
0x7F9D26: jz      short loc_7F9D31
0x7F9D28: mov     eax, [ecx]
0x7F9D2A: mov     edx, [eax+4Ch]
0x7F9D2D: call    edx
0x7F9D2F: jmp     short loc_7F9D33
0x7F9D31: xor     eax, eax
0x7F9D33: test    eax, eax
0x7F9D35: mov     [esp+24h+arg_0], eax
0x7F9D39: fild    [esp+24h+arg_0]
0x7F9D3D: jge     short loc_7F9D45
0x7F9D3F: fadd    dword ptr ds:0A2FC78h
0x7F9D45: mov     ecx, [edi+20h]
0x7F9D48: fstp    [esp+24h+var_14]
0x7F9D4C: test    ecx, ecx
0x7F9D4E: jz      short loc_7F9D61
0x7F9D50: mov     eax, [ecx]
0x7F9D52: mov     edx, [eax+50h]
0x7F9D55: call    edx
0x7F9D57: mov     [esp+24h+arg_0], eax
0x7F9D5B: fild    [esp+24h+arg_0]
0x7F9D5F: jmp     short loc_7F9DBB
0x7F9D61: xor     eax, eax
0x7F9D63: mov     [esp+24h+arg_0], eax
0x7F9D67: fild    [esp+24h+arg_0]
0x7F9D6B: jmp     short loc_7F9DBB
0x7F9D6D: mov     ecx, ds:0B3F928h
0x7F9D73: mov     eax, [ecx]
0x7F9D75: mov     edx, [eax+7Ch]
0x7F9D78: call    edx
0x7F9D7A: mov     edx, [eax]
0x7F9D7C: mov     ecx, eax
0x7F9D7E: mov     eax, [edx+4Ch]
0x7F9D81: push    0
0x7F9D83: call    eax
0x7F9D85: test    eax, eax
0x7F9D87: mov     [esp+24h+arg_0], eax
0x7F9D8B: fild    [esp+24h+arg_0]
0x7F9D8F: jge     short loc_7F9D97
0x7F9D91: fadd    dword ptr ds:0A2FC78h
0x7F9D97: mov     ecx, ds:0B3F928h
0x7F9D9D: fstp    [esp+24h+var_14]
0x7F9DA1: mov     edx, [ecx]
0x7F9DA3: mov     eax, [edx+7Ch]
0x7F9DA6: call    eax
0x7F9DA8: mov     edx, [eax]
0x7F9DAA: mov     ecx, eax
0x7F9DAC: mov     eax, [edx+50h]
0x7F9DAF: push    0
0x7F9DB1: call    eax
0x7F9DB3: mov     [esp+24h+arg_0], eax
0x7F9DB7: fild    [esp+24h+arg_0]
0x7F9DBB: test    eax, eax
0x7F9DBD: jge     short loc_7F9DC5
0x7F9DBF: fadd    dword ptr ds:0A2FC78h
0x7F9DC5: fstp    [esp+24h+arg_0]
0x7F9DC9: fld     [esp+24h+arg_0]
0x7F9DCD: fdiv    [esp+24h+var_14]
0x7F9DD1: fld1
0x7F9DD3: fcom    st(1)
0x7F9DD5: fnstsw  ax
0x7F9DD7: test    ah, 41h
0x7F9DDA: jnz     short loc_7F9DE0
0x7F9DDC: fld     st
0x7F9DDE: jmp     short loc_7F9DE2
0x7F9DE0: fld     st(1)
0x7F9DE2: fdivr   st, st(2)
0x7F9DE4: fstp    [esp+24h+arg_0]
0x7F9DE8: fcom    st(1)
0x7F9DEA: fnstsw  ax
0x7F9DEC: test    ah, 41h
0x7F9DEF: jnz     short loc_7F9DF7
0x7F9DF1: fstp    st(1)
0x7F9DF3: fld     st
0x7F9DF5: jmp     short loc_7F9DF9
0x7F9DF7: fxch    st(1)
0x7F9DF9: fld     dword ptr ds:0A43328h
0x7F9DFF: mov     dword ptr [esi+0C8h], 0
0x7F9E09: fstp    [esp+24h+var_10]
0x7F9E0D: mov     ebx, 1
0x7F9E12: fld     [esp+24h+arg_0]
0x7F9E16: fstp    [esp+24h+var_C]
0x7F9E1A: fdivp   st(1), st
0x7F9E1C: fstp    [esp+24h+arg_0]
0x7F9E20: fld     [esp+24h+arg_0]
0x7F9E24: fsub    qword ptr ds:0A68610h
0x7F9E2A: fstp    [esp+24h+var_8]
0x7F9E2E: fldz
0x7F9E30: fstp    [esp+24h+var_4]
0x7F9E34: mov     ecx, [esi+0C8h]
0x7F9E3A: mov     ecx, [esi+ecx*4+7Ch]
0x7F9E3E: test    ecx, ecx
0x7F9E40: jz      loc_7FA069
0x7F9E46: mov     edx, [ecx]
0x7F9E48: mov     eax, [edx+4Ch]
0x7F9E4B: call    eax
0x7F9E4D: test    eax, eax
0x7F9E4F: mov     [esp+24h+arg_0], eax
0x7F9E53: fild    [esp+24h+arg_0]
0x7F9E57: jge     short loc_7F9E5F
0x7F9E59: fadd    dword ptr ds:0A2FC78h
0x7F9E5F: mov     ecx, [esi+0C8h]
0x7F9E65: fstp    [esp+24h+arg_0]
0x7F9E69: mov     ecx, [esi+ecx*4+7Ch]
0x7F9E6D: mov     edx, [ecx]
0x7F9E6F: mov     eax, [edx+50h]
0x7F9E72: call    eax
0x7F9E74: test    eax, eax
0x7F9E76: mov     [esp+24h+var_14], eax
0x7F9E7A: fild    [esp+24h+var_14]
0x7F9E7E: jge     short loc_7F9E86
0x7F9E80: fadd    dword ptr ds:0A2FC78h
0x7F9E86: fstp    [esp+24h+var_14]
0x7F9E8A: fld     [esp+24h+arg_0]
0x7F9E8E: fdiv    [esp+24h+var_14]
0x7F9E92: fld1
0x7F9E94: fcom    st(1)
0x7F9E96: fnstsw  ax
0x7F9E98: test    ah, 41h
0x7F9E9B: jnz     short loc_7F9EA1
0x7F9E9D: fld     st
0x7F9E9F: jmp     short loc_7F9EA3
0x7F9EA1: fld     st(1)
0x7F9EA3: fdivr   st, st(2)
0x7F9EA5: fstp    [esp+24h+var_14]
0x7F9EA9: fcom    st(1)
0x7F9EAB: fnstsw  ax
0x7F9EAD: test    ah, 41h
0x7F9EB0: jnz     short loc_7F9EB8
0x7F9EB2: fstp    st(1)
0x7F9EB4: fld     st
0x7F9EB6: jmp     short loc_7F9EBA
0x7F9EB8: fxch    st(1)
0x7F9EBA: fdivr   st, st(1)
0x7F9EBC: mov     eax, [esi+0C8h]
0x7F9EC2: sub     esp, 10h
0x7F9EC5: mov     ecx, eax
0x7F9EC7: shr     ecx, 2
0x7F9ECA: test    ecx, ecx
0x7F9ECC: fstp    [esp+34h+arg_0]
0x7F9ED0: fld     [esp+34h+arg_0]
0x7F9ED4: fmul    qword ptr ds:0A93080h
0x7F9EDA: fstp    [esp+34h+arg_0]
0x7F9EDE: fld     [esp+34h+arg_0]
0x7F9EE2: fstp    [esp+34h+a6]; a6
0x7F9EE6: fld     [esp+34h+var_14]
0x7F9EEA: fmul    qword ptr ds:0A93078h
0x7F9EF0: fstp    [esp+34h+arg_0]
0x7F9EF4: fld     [esp+34h+arg_0]
0x7F9EF8: mov     [esp+34h+arg_0], ecx
0x7F9EFC: fstp    [esp+34h+a5]; a5
0x7F9F00: fild    [esp+34h+arg_0]
0x7F9F04: jge     short loc_7F9F0C
0x7F9F06: fadd    dword ptr ds:0A2FC78h
0x7F9F0C: fmul    qword ptr ds:0A7CDE0h
0x7F9F12: and     eax, 3
0x7F9F15: test    eax, eax
0x7F9F17: fadd    st, st(1)
0x7F9F19: fstp    [esp+34h+arg_0]
0x7F9F1D: fld     [esp+34h+arg_0]
0x7F9F21: mov     [esp+34h+arg_0], eax
0x7F9F25: fstp    [esp+34h+a4]; a4
0x7F9F29: fild    [esp+34h+arg_0]
0x7F9F2D: jge     short loc_7F9F35
0x7F9F2F: fadd    dword ptr ds:0A2FC78h
0x7F9F35: fmul    qword ptr ds:0A2FAA0h
0x7F9F3B: mov     edx, [esi+0BCh]
0x7F9F41: mov     ecx, [edx+0B4h]; this
0x7F9F47: fsubrp  st(1), st
0x7F9F49: fstp    [esp+34h+arg_0]
0x7F9F4D: fld     [esp+34h+arg_0]
0x7F9F51: fstp    [esp+34h+a3]; a3
0x7F9F54: push    0; a2
0x7F9F56: call    sub_702EC0
0x7F9F5B: mov     eax, [esi+0BCh]
0x7F9F61: mov     ecx, [eax+0B4h]; this
0x7F9F67: call    sub_703050
0x7F9F6C: mov     edi, [esi+0BCh]
0x7F9F72: mov     ebp, [edi+0BCh]
0x7F9F78: add     edi, 0BCh ; '¼'
0x7F9F7E: cmp     ebp, esi
0x7F9F80: jz      short loc_7F9FAE
0x7F9F82: test    ebp, ebp
0x7F9F84: jz      short loc_7F9FA2
0x7F9F86: lea     ecx, [ebp+4]
0x7F9F89: push    ecx; lpAddend
0x7F9F8A: call    dword ptr ds:0A2807Ch
0x7F9F90: test    eax, eax
0x7F9F92: jnz     short loc_7F9FA2
0x7F9F94: test    ebp, ebp
0x7F9F96: jz      short loc_7F9FA2
0x7F9F98: mov     edx, [ebp+0]
0x7F9F9B: mov     eax, [edx]
0x7F9F9D: push    ebx
0x7F9F9E: mov     ecx, ebp
0x7F9FA0: call    eax
0x7F9FA2: lea     ecx, [esi+4]
0x7F9FA5: push    ecx; lpAddend
0x7F9FA6: mov     [edi], esi
0x7F9FA8: call    dword ptr ds:0A28078h
0x7F9FAE: mov     edx, [esi]
0x7F9FB0: mov     eax, [esi+0BCh]
0x7F9FB6: mov     edx, [edx+18h]
0x7F9FB9: push    eax
0x7F9FBA: mov     ecx, esi
0x7F9FBC: call    edx
0x7F9FBE: mov     ecx, ds:0B3F928h
0x7F9FC4: cmp     [ecx+200h], ebx
0x7F9FCA: jz      short loc_7F9FD4
0x7F9FCC: cmp     [ecx+204h], ebx
0x7F9FD2: jnz     short loc_7F9FF1
0x7F9FD4: cmp     [ecx+20Ch], bl
0x7F9FDA: jnz     short loc_7F9FF1
0x7F9FDC: mov     eax, [ecx]
0x7F9FDE: mov     eax, [eax+144h]
0x7F9FE4: lea     edx, [esp+24h+var_10]
0x7F9FE8: push    edx
0x7F9FE9: call    eax
0x7F9FEB: mov     ecx, ds:0B3F928h
0x7F9FF1: push    ecx
0x7F9FF2: mov     ecx, [esi+0BCh]; this
0x7F9FF8: call    sub_709C60
0x7F9FFD: mov     ecx, [esi+0C8h]
0x7FA003: mov     edi, [esi+ecx*4+7Ch]
0x7FA007: test    edi, edi
0x7FA009: lea     ebp, [esi+ecx*4+7Ch]
0x7FA00D: jz      short loc_7FA031
0x7FA00F: lea     edx, [edi+4]
0x7FA012: push    edx; lpAddend
0x7FA013: call    dword ptr ds:0A2807Ch
0x7FA019: test    eax, eax
0x7FA01B: jnz     short loc_7FA02A
0x7FA01D: test    edi, edi
0x7FA01F: jz      short loc_7FA02A
0x7FA021: mov     eax, [edi]
0x7FA023: mov     edx, [eax]
0x7FA025: push    ebx
0x7FA026: mov     ecx, edi
0x7FA028: call    edx
0x7FA02A: mov     dword ptr [ebp+0], 0
0x7FA031: mov     edi, [esi+0BCh]
0x7FA037: mov     ebp, [edi+0BCh]
0x7FA03D: add     edi, 0BCh ; '¼'
0x7FA043: test    ebp, ebp
0x7FA045: jz      short loc_7FA069
0x7FA047: lea     eax, [ebp+4]
0x7FA04A: push    eax; lpAddend
0x7FA04B: call    dword ptr ds:0A2807Ch
0x7FA051: test    eax, eax
0x7FA053: jnz     short loc_7FA063
0x7FA055: test    ebp, ebp
0x7FA057: jz      short loc_7FA063
0x7FA059: mov     edx, [ebp+0]
0x7FA05C: mov     eax, [edx]
0x7FA05E: push    ebx
0x7FA05F: mov     ecx, ebp
0x7FA061: call    eax
0x7FA063: mov     dword ptr [edi], 0
0x7FA069: add     [esi+0C8h], ebx
0x7FA06F: cmp     dword ptr [esi+0C8h], 10h
0x7FA076: jb      loc_7F9E34
0x7FA07C: pop     edi
0x7FA07D: pop     esi
0x7FA07E: pop     ebp
0x7FA07F: pop     ebx
0x7FA080: add     esp, 14h
0x7FA083: retn    4
