0x78EF60: sub     esp, 50h
0x78EF63: fld     [esp+50h+arg_0]
0x78EF67: push    esi
0x78EF68: fdiv    qword ptr ds:0A8BA48h
0x78EF6E: push    edi
0x78EF6F: mov     edi, ecx
0x78EF71: fstp    [esp+58h+arg_0]
0x78EF75: fld     [esp+58h+arg_0]
0x78EF79: call    __CIcos
0x78EF7E: fstp    [esp+58h+var_50]
0x78EF82: fld     [esp+58h+var_50]
0x78EF86: fstp    [esp+58h+var_50]
0x78EF8A: fld     [esp+58h+arg_0]
0x78EF8E: call    __CIsin
0x78EF93: fstp    [esp+58h+arg_0]
0x78EF97: fld     [esp+58h+arg_0]
0x78EF9B: fstp    [esp+58h+var_4C]
0x78EF9F: fld     [esp+58h+arg_4]
0x78EFA3: fdiv    qword ptr ds:0A8BA48h
0x78EFA9: fstp    [esp+58h+arg_0]
0x78EFAD: fld     [esp+58h+arg_0]
0x78EFB1: call    __CIcos
0x78EFB6: fstp    [esp+58h+arg_4]
0x78EFBA: fld     [esp+58h+arg_4]
0x78EFBE: fstp    [esp+58h+arg_4]
0x78EFC2: fld     [esp+58h+arg_0]
0x78EFC6: call    __CIsin
0x78EFCB: fstp    [esp+58h+arg_0]
0x78EFCF: fld     [esp+58h+arg_0]
0x78EFD3: push    edi
0x78EFD4: fstp    [esp+5Ch+arg_0]
0x78EFD8: lea     eax, [esp+5Ch+var_24]
0x78EFDC: fld     [esp+5Ch+arg_4]
0x78EFE0: push    eax
0x78EFE1: fld     st
0x78EFE3: lea     ecx, [esp+60h+var_48]
0x78EFE7: fld     [esp+60h+var_50]
0x78EFEB: fld     st
0x78EFED: fmulp   st(2), st
0x78EFEF: fxch    st(1)
0x78EFF1: fstp    [esp+60h+var_48]
0x78EFF5: fld     [esp+60h+arg_0]
0x78EFF9: fld     st
0x78EFFB: fmul    st, st(2)
0x78EFFD: fstp    [esp+60h+var_44]
0x78F001: fld     [esp+60h+var_4C]
0x78F005: fld     st
0x78F007: fchs
0x78F009: fstp    [esp+60h+var_40]
0x78F00D: fld     st(1)
0x78F00F: fchs
0x78F011: fstp    [esp+60h+var_3C]
0x78F015: fxch    st(3)
0x78F017: fst     [esp+60h+var_38]
0x78F01B: fldz
0x78F01D: fstp    [esp+60h+var_34]
0x78F021: fmul    st, st(3)
0x78F023: fstp    [esp+60h+var_30]
0x78F027: fmulp   st(2), st
0x78F029: fxch    st(1)
0x78F02B: fstp    [esp+60h+var_2C]
0x78F02F: fstp    [esp+60h+var_28]
0x78F033: call    sub_78EDD0
0x78F038: mov     ecx, 9
0x78F03D: mov     esi, eax
0x78F03F: rep movsd
0x78F041: pop     edi
0x78F042: pop     esi
0x78F043: add     esp, 50h
0x78F046: retn    8
