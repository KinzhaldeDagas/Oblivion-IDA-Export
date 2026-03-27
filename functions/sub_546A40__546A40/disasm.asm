0x546A40: sub     esp, 8
0x546A43: push    esi
0x546A44: mov     esi, [esp+0Ch+arg_0]
0x546A48: mov     ecx, esi
0x546A4A: call    sub_4A9D70
0x546A4F: fimul   [esp+0Ch+arg_4]
0x546A53: mov     ecx, esi
0x546A55: fstp    [esp+0Ch+var_8]
0x546A59: call    sub_4A9D30
0x546A5E: fadd    [esp+0Ch+var_8]
0x546A62: mov     ecx, esi
0x546A64: fstp    [esp+0Ch+arg_4]
0x546A68: call    sub_4A9CB0
0x546A6D: fld     [esp+0Ch+arg_8]
0x546A71: mov     ecx, esi
0x546A73: fld1
0x546A75: fsubrp  st(1), st
0x546A77: fmulp   st(1), st
0x546A79: fstp    [esp+0Ch+var_8]
0x546A7D: call    sub_4A9CF0
0x546A82: fadd    [esp+0Ch+var_8]
0x546A86: mov     eax, [esi]
0x546A88: mov     edx, [eax+0DCh]
0x546A8E: mov     ecx, esi
0x546A90: fstp    [esp+0Ch+arg_8]
0x546A94: call    edx
0x546A96: cmp     byte ptr [esp+0Ch+arg_C], 0
0x546A9B: movsx   eax, al
0x546A9E: mov     [esp+0Ch+arg_0], eax
0x546AA2: mov     ecx, esi
0x546AA4: fild    [esp+0Ch+arg_0]
0x546AA8: fadd    [esp+0Ch+arg_4]
0x546AAC: fadd    [esp+0Ch+arg_8]
0x546AB0: fstp    [esp+0Ch+arg_0]
0x546AB4: jz      short loc_546AD4
0x546AB6: call    sub_4A9DB0
0x546ABB: fstp    [esp+0Ch+arg_C]
0x546ABF: fld     [esp+0Ch+arg_C]
0x546AC3: pop     esi
0x546AC4: fmul    [esp+8+arg_0]
0x546AC8: fstp    [esp+8+arg_C]
0x546ACC: fld     [esp+8+arg_C]
0x546AD0: add     esp, 8
0x546AD3: retn
0x546AD4: call    sub_4A9DF0
0x546AD9: fstp    [esp+0Ch+arg_C]
0x546ADD: fld     [esp+0Ch+arg_C]
0x546AE1: pop     esi
0x546AE2: fmul    [esp+8+arg_0]
0x546AE6: fstp    [esp+8+arg_C]
0x546AEA: fld     [esp+8+arg_C]
0x546AEE: add     esp, 8
0x546AF1: retn
