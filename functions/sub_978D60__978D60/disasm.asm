0x978D60: sub     esp, 2Ch
0x978D63: mov     eax, [esp+2Ch+arg_0]
0x978D67: mov     ecx, [esp+2Ch+arg_4]
0x978D6B: push    ebx
0x978D6C: push    ebp
0x978D6D: push    esi
0x978D6E: mov     esi, [ecx+7Ch]
0x978D71: push    edi
0x978D72: mov     edi, [eax+7Ch]
0x978D75: fld     dword ptr [edi+4]
0x978D78: add     esi, 10h
0x978D7B: fstp    [esp+3Ch+var_2C]
0x978D7F: lea     ebp, [eax+8Ch]
0x978D85: fld     dword ptr ds:0A32048h
0x978D8B: lea     ebx, [ecx+8Ch]
0x978D91: fstp    [esp+3Ch+arg_0]
0x978D95: lea     eax, [esp+3Ch+var_18]
0x978D99: fld     dword ptr [edi+10h]
0x978D9C: push    eax; int
0x978D9D: fsub    dword ptr [esi]
0x978D9F: lea     ecx, [esp+40h+arg_0]
0x978DA3: push    ecx; int
0x978DA4: push    ecx
0x978DA5: fstp    [esp+48h+var_C]
0x978DA9: mov     edx, [esp+48h+var_C]
0x978DAD: fld     dword ptr [edi+14h]
0x978DB0: mov     [esp+48h+var_24], edx
0x978DB4: fsub    dword ptr [esi+4]
0x978DB7: fstp    [esp+48h+var_8]
0x978DBB: mov     edx, [esp+48h+var_8]
0x978DBF: fld     dword ptr [edi+18h]
0x978DC2: mov     [esp+48h+var_20], edx
0x978DC6: fsub    dword ptr [esi+8]
0x978DC9: fstp    [esp+48h+var_4]
0x978DCD: mov     edx, [esp+48h+var_4]
0x978DD1: fld     [esp+48h+var_2C]
0x978DD5: mov     [esp+48h+var_1C], edx
0x978DD9: fstp    [esp+48h+var_48]; float
0x978DDC: lea     edx, [esp+48h+var_24]
0x978DE0: push    edx; int
0x978DE1: push    ebx; int
0x978DE2: push    ebp; int
0x978DE3: call    sub_978C00
0x978DE8: fld     dword ptr ds:0A32048h
0x978DEE: fstp    [esp+54h+arg_4]
0x978DF2: mov     [esp+54h+var_28], eax
0x978DF6: fld     dword ptr [esi]
0x978DF8: add     esp, 18h
0x978DFB: fsub    dword ptr [edi+10h]
0x978DFE: fstp    [esp+3Ch+var_C]
0x978E02: mov     eax, [esp+3Ch+var_C]
0x978E06: fld     dword ptr [esi+4]
0x978E09: mov     [esp+3Ch+var_24], eax
0x978E0D: fsub    dword ptr [edi+14h]
0x978E10: lea     eax, [esp+3Ch+var_C]
0x978E14: push    eax; int
0x978E15: fstp    [esp+40h+var_8]
0x978E19: mov     ecx, [esp+40h+var_8]
0x978E1D: fld     dword ptr [esi+8]
0x978E20: mov     [esp+40h+var_20], ecx
0x978E24: fsub    dword ptr [edi+18h]
0x978E27: lea     ecx, [esp+40h+arg_4]
0x978E2B: push    ecx; int
0x978E2C: push    ecx
0x978E2D: fstp    [esp+48h+var_4]
0x978E31: mov     edx, [esp+48h+var_4]
0x978E35: fld     [esp+48h+var_2C]
0x978E39: mov     [esp+48h+var_1C], edx
0x978E3D: fstp    [esp+48h+var_48]; float
0x978E40: lea     edx, [esp+48h+var_24]
0x978E44: push    edx; int
0x978E45: push    ebp; int
0x978E46: push    ebx; int
0x978E47: call    sub_978C00
0x978E4C: add     esp, 18h
0x978E4F: cmp     [esp+3Ch+var_28], 0
0x978E54: jz      loc_978F3B
0x978E5A: test    eax, eax
0x978E5C: fld     [esp+3Ch+arg_0]
0x978E60: jz      short loc_978ED4
0x978E62: fld     [esp+3Ch+arg_4]
0x978E66: fcom    st(1)
0x978E68: fnstsw  ax
0x978E6A: test    ah, 1
0x978E6D: jnz     short loc_978EB1
0x978E6F: mov     eax, [esp+3Ch+arg_8]
0x978E73: fstp    st
0x978E75: fst     dword ptr [eax]
0x978E77: fld     dword ptr [esi]
0x978E79: fmul    st, st(1)
0x978E7B: fstp    [esp+3Ch+var_C]
0x978E7F: fld     dword ptr [esi+4]
0x978E82: fmul    st, st(1)
0x978E84: fstp    [esp+3Ch+var_8]
0x978E88: fmul    dword ptr [esi+8]
0x978E8B: fstp    [esp+3Ch+var_4]
0x978E8F: fld     [esp+3Ch+var_18]
0x978E93: fadd    [esp+3Ch+var_C]
0x978E97: fstp    [esp+3Ch+var_24]
0x978E9B: fld     [esp+3Ch+var_14]
0x978E9F: fadd    [esp+3Ch+var_8]
0x978EA3: fstp    [esp+3Ch+var_20]
0x978EA7: fld     [esp+3Ch+var_10]
0x978EAB: fadd    [esp+3Ch+var_4]
0x978EAF: jmp     short loc_978F12
0x978EB1: mov     edx, [esp+3Ch+arg_8]
0x978EB5: fstp    st(1)
0x978EB7: fst     dword ptr [edx]
0x978EB9: fld     dword ptr [edi+10h]
0x978EBC: fmul    st, st(1)
0x978EBE: fstp    [esp+3Ch+var_18]
0x978EC2: fld     dword ptr [edi+14h]
0x978EC5: fmul    st, st(1)
0x978EC7: fstp    [esp+3Ch+var_14]
0x978ECB: fmul    dword ptr [edi+18h]
0x978ECE: fstp    [esp+3Ch+var_10]
0x978ED2: jmp     short loc_978EF2
0x978ED4: mov     edx, [esp+3Ch+arg_8]
0x978ED8: fst     dword ptr [edx]
0x978EDA: fld     dword ptr [esi]
0x978EDC: fmul    st, st(1)
0x978EDE: fstp    [esp+3Ch+var_C]
0x978EE2: fld     dword ptr [esi+4]
0x978EE5: fmul    st, st(1)
0x978EE7: fstp    [esp+3Ch+var_8]
0x978EEB: fmul    dword ptr [esi+8]
0x978EEE: fstp    [esp+3Ch+var_4]
0x978EF2: fld     [esp+3Ch+var_C]
0x978EF6: fadd    [esp+3Ch+var_18]
0x978EFA: fstp    [esp+3Ch+var_24]
0x978EFE: fld     [esp+3Ch+var_8]
0x978F02: fadd    [esp+3Ch+var_14]
0x978F06: fstp    [esp+3Ch+var_20]
0x978F0A: fld     [esp+3Ch+var_4]
0x978F0E: fadd    [esp+3Ch+var_10]
0x978F12: mov     eax, [esp+3Ch+arg_C]
0x978F16: fstp    [esp+3Ch+var_1C]
0x978F1A: mov     ecx, [esp+3Ch+var_24]
0x978F1E: mov     edx, [esp+3Ch+var_20]
0x978F22: pop     edi
0x978F23: mov     [eax], ecx
0x978F25: mov     ecx, [esp+38h+var_1C]
0x978F29: pop     esi
0x978F2A: mov     [eax+4], edx
0x978F2D: pop     ebp
0x978F2E: mov     [eax+8], ecx
0x978F31: mov     eax, 1
0x978F36: pop     ebx
0x978F37: add     esp, 2Ch
0x978F3A: retn
0x978F3B: test    eax, eax
0x978F3D: jz      short loc_978F67
0x978F3F: fld     [esp+3Ch+arg_4]
0x978F43: mov     edx, [esp+3Ch+arg_8]
0x978F47: fst     dword ptr [edx]
0x978F49: fld     dword ptr [edi+10h]
0x978F4C: fmul    st, st(1)
0x978F4E: fstp    [esp+3Ch+var_18]
0x978F52: fld     dword ptr [edi+14h]
0x978F55: fmul    st, st(1)
0x978F57: fstp    [esp+3Ch+var_14]
0x978F5B: fmul    dword ptr [edi+18h]
0x978F5E: fstp    [esp+3Ch+var_10]
0x978F62: jmp     loc_978E8F
0x978F67: pop     edi
0x978F68: pop     esi
0x978F69: pop     ebp
0x978F6A: xor     eax, eax
0x978F6C: pop     ebx
0x978F6D: add     esp, 2Ch
0x978F70: retn
