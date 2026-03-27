0x793A00: sub     esp, 4Ch
0x793A03: fld     [esp+4Ch+arg_0]
0x793A07: push    esi
0x793A08: fdiv    qword ptr ds:0A8BA48h
0x793A0E: push    edi
0x793A0F: mov     edi, ecx
0x793A11: fstp    [esp+54h+arg_0]
0x793A15: fld     [esp+54h+arg_0]
0x793A19: call    __CIcos
0x793A1E: fstp    [esp+54h+var_4C]
0x793A22: fld     [esp+54h+var_4C]
0x793A26: fstp    [esp+54h+var_4C]
0x793A2A: fld     [esp+54h+arg_0]
0x793A2E: call    __CIsin
0x793A33: fstp    [esp+54h+arg_0]
0x793A37: fld     [esp+54h+arg_0]
0x793A3B: push    edi
0x793A3C: fstp    [esp+58h+arg_0]
0x793A40: lea     eax, [esp+58h+var_24]
0x793A44: fld1
0x793A46: push    eax
0x793A47: fstp    [esp+5Ch+var_48]
0x793A4B: lea     ecx, [esp+5Ch+var_48]
0x793A4F: fldz
0x793A51: fst     [esp+5Ch+var_44]
0x793A55: fst     [esp+5Ch+var_40]
0x793A59: fst     [esp+5Ch+var_3C]
0x793A5D: fld     [esp+5Ch+var_4C]
0x793A61: fst     [esp+5Ch+var_38]
0x793A65: fld     [esp+5Ch+arg_0]
0x793A69: fst     [esp+5Ch+var_34]
0x793A6D: fxch    st(2)
0x793A6F: fstp    [esp+5Ch+var_30]
0x793A73: fxch    st(1)
0x793A75: fchs
0x793A77: fstp    [esp+5Ch+var_2C]
0x793A7B: fstp    [esp+5Ch+var_28]
0x793A7F: call    sub_78EDD0
0x793A84: mov     ecx, 9
0x793A89: mov     esi, eax
0x793A8B: rep movsd
0x793A8D: pop     edi
0x793A8E: pop     esi
0x793A8F: add     esp, 4Ch
0x793A92: retn    4
