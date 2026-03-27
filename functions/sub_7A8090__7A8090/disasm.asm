0x7A8090: sub     esp, 18h
0x7A8093: push    esi
0x7A8094: mov     esi, ecx
0x7A8096: fld     dword ptr [esi+4]
0x7A8099: push    edi
0x7A809A: mov     edi, [esp+20h+arg_0]
0x7A809E: fsub    dword ptr [edi]
0x7A80A0: fstp    [esp+20h+var_C]
0x7A80A4: fld     dword ptr [esi+8]
0x7A80A7: fsub    dword ptr [edi+4]
0x7A80AA: fstp    [esp+20h+var_8]
0x7A80AE: fld     dword ptr [esi+0Ch]
0x7A80B1: fsub    dword ptr [edi+8]
0x7A80B4: fstp    [esp+20h+var_4]
0x7A80B8: fld     [esp+20h+var_8]
0x7A80BC: fld     [esp+20h+var_C]
0x7A80C0: fld     [esp+20h+var_4]
0x7A80C4: fld     st(1)
0x7A80C6: fmulp   st(2), st
0x7A80C8: fld     st(2)
0x7A80CA: fmulp   st(3), st
0x7A80CC: fxch    st(1)
0x7A80CE: faddp   st(2), st
0x7A80D0: fmul    st, st
0x7A80D2: faddp   st(1), st
0x7A80D4: fstp    [esp+20h+arg_0]
0x7A80D8: fld     [esp+20h+arg_0]
0x7A80DC: call    __CIsqrt
0x7A80E1: fstp    [esp+20h+arg_0]
0x7A80E5: fld     [esp+20h+arg_0]
0x7A80E9: mov     eax, [esp+20h+arg_4]
0x7A80ED: fld1
0x7A80EF: fdivrp  st(1), st
0x7A80F1: fstp    [esp+20h+arg_0]
0x7A80F5: fld     [esp+20h+var_C]
0x7A80F9: fld     [esp+20h+arg_0]
0x7A80FD: fld     st
0x7A80FF: fmulp   st(2), st
0x7A8101: fxch    st(1)
0x7A8103: fstp    [esp+20h+var_C]
0x7A8107: fld     [esp+20h+var_8]
0x7A810B: fmul    st, st(1)
0x7A810D: fstp    [esp+20h+var_8]
0x7A8111: fmul    [esp+20h+var_4]
0x7A8115: fstp    [esp+20h+var_4]
0x7A8119: fld     dword ptr [eax]
0x7A811B: fsub    dword ptr [edi]
0x7A811D: fstp    [esp+20h+var_18]
0x7A8121: fld     dword ptr [eax+4]
0x7A8124: fsub    dword ptr [edi+4]
0x7A8127: fstp    [esp+20h+var_14]
0x7A812B: fld     dword ptr [eax+8]
0x7A812E: fsub    dword ptr [edi+8]
0x7A8131: fstp    [esp+20h+var_10]
0x7A8135: fld     [esp+20h+var_14]
0x7A8139: fld     [esp+20h+var_18]
0x7A813D: fld     [esp+20h+var_10]
0x7A8141: fld     st(1)
0x7A8143: fmulp   st(2), st
0x7A8145: fld     st(2)
0x7A8147: fmulp   st(3), st
0x7A8149: fxch    st(1)
0x7A814B: faddp   st(2), st
0x7A814D: fmul    st, st
0x7A814F: faddp   st(1), st
0x7A8151: fstp    [esp+20h+arg_0]
0x7A8155: fld     [esp+20h+arg_0]
0x7A8159: call    __CIsqrt
0x7A815E: fstp    [esp+20h+arg_0]
0x7A8162: fld     [esp+20h+arg_0]
0x7A8166: fld1
0x7A8168: fdivrp  st(1), st
0x7A816A: fstp    [esp+20h+arg_0]
0x7A816E: fld     [esp+20h+var_18]
0x7A8172: fld     [esp+20h+arg_0]
0x7A8176: fld     st
0x7A8178: fmulp   st(2), st
0x7A817A: fxch    st(1)
0x7A817C: fstp    [esp+20h+var_18]
0x7A8180: fld     [esp+20h+var_14]
0x7A8184: fmul    st, st(1)
0x7A8186: fstp    [esp+20h+var_14]
0x7A818A: fmul    [esp+20h+var_10]
0x7A818E: lea     eax, [esp+20h+var_18]
0x7A8192: push    eax
0x7A8193: lea     ecx, [esp+24h+var_C]
0x7A8197: fstp    [esp+24h+var_10]
0x7A819B: call    sub_78FCC0
0x7A81A0: call    __CIcos
0x7A81A5: fstp    [esp+20h+arg_0]
0x7A81A9: fld     [esp+20h+arg_0]
0x7A81AD: movzx   ecx, byte ptr [esi+14h]
0x7A81B1: fld1
0x7A81B3: movzx   edx, byte ptr [esi+15h]
0x7A81B7: fadd    st(1), st
0x7A81B9: fxch    st(1)
0x7A81BB: movzx   eax, byte ptr [esi+16h]
0x7A81BF: fmul    qword ptr ds:0A2FAA0h
0x7A81C5: push    1
0x7A81C7: fstp    [esp+24h+arg_0]
0x7A81CB: fld     [esp+24h+arg_0]
0x7A81CF: mov     [esp+24h+arg_0], ecx
0x7A81D3: fld     [esp+24h+arg_8]
0x7A81D7: lea     ecx, [esp+24h+var_18]
0x7A81DB: fld     st
0x7A81DD: push    ecx
0x7A81DE: fsubp   st(3), st
0x7A81E0: mov     ecx, esi
0x7A81E2: fxch    st(1)
0x7A81E4: fmulp   st(2), st
0x7A81E6: faddp   st(1), st
0x7A81E8: fstp    [esp+28h+arg_4]
0x7A81EC: fild    [esp+28h+arg_0]
0x7A81F0: mov     [esp+28h+arg_0], edx
0x7A81F4: fld     qword ptr ds:0A3DDD8h
0x7A81FA: fdiv    st(1), st
0x7A81FC: fxch    st(1)
0x7A81FE: fstp    [esp+28h+var_C]
0x7A8202: fild    [esp+28h+arg_0]
0x7A8206: mov     [esp+28h+arg_0], eax
0x7A820A: fdiv    st, st(1)
0x7A820C: fstp    [esp+28h+var_8]
0x7A8210: fild    [esp+28h+arg_0]
0x7A8214: fdivrp  st(1), st
0x7A8216: fstp    [esp+28h+var_4]
0x7A821A: fld     [esp+28h+var_C]
0x7A821E: fld     [esp+28h+arg_4]
0x7A8222: fld     st
0x7A8224: fmulp   st(2), st
0x7A8226: fxch    st(1)
0x7A8228: fstp    [esp+28h+var_18]
0x7A822C: fld     [esp+28h+var_8]
0x7A8230: fmul    st, st(1)
0x7A8232: fstp    [esp+28h+var_14]
0x7A8236: fmul    [esp+28h+var_4]
0x7A823A: fstp    [esp+28h+var_10]
0x7A823E: call    sub_7A7F10
0x7A8243: pop     edi
0x7A8244: pop     esi
0x7A8245: add     esp, 18h
0x7A8248: retn    0Ch
