0x753E20: sub     esp, 18h
0x753E23: push    ebx
0x753E24: mov     ebx, [esp+1Ch+arg_4]
0x753E28: push    ebp
0x753E29: push    edi
0x753E2A: xor     edi, edi
0x753E2C: cmp     [ebx+48h], di
0x753E30: mov     ebp, ecx
0x753E32: jbe     loc_753F00
0x753E38: push    esi
0x753E39: lea     esp, [esp+0]
0x753E40: mov     edx, [ebx+5Ch]
0x753E43: movzx   eax, di
0x753E46: lea     ecx, ds:0[eax*8]
0x753E4D: sub     ecx, eax
0x753E4F: lea     esi, [edx+ecx*4]
0x753E52: call    _rand
0x753E57: mov     [esp+28h+arg_4], eax
0x753E5B: fild    [esp+28h+arg_4]
0x753E5F: fadd    st, st
0x753E61: fdiv    qword ptr ds:0A3D5A8h
0x753E67: fsub    qword ptr ds:0A2F928h
0x753E6D: fstp    [esp+28h+var_18]
0x753E71: call    _rand
0x753E76: mov     [esp+28h+arg_4], eax
0x753E7A: fild    [esp+28h+arg_4]
0x753E7E: fadd    st, st
0x753E80: fdiv    qword ptr ds:0A3D5A8h
0x753E86: fsub    qword ptr ds:0A2F928h
0x753E8C: fstp    [esp+28h+var_14]
0x753E90: call    _rand
0x753E95: mov     [esp+28h+arg_4], eax
0x753E99: fild    [esp+28h+arg_4]
0x753E9D: add     edi, 1
0x753EA0: fadd    st, st
0x753EA2: fdiv    qword ptr ds:0A3D5A8h
0x753EA8: fsub    qword ptr ds:0A2F928h
0x753EAE: fstp    [esp+28h+var_10]
0x753EB2: fld     dword ptr [ebp+1Ch]
0x753EB5: fstp    [esp+28h+arg_4]
0x753EB9: fld     [esp+28h+arg_4]
0x753EBD: fld     st
0x753EBF: fmul    [esp+28h+var_18]
0x753EC3: fstp    [esp+28h+var_C]
0x753EC7: fld     st
0x753EC9: fmul    [esp+28h+var_14]
0x753ECD: fstp    [esp+28h+var_8]
0x753ED1: fmul    [esp+28h+var_10]
0x753ED5: fstp    [esp+28h+var_4]
0x753ED9: fld     dword ptr [esi]
0x753EDB: fadd    [esp+28h+var_C]
0x753EDF: fstp    dword ptr [esi]
0x753EE1: fld     dword ptr [esi+4]
0x753EE4: fadd    [esp+28h+var_8]
0x753EE8: fstp    dword ptr [esi+4]
0x753EEB: fld     dword ptr [esi+8]
0x753EEE: fadd    [esp+28h+var_4]
0x753EF2: fstp    dword ptr [esi+8]
0x753EF5: cmp     di, [ebx+48h]
0x753EF9: jb      loc_753E40
0x753EFF: pop     esi
0x753F00: pop     edi
0x753F01: pop     ebp
0x753F02: pop     ebx
0x753F03: add     esp, 18h
0x753F06: retn    8
