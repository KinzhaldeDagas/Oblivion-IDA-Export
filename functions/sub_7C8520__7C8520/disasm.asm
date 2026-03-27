0x7C8520: sub     esp, 8Ch
0x7C8526: fldz
0x7C8528: mov     ecx, [esp+8Ch+arg_0]
0x7C852F: fst     [esp+8Ch+var_48]
0x7C8533: lea     eax, [esp+8Ch+var_40]
0x7C8537: fst     [esp+8Ch+var_4C]
0x7C853B: push    eax
0x7C853C: fst     [esp+90h+var_50]
0x7C8540: fst     [esp+90h+var_54]
0x7C8544: fst     [esp+90h+var_5C]
0x7C8548: fst     [esp+90h+var_60]
0x7C854C: fst     [esp+90h+var_64]
0x7C8550: fst     [esp+90h+var_68]
0x7C8554: fst     [esp+90h+var_70]
0x7C8558: fst     [esp+90h+var_74]
0x7C855C: fst     [esp+90h+var_78]
0x7C8560: fstp    [esp+90h+var_7C]
0x7C8564: fld1
0x7C8566: fst     [esp+90h+var_44]
0x7C856A: fst     [esp+90h+var_58]
0x7C856E: fst     [esp+90h+var_6C]
0x7C8572: fstp    [esp+90h+var_80]
0x7C8576: call    sub_718A80
0x7C857B: fld     [esp+8Ch+var_40]
0x7C857F: fld     [esp+8Ch+var_10]
0x7C8583: lea     ecx, [esp+8Ch+var_80]
0x7C8587: fld     st
0x7C8589: push    ecx
0x7C858A: fmulp   st(2), st
0x7C858C: lea     edx, [esp+90h+var_8C]
0x7C8590: fxch    st(1)
0x7C8592: push    edx
0x7C8593: lea     eax, [esp+94h+var_C]
0x7C859A: push    eax
0x7C859B: fstp    [esp+98h+var_80]
0x7C859F: fld     [esp+98h+var_34]
0x7C85A3: fmul    st, st(1)
0x7C85A5: fstp    [esp+98h+var_7C]
0x7C85A9: fld     [esp+98h+var_28]
0x7C85AD: fmul    st, st(1)
0x7C85AF: fstp    [esp+98h+var_78]
0x7C85B3: fld     [esp+98h+var_3C]
0x7C85B7: fmul    st, st(1)
0x7C85B9: fstp    [esp+98h+var_70]
0x7C85BD: fld     [esp+98h+var_30]
0x7C85C1: fmul    st, st(1)
0x7C85C3: fstp    [esp+98h+var_6C]
0x7C85C7: fld     [esp+98h+var_24]
0x7C85CB: fmul    st, st(1)
0x7C85CD: fstp    [esp+98h+var_68]
0x7C85D1: fld     [esp+98h+var_38]
0x7C85D5: fmul    st, st(1)
0x7C85D7: fstp    [esp+98h+var_60]
0x7C85DB: fld     [esp+98h+var_2C]
0x7C85DF: fmul    st, st(1)
0x7C85E1: fstp    [esp+98h+var_5C]
0x7C85E5: fmul    [esp+98h+var_20]
0x7C85E9: fstp    [esp+98h+var_58]
0x7C85ED: fld     [esp+98h+var_1C]
0x7C85F1: fstp    [esp+98h+var_50]
0x7C85F5: fld     [esp+98h+var_18]
0x7C85FC: fstp    [esp+98h+var_4C]
0x7C8600: fld     [esp+98h+var_14]
0x7C8607: fstp    [esp+98h+var_48]
0x7C860B: fld1
0x7C860D: fstp    [esp+98h+var_44]
0x7C8611: fld     dword ptr ds:0B465A8h
0x7C8617: fchs
0x7C8619: fstp    [esp+98h+var_8C]
0x7C861D: fld     dword ptr ds:0B465ACh
0x7C8623: fchs
0x7C8625: fstp    [esp+98h+var_88]
0x7C8629: fld     dword ptr ds:0B465B0h
0x7C862F: fchs
0x7C8631: fstp    [esp+98h+var_84]
0x7C8635: call    D3DXVec3TransformNormal_0
0x7C863A: lea     ecx, [esp+8Ch+var_C]
0x7C8641: push    ecx
0x7C8642: lea     edx, [esp+90h+var_8C]
0x7C8646: push    edx
0x7C8647: call    D3DXVec3Normalize_0
0x7C864C: fld     [esp+8Ch+var_8C]
0x7C864F: fstp    dword ptr ds:0B454D8h
0x7C8655: fld     [esp+8Ch+var_88]
0x7C8659: fstp    dword ptr ds:0B454DCh
0x7C865F: fld     [esp+8Ch+var_84]
0x7C8663: fstp    dword ptr ds:0B454E0h
0x7C8669: fldz
0x7C866B: fstp    dword ptr ds:0B454E4h
0x7C8671: add     esp, 8Ch
0x7C8677: retn    4
