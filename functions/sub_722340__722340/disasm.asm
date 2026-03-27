0x722340: sub     esp, 10h
0x722343: push    esi
0x722344: mov     esi, ecx
0x722346: cmp     word ptr [esi+0B8h], 0
0x72234E: jz      loc_7223D5
0x722354: fld     dword ptr [esi+20h]
0x722357: fsub    dword ptr [esi+88h]
0x72235D: fstp    [esp+14h+var_C]
0x722361: fld     dword ptr [esi+24h]
0x722364: fsub    dword ptr [esi+8Ch]
0x72236A: fstp    [esp+14h+var_8]
0x72236E: fld     dword ptr [esi+28h]
0x722371: fsub    dword ptr [esi+90h]
0x722377: fstp    [esp+14h+var_4]
0x72237B: fld     [esp+14h+var_8]
0x72237F: fld     [esp+14h+var_C]
0x722383: fld     [esp+14h+var_4]
0x722387: fld     st(1)
0x722389: fmulp   st(2), st
0x72238B: fld     st(2)
0x72238D: fmulp   st(3), st
0x72238F: fxch    st(1)
0x722391: faddp   st(2), st
0x722393: fmul    st, st
0x722395: faddp   st(1), st
0x722397: fstp    [esp+14h+var_10]
0x72239B: fld     [esp+14h+var_10]
0x72239F: call    __CIsqrt
0x7223A4: fstp    [esp+14h+var_10]
0x7223A8: fld     [esp+14h+var_10]
0x7223AC: mov     eax, [esi+88h]
0x7223B2: fadd    dword ptr [esi+2Ch]
0x7223B5: mov     [esi+20h], eax
0x7223B8: mov     ecx, [esi+8Ch]
0x7223BE: mov     [esi+24h], ecx
0x7223C1: mov     edx, [esi+90h]
0x7223C7: fstp    [esp+14h+var_10]
0x7223CB: fld     [esp+14h+var_10]
0x7223CF: mov     [esi+28h], edx
0x7223D2: fstp    dword ptr [esi+2Ch]
0x7223D5: pop     esi
0x7223D6: add     esp, 10h
0x7223D9: retn
