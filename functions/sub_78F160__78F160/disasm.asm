0x78F160: sub     esp, 10h
0x78F163: fld     [esp+10h+arg_0]
0x78F167: push    esi
0x78F168: fdiv    qword ptr ds:0A8BA48h
0x78F16E: mov     esi, ecx
0x78F170: fstp    dword ptr [esp+14h+var_10]
0x78F174: fld     dword ptr [esp+14h+var_10]
0x78F178: call    __CIsin
0x78F17D: fstp    [esp+14h+arg_0]
0x78F181: fld     [esp+14h+arg_0]
0x78F185: fstp    [esp+14h+arg_0]
0x78F189: fld     dword ptr [esp+14h+var_10]
0x78F18D: call    __CIcos
0x78F192: fstp    dword ptr [esp+14h+var_10]
0x78F196: fld     dword ptr [esp+14h+var_10]
0x78F19A: fstp    dword ptr [esp+14h+var_10]
0x78F19E: fld     dword ptr [esp+14h+var_10]
0x78F1A2: fld     st
0x78F1A4: fld1
0x78F1A6: fsubrp  st(1), st
0x78F1A8: fstp    dword ptr [esp+14h+var_10]
0x78F1AC: fld     dword ptr [esp+14h+arg_4]
0x78F1B0: fld     st
0x78F1B2: fld     dword ptr [esp+14h+var_10]
0x78F1B6: fld     st
0x78F1B8: fmulp   st(2), st
0x78F1BA: fld     st(2)
0x78F1BC: fmul    st, st(2)
0x78F1BE: fadd    st, st(4)
0x78F1C0: fstp    dword ptr [esi]
0x78F1C2: fld     dword ptr [esp+14h+arg_4+4]
0x78F1C6: fld     st
0x78F1C8: fmul    st, st(3)
0x78F1CA: fstp    [esp+14h+var_10]
0x78F1CE: fld     [esp+14h+arg_C]
0x78F1D2: fld     st
0x78F1D4: fmul    [esp+14h+arg_0]
0x78F1D8: fst     [esp+14h+arg_4]
0x78F1DC: fadd    [esp+14h+var_10]
0x78F1E0: fstp    dword ptr [esi+4]
0x78F1E3: fld     st
0x78F1E5: fmulp   st(4), st
0x78F1E7: fld     st(1)
0x78F1E9: fmul    [esp+14h+arg_0]
0x78F1ED: fst     [esp+14h+var_8]
0x78F1F1: fsubr   st, st(4)
0x78F1F3: fstp    dword ptr [esi+8]
0x78F1F6: fld     [esp+14h+var_10]
0x78F1FA: fsub    [esp+14h+arg_4]
0x78F1FE: fstp    dword ptr [esi+0Ch]
0x78F201: fld     st(1)
0x78F203: fmul    st, st(3)
0x78F205: fmul    st(2), st
0x78F207: fld     st(6)
0x78F209: faddp   st(3), st
0x78F20B: fxch    st(2)
0x78F20D: fstp    dword ptr [esi+10h]
0x78F210: fld     st
0x78F212: fmulp   st(2), st
0x78F214: fld     [esp+14h+arg_0]
0x78F218: fmulp   st(5), st
0x78F21A: fld     st(4)
0x78F21C: fadd    st, st(2)
0x78F21E: fstp    dword ptr [esi+14h]
0x78F221: fld     [esp+14h+var_8]
0x78F225: faddp   st(4), st
0x78F227: fxch    st(3)
0x78F229: fstp    dword ptr [esi+18h]
0x78F22C: fsubrp  st(3), st
0x78F22E: fxch    st(2)
0x78F230: fstp    dword ptr [esi+1Ch]
0x78F233: fld     st
0x78F235: fmulp   st(2), st
0x78F237: fmulp   st(1), st
0x78F239: faddp   st(1), st
0x78F23B: fstp    dword ptr [esi+20h]
0x78F23E: pop     esi
0x78F23F: add     esp, 10h
0x78F242: retn    10h
