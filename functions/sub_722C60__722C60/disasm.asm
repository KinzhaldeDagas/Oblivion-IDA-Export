0x722C60: sub     esp, 88h
0x722C66: push    ebx
0x722C67: push    ebp
0x722C68: mov     ebp, ecx
0x722C6A: mov     ecx, [ebp+0B4h]
0x722C70: mov     eax, [ecx]
0x722C72: mov     edx, [eax+50h]
0x722C75: push    esi
0x722C76: push    edi
0x722C77: call    edx
0x722C79: cmp     [esp+98h+arg_8], 0
0x722C81: movzx   ebx, ax
0x722C84: mov     eax, [ebp+0B4h]
0x722C8A: mov     ecx, [eax+1Ch]
0x722C8D: mov     esi, [eax+20h]
0x722C90: mov     [esp+98h+var_88], ebx
0x722C94: mov     [esp+98h+var_68], ecx
0x722C98: mov     [esp+98h+var_64], esi
0x722C9C: jz      loc_722E35
0x722CA2: mov     ebx, [esp+98h+arg_0]
0x722CA9: lea     edi, [ebp+30h]
0x722CAC: push    edi
0x722CAD: lea     eax, [esp+9Ch+var_54]
0x722CB1: push    eax
0x722CB2: mov     ecx, ebx
0x722CB4: call    NiMAtrix33_Multiply
0x722CB9: push    eax
0x722CBA: lea     ecx, [esp+9Ch+var_24]
0x722CBE: push    ecx
0x722CBF: mov     ecx, edi
0x722CC1: call    sub_710490
0x722CC6: lea     esi, [ebp+54h]
0x722CC9: push    esi
0x722CCA: lea     edx, [esp+9Ch+var_30]
0x722CCE: push    edx
0x722CCF: mov     ecx, ebx
0x722CD1: call    sub_7101F0
0x722CD6: fld     dword ptr [eax]
0x722CD8: mov     ecx, [esp+98h+arg_4]
0x722CDF: fadd    dword ptr [ecx]
0x722CE1: push    edi
0x722CE2: fstp    [esp+9Ch+var_78]
0x722CE6: fld     dword ptr [eax+4]
0x722CE9: fadd    dword ptr [ecx+4]
0x722CEC: fstp    [esp+9Ch+var_74]
0x722CF0: fld     dword ptr [eax+8]
0x722CF3: lea     eax, [esp+9Ch+var_84]
0x722CF7: fadd    dword ptr [ecx+8]
0x722CFA: push    eax
0x722CFB: lea     ecx, [esp+0A0h+var_60]
0x722CFF: push    ecx
0x722D00: fstp    [esp+0A4h+var_70]
0x722D04: fld     [esp+0A4h+var_78]
0x722D08: fsub    dword ptr [esi]
0x722D0A: fstp    [esp+0A4h+var_84]
0x722D0E: fld     [esp+0A4h+var_74]
0x722D12: fsub    dword ptr [esi+4]
0x722D15: fstp    [esp+0A4h+var_80]
0x722D19: fld     [esp+0A4h+var_70]
0x722D1D: fsub    dword ptr [esi+8]
0x722D20: fstp    [esp+0A4h+var_7C]
0x722D24: fld     dword ptr [ebp+60h]
0x722D27: fstp    [esp+0A4h+var_6C]
0x722D2B: call    sub_710250
0x722D30: fld     [esp+0A4h+var_6C]
0x722D34: mov     esi, [esp+0A4h+var_68]
0x722D38: fld1
0x722D3A: add     esp, 0Ch
0x722D3D: test    esi, esi
0x722D3F: fdivrp  st(1), st
0x722D41: fstp    [esp+98h+var_6C]
0x722D45: fld     dword ptr [eax]
0x722D47: fld     [esp+98h+var_6C]
0x722D4B: fld     st
0x722D4D: fmulp   st(2), st
0x722D4F: fxch    st(1)
0x722D51: fstp    [esp+98h+var_78]
0x722D55: fld     dword ptr [eax+4]
0x722D58: fmul    st, st(1)
0x722D5A: fstp    [esp+98h+var_74]
0x722D5E: fmul    dword ptr [eax+8]
0x722D61: fstp    [esp+98h+var_70]
0x722D65: jz      short loc_722DBF
0x722D67: mov     eax, [esp+98h+var_88]
0x722D6B: test    ax, ax
0x722D6E: jbe     short loc_722DBF
0x722D70: movzx   edi, ax
0x722D73: push    esi
0x722D74: lea     edx, [esp+9Ch+var_60]
0x722D78: push    edx
0x722D79: lea     ecx, [esp+0A0h+var_24]
0x722D7D: call    sub_7101F0
0x722D82: fld     [esp+98h+var_78]
0x722D86: fadd    dword ptr [eax]
0x722D88: add     esi, 0Ch
0x722D8B: sub     edi, 1
0x722D8E: fstp    [esp+98h+var_84]
0x722D92: fld     dword ptr [eax+4]
0x722D95: fadd    [esp+98h+var_74]
0x722D99: fstp    [esp+98h+var_80]
0x722D9D: mov     ecx, [esp+98h+var_80]
0x722DA1: fld     dword ptr [eax+8]
0x722DA4: mov     eax, [esp+98h+var_84]
0x722DA8: fadd    [esp+98h+var_70]
0x722DAC: mov     [esi-0Ch], eax
0x722DAF: mov     [esi-8], ecx
0x722DB2: fstp    [esp+98h+var_7C]
0x722DB6: mov     edx, [esp+98h+var_7C]
0x722DBA: mov     [esi-4], edx
0x722DBD: jnz     short loc_722D73
0x722DBF: mov     esi, [esp+98h+var_64]
0x722DC3: test    esi, esi
0x722DC5: jz      short loc_722E0D
0x722DC7: lea     eax, [esp+98h+var_54]
0x722DCB: push    eax
0x722DCC: lea     ecx, [esp+9Ch+var_24]
0x722DD0: call    sub_7102B0
0x722DD5: cmp     word ptr [esp+98h+var_88], 0
0x722DDB: jbe     short loc_722E0D
0x722DDD: movzx   edi, word ptr [esp+98h+var_88]
0x722DE2: lea     ecx, [esp+98h+var_54]
0x722DE6: push    ecx
0x722DE7: lea     edx, [esp+9Ch+var_60]
0x722DEB: push    esi
0x722DEC: push    edx
0x722DED: call    sub_710250
0x722DF2: mov     ecx, [eax]
0x722DF4: mov     [esi], ecx
0x722DF6: mov     edx, [eax+4]
0x722DF9: mov     [esi+4], edx
0x722DFC: mov     eax, [eax+8]
0x722DFF: mov     [esi+8], eax
0x722E02: add     esp, 0Ch
0x722E05: add     esi, 0Ch
0x722E08: sub     edi, 1
0x722E0B: jnz     short loc_722DE2
0x722E0D: mov     ebx, [esp+98h+var_88]
0x722E11: mov     eax, [esp+98h+var_68]
0x722E15: movzx   ecx, bx
0x722E18: push    eax
0x722E19: push    ecx
0x722E1A: mov     ecx, [ebp+0B4h]
0x722E20: add     ecx, 0Ch
0x722E23: call    sub_72A0F0
0x722E28: pop     edi
0x722E29: pop     esi
0x722E2A: pop     ebp
0x722E2B: pop     ebx
0x722E2C: add     esp, 88h
0x722E32: retn    0Ch
0x722E35: test    ecx, ecx
0x722E37: jz      short loc_722EA3
0x722E39: test    bx, bx
0x722E3C: jbe     short loc_722EA3
0x722E3E: mov     edi, [esp+98h+arg_4]
0x722E45: mov     esi, ecx
0x722E47: movzx   ebx, bx
0x722E4A: lea     ebx, [ebx+0]
0x722E50: push    esi
0x722E51: lea     ecx, [esp+9Ch+var_60]
0x722E55: push    ecx
0x722E56: mov     ecx, [esp+0A0h+arg_0]
0x722E5D: call    sub_7101F0
0x722E62: fld     dword ptr [edi]
0x722E64: fadd    dword ptr [eax]
0x722E66: add     esi, 0Ch
0x722E69: sub     ebx, 1
0x722E6C: fstp    [esp+98h+var_84]
0x722E70: mov     edx, [esp+98h+var_84]
0x722E74: fld     dword ptr [eax+4]
0x722E77: fadd    dword ptr [edi+4]
0x722E7A: fstp    [esp+98h+var_80]
0x722E7E: fld     dword ptr [eax+8]
0x722E81: mov     eax, [esp+98h+var_80]
0x722E85: fadd    dword ptr [edi+8]
0x722E88: mov     [esi-0Ch], edx
0x722E8B: mov     [esi-8], eax
0x722E8E: fstp    [esp+98h+var_7C]
0x722E92: mov     ecx, [esp+98h+var_7C]
0x722E96: mov     [esi-4], ecx
0x722E99: jnz     short loc_722E50
0x722E9B: mov     ebx, [esp+98h+var_88]
0x722E9F: mov     esi, [esp+98h+var_64]
0x722EA3: test    esi, esi
0x722EA5: jz      loc_722E11
0x722EAB: mov     ecx, [esp+98h+arg_0]
0x722EB2: lea     edx, [esp+98h+var_54]
0x722EB6: push    edx
0x722EB7: call    sub_7102B0
0x722EBC: test    bx, bx
0x722EBF: jbe     loc_722E11
0x722EC5: movzx   edi, bx
0x722EC8: jmp     short loc_722ED0
0x722ECA: align 10h
0x722ED0: lea     eax, [esp+98h+var_54]
0x722ED4: push    eax
0x722ED5: lea     ecx, [esp+9Ch+var_60]
0x722ED9: push    esi
0x722EDA: push    ecx
0x722EDB: call    sub_710250
0x722EE0: mov     edx, [eax]
0x722EE2: mov     [esi], edx
0x722EE4: mov     ecx, [eax+4]
0x722EE7: mov     [esi+4], ecx
0x722EEA: mov     edx, [eax+8]
0x722EED: mov     [esi+8], edx
0x722EF0: add     esp, 0Ch
0x722EF3: add     esi, 0Ch
0x722EF6: sub     edi, 1
0x722EF9: jnz     short loc_722ED0
0x722EFB: jmp     loc_722E11
