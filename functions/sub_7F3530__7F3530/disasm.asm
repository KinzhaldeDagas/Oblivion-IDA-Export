0x7F3530: cmp     byte ptr [esp+arg_C], 0
0x7F3535: push    esi
0x7F3536: mov     esi, ecx
0x7F3538: jnz     short loc_7F3555
0x7F353A: fld     [esp+4+arg_4]
0x7F353E: sub     esp, 8
0x7F3541: fstp    [esp+0Ch+var_8]; float
0x7F3545: fld     [esp+0Ch+arg_0]
0x7F3549: fstp    [esp+0Ch+var_C]; float
0x7F354C: call    sub_7F3220
0x7F3551: pop     esi
0x7F3552: retn    10h
0x7F3555: fld     [esp+4+arg_0]
0x7F3559: fld     st
0x7F355B: fmul    [esp+4+arg_8]
0x7F355F: fstp    [esp+4+arg_C]
0x7F3563: fild    dword ptr [esi+194h]
0x7F3569: fdiv    dword ptr [esi+7Ch]
0x7F356C: fmulp   st(1), st
0x7F356E: call    Double_To_SInt32
0x7F3573: test    eax, eax
0x7F3575: jg      short loc_7F357C
0x7F3577: mov     eax, 1
0x7F357C: push    eax
0x7F357D: mov     ecx, esi
0x7F357F: call    sub_7F2BA0
0x7F3584: fld     dword ptr [esi+18Ch]
0x7F358A: fadd    [esp+4+arg_C]
0x7F358E: fstp    dword ptr [esi+18Ch]
0x7F3594: pop     esi
0x7F3595: retn    10h
