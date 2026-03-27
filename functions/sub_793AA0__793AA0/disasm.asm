0x793AA0: sub     esp, 4Ch
0x793AA3: fld     [esp+4Ch+arg_0]
0x793AA7: push    esi
0x793AA8: fdiv    qword ptr ds:0A8BA48h
0x793AAE: push    edi
0x793AAF: mov     edi, ecx
0x793AB1: fstp    [esp+54h+arg_0]
0x793AB5: fld     [esp+54h+arg_0]
0x793AB9: call    __CIcos
0x793ABE: fstp    [esp+54h+var_4C]
0x793AC2: fld     [esp+54h+var_4C]
0x793AC6: fstp    [esp+54h+var_4C]
0x793ACA: fld     [esp+54h+arg_0]
0x793ACE: call    __CIsin
0x793AD3: fstp    [esp+54h+arg_0]
0x793AD7: fld     [esp+54h+arg_0]
0x793ADB: push    edi
0x793ADC: fstp    [esp+58h+arg_0]
0x793AE0: lea     eax, [esp+58h+var_24]
0x793AE4: fld     [esp+58h+var_4C]
0x793AE8: push    eax
0x793AE9: fst     [esp+5Ch+var_48]
0x793AED: lea     ecx, [esp+5Ch+var_48]
0x793AF1: fld     [esp+5Ch+arg_0]
0x793AF5: fst     [esp+5Ch+var_44]
0x793AF9: fldz
0x793AFB: fst     [esp+5Ch+var_40]
0x793AFF: fxch    st(1)
0x793B01: fchs
0x793B03: fstp    [esp+5Ch+var_3C]
0x793B07: fxch    st(1)
0x793B09: fstp    [esp+5Ch+var_38]
0x793B0D: fst     [esp+5Ch+var_34]
0x793B11: fst     [esp+5Ch+var_30]
0x793B15: fstp    [esp+5Ch+var_2C]
0x793B19: fld1
0x793B1B: fstp    [esp+5Ch+var_28]
0x793B1F: call    sub_78EDD0
0x793B24: mov     ecx, 9
0x793B29: mov     esi, eax
0x793B2B: rep movsd
0x793B2D: pop     edi
0x793B2E: pop     esi
0x793B2F: add     esp, 4Ch
0x793B32: retn    4
