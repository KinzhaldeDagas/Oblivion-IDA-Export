0x7E4D20: sub     esp, 3Ch
0x7E4D23: push    ebx
0x7E4D24: push    esi
0x7E4D25: push    edi
0x7E4D26: mov     edi, ecx
0x7E4D28: cmp     word ptr [edi+11Ah], 0
0x7E4D30: jbe     loc_7E4F8B
0x7E4D36: call    _rand
0x7E4D3B: movzx   ecx, word ptr [edi+11Ah]
0x7E4D42: xor     edx, edx
0x7E4D44: div     ecx
0x7E4D46: mov     eax, [edi+114h]
0x7E4D4C: mov     esi, [eax+edx*4]
0x7E4D4F: test    esi, esi
0x7E4D51: jz      short loc_7E4D36
0x7E4D53: cmp     word ptr [esi+0B8h], 0
0x7E4D5B: jbe     loc_7E4EC3
0x7E4D61: mov     ebx, [esi+1Ch]
0x7E4D64: test    ebx, ebx
0x7E4D66: jz      loc_7E4EC3
0x7E4D6C: call    _rand
0x7E4D71: mov     [esp+48h+var_3C], eax
0x7E4D75: fild    [esp+48h+var_3C]
0x7E4D79: fdiv    qword ptr ds:0A3D5A8h
0x7E4D7F: fstp    [esp+48h+var_3C]
0x7E4D83: fld     [esp+48h+var_3C]
0x7E4D87: fld     st
0x7E4D89: fld1
0x7E4D8B: fsubrp  st(1), st
0x7E4D8D: fstp    [esp+48h+var_3C]
0x7E4D91: fld     dword ptr [ebx+88h]
0x7E4D97: fld     [esp+48h+var_3C]
0x7E4D9B: fld     st
0x7E4D9D: fmulp   st(2), st
0x7E4D9F: fxch    st(1)
0x7E4DA1: fstp    dword ptr [esp+48h+var_24]
0x7E4DA5: fld     dword ptr [ebx+8Ch]
0x7E4DAB: fmul    st, st(1)
0x7E4DAD: fstp    dword ptr [esp+48h+var_24+4]
0x7E4DB1: fmul    dword ptr [ebx+90h]
0x7E4DB7: fstp    [esp+48h+var_1C]
0x7E4DBB: fld     dword ptr [esi+88h]
0x7E4DC1: fmul    st, st(1)
0x7E4DC3: fstp    [esp+48h+var_18]
0x7E4DC7: fld     dword ptr [esi+8Ch]
0x7E4DCD: fmul    st, st(1)
0x7E4DCF: fstp    [esp+48h+var_14]
0x7E4DD3: fmul    dword ptr [esi+90h]
0x7E4DD9: fstp    [esp+48h+var_10]
0x7E4DDD: fld     [esp+48h+var_18]
0x7E4DE1: fadd    dword ptr [esp+48h+var_24]
0x7E4DE5: fstp    [esp+48h+var_C]
0x7E4DE9: mov     ecx, [esp+48h+var_C]
0x7E4DED: fld     [esp+48h+var_14]
0x7E4DF1: mov     dword ptr [esp+48h+var_24], ecx
0x7E4DF5: fadd    dword ptr [esp+48h+var_24+4]
0x7E4DF9: fstp    [esp+48h+var_8]
0x7E4DFD: mov     edx, [esp+48h+var_8]
0x7E4E01: fld     [esp+48h+var_1C]
0x7E4E05: mov     dword ptr [esp+48h+var_24+4], edx
0x7E4E09: fadd    [esp+48h+var_10]
0x7E4E0D: fstp    [esp+48h+var_4]
0x7E4E11: mov     eax, [esp+48h+var_4]
0x7E4E15: mov     [esp+48h+var_1C], eax
0x7E4E19: call    _rand
0x7E4E1E: mov     [esp+48h+var_3C], eax
0x7E4E22: fild    [esp+48h+var_3C]
0x7E4E26: fadd    st, st
0x7E4E28: fdiv    qword ptr ds:0A3D5A8h
0x7E4E2E: fsub    qword ptr ds:0A2F928h
0x7E4E34: fstp    [esp+48h+var_3C]
0x7E4E38: fld     [esp+48h+var_3C]
0x7E4E3C: fstp    [esp+48h+var_38]
0x7E4E40: call    _rand
0x7E4E45: mov     [esp+48h+var_3C], eax
0x7E4E49: fild    [esp+48h+var_3C]
0x7E4E4D: fadd    st, st
0x7E4E4F: fdiv    qword ptr ds:0A3D5A8h
0x7E4E55: fsub    qword ptr ds:0A2F928h
0x7E4E5B: fstp    [esp+48h+var_3C]
0x7E4E5F: fld     [esp+48h+var_3C]
0x7E4E63: fstp    [esp+48h+var_C]
0x7E4E67: mov     ecx, [esp+48h+var_C]
0x7E4E6B: fldz
0x7E4E6D: mov     dword ptr [esp+48h+var_30], ecx
0x7E4E71: fstp    [esp+48h+var_8]
0x7E4E75: lea     ecx, [esp+48h+var_30]
0x7E4E79: fld     [esp+48h+var_38]
0x7E4E7D: mov     edx, [esp+48h+var_8]
0x7E4E81: fstp    [esp+48h+var_4]
0x7E4E85: mov     dword ptr [esp+48h+var_30+4], edx
0x7E4E89: mov     eax, [esp+48h+var_4]
0x7E4E8D: mov     [esp+48h+var_28], eax
0x7E4E91: call    sub_43F350
0x7E4E96: fstp    st
0x7E4E98: lea     ecx, [esp+48h+var_30]
0x7E4E9C: push    ecx
0x7E4E9D: lea     edx, [esp+4Ch+var_C]
0x7E4EA1: push    edx
0x7E4EA2: lea     ecx, [esi+64h]
0x7E4EA5: call    sub_7101F0
0x7E4EAA: mov     ecx, [eax]
0x7E4EAC: mov     dword ptr [esp+48h+var_30], ecx
0x7E4EB0: mov     edx, [eax+4]
0x7E4EB3: mov     dword ptr [esp+48h+var_30+4], edx
0x7E4EB7: mov     eax, [eax+8]
0x7E4EBA: mov     [esp+48h+var_28], eax
0x7E4EBE: jmp     loc_7E4FB4
0x7E4EC3: mov     ecx, [esi+88h]
0x7E4EC9: mov     edx, [esi+8Ch]
0x7E4ECF: mov     eax, [esi+90h]
0x7E4ED5: mov     dword ptr [esp+48h+var_24], ecx
0x7E4ED9: mov     dword ptr [esp+48h+var_24+4], edx
0x7E4EDD: mov     [esp+48h+var_1C], eax
0x7E4EE1: call    _rand
0x7E4EE6: mov     [esp+48h+var_38], eax
0x7E4EEA: fild    [esp+48h+var_38]
0x7E4EEE: fadd    st, st
0x7E4EF0: fdiv    qword ptr ds:0A3D5A8h
0x7E4EF6: fsub    qword ptr ds:0A2F928h
0x7E4EFC: fstp    [esp+48h+var_38]
0x7E4F00: fld     [esp+48h+var_38]
0x7E4F04: fstp    [esp+48h+var_34]
0x7E4F08: call    _rand
0x7E4F0D: mov     [esp+48h+var_38], eax
0x7E4F11: fild    [esp+48h+var_38]
0x7E4F15: fadd    st, st
0x7E4F17: fdiv    qword ptr ds:0A3D5A8h
0x7E4F1D: fsub    qword ptr ds:0A2F928h
0x7E4F23: fstp    [esp+48h+var_38]
0x7E4F27: fld     [esp+48h+var_38]
0x7E4F2B: fstp    [esp+48h+var_3C]
0x7E4F2F: call    _rand
0x7E4F34: mov     [esp+48h+var_38], eax
0x7E4F38: fild    [esp+48h+var_38]
0x7E4F3C: fadd    st, st
0x7E4F3E: fdiv    qword ptr ds:0A3D5A8h
0x7E4F44: fsub    qword ptr ds:0A2F928h
0x7E4F4A: fstp    [esp+48h+var_38]
0x7E4F4E: fld     [esp+48h+var_38]
0x7E4F52: fstp    [esp+48h+var_C]
0x7E4F56: mov     ecx, [esp+48h+var_C]
0x7E4F5A: fld     [esp+48h+var_3C]
0x7E4F5E: mov     dword ptr [esp+48h+var_30], ecx
0x7E4F62: fstp    [esp+48h+var_8]
0x7E4F66: mov     edx, [esp+48h+var_8]
0x7E4F6A: fld     [esp+48h+var_34]
0x7E4F6E: lea     ecx, [esp+48h+var_30]
0x7E4F72: fstp    [esp+48h+var_4]
0x7E4F76: mov     eax, [esp+48h+var_4]
0x7E4F7A: mov     dword ptr [esp+48h+var_30+4], edx
0x7E4F7E: mov     [esp+48h+var_28], eax
0x7E4F82: call    sub_43F350
0x7E4F87: fstp    st
0x7E4F89: jmp     short loc_7E4FB4
0x7E4F8B: mov     eax, ds:0B3F9A8h
0x7E4F90: mov     ecx, ds:0B3F9ACh
0x7E4F96: mov     edx, ds:0B3F9B0h
0x7E4F9C: mov     dword ptr [esp+48h+var_24], eax
0x7E4FA0: mov     dword ptr [esp+48h+var_24+4], ecx
0x7E4FA4: mov     [esp+48h+var_1C], edx
0x7E4FA8: mov     dword ptr [esp+48h+var_30], eax
0x7E4FAC: mov     dword ptr [esp+48h+var_30+4], ecx
0x7E4FB0: mov     [esp+48h+var_28], edx
0x7E4FB4: mov     ecx, [edi+6Ch]
0x7E4FB7: fld     dword ptr [esp+48h+var_24]
0x7E4FBB: mov     eax, [esp+48h+arg_0]
0x7E4FBF: shl     eax, 5
0x7E4FC2: fstp    dword ptr [eax+ecx]
0x7E4FC5: mov     edx, [edi+6Ch]
0x7E4FC8: fld     dword ptr [esp+48h+var_24+4]
0x7E4FCC: fstp    dword ptr [eax+edx+4]
0x7E4FD0: mov     ecx, [edi+6Ch]
0x7E4FD3: fld     [esp+48h+var_1C]
0x7E4FD7: fstp    dword ptr [eax+ecx+8]
0x7E4FDB: mov     edx, [edi+6Ch]
0x7E4FDE: fld     dword ptr [edi+0F8h]
0x7E4FE4: fstp    dword ptr [eax+edx+0Ch]
0x7E4FE8: mov     ecx, [edi+6Ch]
0x7E4FEB: fld     dword ptr [esp+48h+var_30]
0x7E4FEF: fstp    dword ptr [eax+ecx+10h]
0x7E4FF3: mov     edx, [edi+6Ch]
0x7E4FF6: fld     dword ptr [esp+48h+var_30+4]
0x7E4FFA: fstp    dword ptr [eax+edx+14h]
0x7E4FFE: mov     ecx, [edi+6Ch]
0x7E5001: fld     [esp+48h+var_28]
0x7E5005: pop     edi
0x7E5006: pop     esi
0x7E5007: fstp    dword ptr [eax+ecx+18h]
0x7E500B: pop     ebx
0x7E500C: add     esp, 3Ch
0x7E500F: retn    4
