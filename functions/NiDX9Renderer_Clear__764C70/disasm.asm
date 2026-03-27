0x764C70: sub     esp, 28h
0x764C73: push    ebx
0x764C74: mov     ebx, [esp+2Ch+arg_4]
0x764C78: test    ebx, ebx
0x764C7A: push    esi
0x764C7B: mov     esi, ecx
0x764C7D: jz      loc_764E47
0x764C83: cmp     byte ptr [esi+6F0h], 0
0x764C8A: jnz     loc_764E47
0x764C90: mov     ecx, [esi+87Ch]
0x764C96: mov     eax, [ecx]
0x764C98: mov     edx, [eax+4Ch]
0x764C9B: push    ebp
0x764C9C: push    edi
0x764C9D: push    0
0x764C9F: call    edx
0x764CA1: mov     ecx, [esi+87Ch]
0x764CA7: mov     ebp, eax
0x764CA9: mov     eax, [ecx]
0x764CAB: mov     edx, [eax+50h]
0x764CAE: push    0
0x764CB0: call    edx
0x764CB2: mov     edi, [esp+30h+arg_8]
0x764CB6: xor     ecx, ecx
0x764CB8: cmp     edi, ecx
0x764CBA: jz      short loc_764D37
0x764CBC: test    ebp, ebp
0x764CBE: mov     [esp+30h+arg_C], ebp
0x764CC2: fild    [esp+30h+arg_C]
0x764CC6: jge     short loc_764CCE
0x764CC8: fadd    dword ptr ds:0A2FC78h
0x764CCE: test    eax, eax
0x764CD0: fstp    [esp+30h+arg_C]
0x764CD4: mov     [esp+30h+arg_8], eax
0x764CD8: fild    [esp+30h+arg_8]
0x764CDC: jge     short loc_764CE4
0x764CDE: fadd    dword ptr ds:0A2FC78h
0x764CE4: fstp    [esp+30h+arg_8]
0x764CE8: fld     dword ptr [edi]
0x764CEA: fld     [esp+30h+arg_C]
0x764CEE: fld     st
0x764CF0: fmulp   st(2), st
0x764CF2: fxch    st(1)
0x764CF4: call    Double_To_SInt32
0x764CF9: fld     dword ptr [edi+8]
0x764CFC: fld1
0x764CFE: mov     [esp+30h+var_20], eax
0x764D02: fld     st
0x764D04: fsubrp  st(2), st
0x764D06: fld     [esp+30h+arg_8]
0x764D0A: fld     st
0x764D0C: fmulp   st(3), st
0x764D0E: fxch    st(2)
0x764D10: call    Double_To_SInt32
0x764D15: fld     dword ptr [edi+4]
0x764D18: fmulp   st(3), st
0x764D1A: mov     [esp+30h+var_1C], eax
0x764D1E: fxch    st(2)
0x764D20: call    Double_To_SInt32
0x764D25: fld     dword ptr [edi+0Ch]
0x764D28: fsubp   st(2), st
0x764D2A: mov     [esp+30h+var_18], eax
0x764D2E: fmulp   st(1), st
0x764D30: call    Double_To_SInt32
0x764D35: jmp     short loc_764D43
0x764D37: mov     [esp+30h+var_20], ecx
0x764D3B: mov     [esp+30h+var_1C], ecx
0x764D3F: mov     [esp+30h+var_18], ebp
0x764D43: mov     ecx, [esi+87Ch]
0x764D49: mov     [esp+30h+var_14], eax
0x764D4D: mov     eax, [ecx]
0x764D4F: mov     edx, [eax+84h]
0x764D55: mov     edi, ebx
0x764D57: and     edi, 1
0x764D5A: call    edx
0x764D5C: push    eax
0x764D5D: push    offset unk_B4263C
0x764D62: call    sub_497DD0
0x764D67: mov     ebp, eax
0x764D69: add     esp, 8
0x764D6C: test    ebp, ebp
0x764D6E: jz      short loc_764DA6
0x764D70: test    bl, 4
0x764D73: jz      short loc_764D87
0x764D75: mov     ecx, ebp
0x764D77: call    sub_76D4F0
0x764D7C: test    al, al
0x764D7E: jz      short loc_764D87
0x764D80: mov     eax, 2
0x764D85: jmp     short loc_764D89
0x764D87: xor     eax, eax
0x764D89: or      edi, eax
0x764D8B: test    bl, 2
0x764D8E: jz      short loc_764DA2
0x764D90: mov     ecx, ebp
0x764D92: call    sub_76D510
0x764D97: test    al, al
0x764D99: jz      short loc_764DA2
0x764D9B: mov     eax, 4
0x764DA0: jmp     short loc_764DA4
0x764DA2: xor     eax, eax
0x764DA4: or      edi, eax
0x764DA6: mov     eax, [esi+280h]
0x764DAC: mov     ecx, [eax]
0x764DAE: lea     edx, [esp+30h+var_10]
0x764DB2: push    edx
0x764DB3: push    eax
0x764DB4: mov     eax, [ecx+0C0h]
0x764DBA: call    eax
0x764DBC: mov     ecx, [esi+87Ch]
0x764DC2: mov     edx, [ecx]
0x764DC4: mov     eax, [edx+4Ch]
0x764DC7: push    0
0x764DC9: call    eax
0x764DCB: mov     ecx, [esi+87Ch]
0x764DD1: mov     [esi+6C8h], eax
0x764DD7: mov     edx, [ecx]
0x764DD9: mov     eax, [edx+50h]
0x764DDC: push    0
0x764DDE: call    eax
0x764DE0: mov     [esi+6CCh], eax
0x764DE6: mov     eax, [esi+280h]
0x764DEC: mov     ecx, [eax]
0x764DEE: lea     edx, [esi+6C0h]
0x764DF4: push    edx
0x764DF5: push    eax
0x764DF6: mov     eax, [ecx+0BCh]
0x764DFC: call    eax
0x764DFE: fld     dword ptr [esi+5D8h]
0x764E04: mov     eax, [esi+280h]
0x764E0A: mov     edx, [esi+5DCh]
0x764E10: mov     ecx, [eax]
0x764E12: push    edx
0x764E13: mov     edx, [esi+5D4h]
0x764E19: push    ecx
0x764E1A: fstp    [esp+40h+var_40]
0x764E1D: push    edx
0x764E1E: push    edi
0x764E1F: lea     edx, [esp+48h+var_28]
0x764E23: push    edx
0x764E24: push    1
0x764E26: push    eax
0x764E27: mov     eax, [ecx+0ACh]
0x764E2D: call    eax
0x764E2F: mov     esi, [esi+280h]
0x764E35: mov     ecx, [esi]
0x764E37: mov     eax, [ecx+0BCh]
0x764E3D: lea     edx, [esp+38h+var_18]
0x764E41: push    edx
0x764E42: push    esi
0x764E43: call    eax
0x764E45: pop     edi
0x764E46: pop     ebp
0x764E47: pop     esi
0x764E48: pop     ebx
0x764E49: add     esp, 28h
0x764E4C: retn    8
