0x78EEC0: sub     esp, 4Ch
0x78EEC3: fld     [esp+4Ch+arg_0]
0x78EEC7: push    esi
0x78EEC8: fdiv    qword ptr ds:0A8BA48h
0x78EECE: push    edi
0x78EECF: mov     edi, ecx
0x78EED1: fstp    [esp+54h+arg_0]
0x78EED5: fld     [esp+54h+arg_0]
0x78EED9: call    __CIcos
0x78EEDE: fstp    [esp+54h+var_4C]
0x78EEE2: fld     [esp+54h+var_4C]
0x78EEE6: fstp    [esp+54h+var_4C]
0x78EEEA: fld     [esp+54h+arg_0]
0x78EEEE: call    __CIsin
0x78EEF3: fstp    [esp+54h+arg_0]
0x78EEF7: fld     [esp+54h+arg_0]
0x78EEFB: push    edi
0x78EEFC: fstp    [esp+58h+arg_0]
0x78EF00: lea     eax, [esp+58h+var_24]
0x78EF04: fld     [esp+58h+var_4C]
0x78EF08: push    eax
0x78EF09: fst     [esp+5Ch+var_48]
0x78EF0D: lea     ecx, [esp+5Ch+var_48]
0x78EF11: fldz
0x78EF13: fst     [esp+5Ch+var_44]
0x78EF17: fld     [esp+5Ch+arg_0]
0x78EF1B: fld     st
0x78EF1D: fchs
0x78EF1F: fstp    [esp+5Ch+var_40]
0x78EF23: fxch    st(1)
0x78EF25: fst     [esp+5Ch+var_3C]
0x78EF29: fld1
0x78EF2B: fstp    [esp+5Ch+var_38]
0x78EF2F: fst     [esp+5Ch+var_34]
0x78EF33: fstp    [esp+5Ch+var_2C]
0x78EF37: fstp    [esp+5Ch+var_30]
0x78EF3B: fstp    [esp+5Ch+var_28]
0x78EF3F: call    sub_78EDD0
0x78EF44: mov     ecx, 9
0x78EF49: mov     esi, eax
0x78EF4B: rep movsd
0x78EF4D: pop     edi
0x78EF4E: pop     esi
0x78EF4F: add     esp, 4Ch
0x78EF52: retn    4
