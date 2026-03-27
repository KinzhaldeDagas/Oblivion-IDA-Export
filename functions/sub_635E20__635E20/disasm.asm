0x635E20: mov     eax, ds:0B333CCh
0x635E25: sub     esp, 0Ch
0x635E28: cmp     word ptr [eax+0B6h], 0
0x635E30: push    esi
0x635E31: push    edi
0x635E32: mov     edi, ecx
0x635E34: ja      short loc_635E3A
0x635E36: xor     esi, esi
0x635E38: jmp     short loc_635E42
0x635E3A: mov     eax, [eax+0B0h]
0x635E40: mov     esi, [eax]
0x635E42: mov     ecx, [esp+14h+arg_0]
0x635E46: mov     edx, [ecx]
0x635E48: mov     eax, [edx+174h]
0x635E4E: call    eax
0x635E50: fld     dword ptr [eax]
0x635E52: fsub    dword ptr [esi+54h]
0x635E55: fstp    [esp+14h+var_C]
0x635E59: fld     dword ptr [eax+4]
0x635E5C: fsub    dword ptr [esi+58h]
0x635E5F: fstp    [esp+14h+var_8]
0x635E63: fld     dword ptr [eax+8]
0x635E66: fsub    dword ptr [esi+5Ch]
0x635E69: fstp    [esp+14h+var_4]
0x635E6D: fld     [esp+14h+var_8]
0x635E71: fld     [esp+14h+var_C]
0x635E75: fld     [esp+14h+var_4]
0x635E79: fld     st(1)
0x635E7B: fmulp   st(2), st
0x635E7D: fld     st(2)
0x635E7F: fmulp   st(3), st
0x635E81: fxch    st(1)
0x635E83: faddp   st(2), st
0x635E85: fmul    st, st
0x635E87: faddp   st(1), st
0x635E89: fstp    [esp+14h+arg_0]
0x635E8D: fld     [esp+14h+arg_0]
0x635E91: call    __CIsqrt
0x635E96: fstp    [esp+14h+arg_0]
0x635E9A: fld     [esp+14h+arg_0]
0x635E9E: mov     ecx, ds:0B333CCh
0x635EA4: mov     edx, [ecx+0DCh]
0x635EAA: fabs
0x635EAC: fstp    [esp+14h+arg_0]
0x635EB0: fld     [esp+14h+arg_0]
0x635EB4: fmul    qword ptr ds:0A2F910h
0x635EBA: fmul    dword ptr [edx+120h]
0x635EC0: fld     dword ptr ds:0B0762Ch
0x635EC6: fmul    dword ptr ds:0B075F0h
0x635ECC: fstp    [esp+14h+arg_0]
0x635ED0: fld     [esp+14h+arg_0]
0x635ED4: fimul   dword ptr ds:0B367A0h
0x635EDA: fdivp   st(1), st
0x635EDC: call    Double_To_SInt32
0x635EE1: mov     ecx, [edi+1ECh]
0x635EE7: mov     esi, eax
0x635EE9: cmp     esi, [ecx+40h]
0x635EEC: jl      short loc_635EF1
0x635EEE: or      esi, 0FFFFFFFFh
0x635EF1: cmp     esi, [edi+1F0h]
0x635EF7: jz      short loc_635F05
0x635EF9: push    esi
0x635EFA: call    sub_6FD5D0
0x635EFF: mov     [edi+1F0h], esi
0x635F05: pop     edi
0x635F06: pop     esi
0x635F07: add     esp, 0Ch
0x635F0A: retn    4
