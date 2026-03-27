0x62E790: sub     esp, 20h
0x62E793: push    esi
0x62E794: push    0; Seed
0x62E796: call    GetRandomLargeInteger?
0x62E79B: mov     [esp+28h+var_20], eax
0x62E79F: fild    [esp+28h+var_20]
0x62E7A3: push    0; Seed
0x62E7A5: fsub    qword ptr ds:0A71DB8h
0x62E7AB: fstp    [esp+2Ch+var_1C]
0x62E7AF: call    GetRandomLargeInteger?
0x62E7B4: mov     esi, [esp+2Ch+arg_0]
0x62E7B8: mov     [esp+2Ch+var_20], eax
0x62E7BC: fild    [esp+2Ch+var_20]
0x62E7C0: add     esp, 8
0x62E7C3: mov     ecx, esi
0x62E7C5: fsub    qword ptr ds:0A71DB8h
0x62E7CB: fstp    [esp+24h+var_20]
0x62E7CF: fld     [esp+24h+var_1C]
0x62E7D3: fstp    dword ptr [esi]
0x62E7D5: fld     [esp+24h+var_20]
0x62E7D9: fstp    dword ptr [esi+4]
0x62E7DC: fldz
0x62E7DE: fstp    dword ptr [esi+8]
0x62E7E1: call    sub_43F350
0x62E7E6: fstp    st
0x62E7E8: push    0; Seed
0x62E7EA: call    GetRandomLargeInteger?
0x62E7EF: mov     [esp+28h+arg_0], eax
0x62E7F3: fild    [esp+28h+arg_0]
0x62E7F7: add     esp, 4
0x62E7FA: fdiv    qword ptr ds:0A3D5A8h
0x62E800: fstp    [esp+24h+arg_0]
0x62E804: fld     [esp+24h+arg_10]
0x62E808: fld     [esp+24h+arg_14]
0x62E80C: fld     st
0x62E80E: faddp   st(2), st
0x62E810: fxch    st(1)
0x62E812: fmul    [esp+24h+arg_0]
0x62E816: fstp    [esp+24h+arg_0]
0x62E81A: fld     [esp+24h+arg_0]
0x62E81E: fcom    st(1)
0x62E820: fnstsw  ax
0x62E822: test    ah, 5
0x62E825: jp      short loc_62E833
0x62E827: fstp    st
0x62E829: fstp    [esp+24h+arg_0]
0x62E82D: fld     [esp+24h+arg_0]
0x62E831: jmp     short loc_62E835
0x62E833: fstp    st(1)
0x62E835: fld     dword ptr [esi]
0x62E837: fmul    st, st(1)
0x62E839: fstp    [esp+24h+var_18]
0x62E83D: fld     dword ptr [esi+4]
0x62E840: fmul    st, st(1)
0x62E842: fstp    [esp+24h+var_14]
0x62E846: fmul    dword ptr [esi+8]
0x62E849: fstp    [esp+24h+var_10]
0x62E84D: fld     [esp+24h+var_18]
0x62E851: fadd    [esp+24h+arg_4]
0x62E855: fstp    [esp+24h+var_C]
0x62E859: mov     eax, [esp+24h+var_C]
0x62E85D: fld     [esp+24h+arg_8]
0x62E861: mov     [esi], eax
0x62E863: fadd    [esp+24h+var_14]
0x62E867: mov     eax, esi
0x62E869: fstp    [esp+24h+var_8]
0x62E86D: mov     ecx, [esp+24h+var_8]
0x62E871: fld     [esp+24h+arg_C]
0x62E875: mov     [esi+4], ecx
0x62E878: fadd    [esp+24h+var_10]
0x62E87C: fstp    [esp+24h+var_4]
0x62E880: mov     edx, [esp+24h+var_4]
0x62E884: mov     [esi+8], edx
0x62E887: pop     esi
0x62E888: add     esp, 20h
0x62E88B: retn
