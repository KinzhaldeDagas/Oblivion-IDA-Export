0x749550: sub     esp, 10h
0x749553: push    esi
0x749554: mov     esi, ecx
0x749556: call    sub_722AA0
0x74955B: cmp     byte ptr [esi+0C0h], 0
0x749562: jz      short loc_7495D9
0x749564: mov     eax, [esi+0B4h]
0x74956A: fld     dword ptr [esi+94h]
0x749570: mov     ecx, [eax+0Ch]
0x749573: fstp    [esp+14h+var_10]
0x749577: mov     [esi+20h], ecx
0x74957A: mov     edx, [eax+10h]
0x74957D: mov     [esi+24h], edx
0x749580: mov     ecx, [eax+14h]
0x749583: add     eax, 0Ch
0x749586: mov     [esi+28h], ecx
0x749589: mov     edx, [eax+0Ch]
0x74958C: mov     [esi+2Ch], edx
0x74958F: fld     dword ptr [esi+20h]
0x749592: fld     [esp+14h+var_10]
0x749596: fld     st
0x749598: fmulp   st(2), st
0x74959A: fxch    st(1)
0x74959C: fstp    [esp+14h+var_C]
0x7495A0: mov     eax, [esp+14h+var_C]
0x7495A4: fld     dword ptr [esi+24h]
0x7495A7: fmul    st, st(1)
0x7495A9: fstp    [esp+14h+var_8]
0x7495AD: mov     ecx, [esp+14h+var_8]
0x7495B1: fmul    dword ptr [esi+28h]
0x7495B4: fstp    [esp+14h+var_4]
0x7495B8: mov     edx, [esp+14h+var_4]
0x7495BC: fld     dword ptr [esi+2Ch]
0x7495BF: fmul    dword ptr [esi+94h]
0x7495C5: mov     [esi+20h], eax
0x7495C8: mov     [esi+24h], ecx
0x7495CB: mov     [esi+28h], edx
0x7495CE: fstp    [esp+14h+var_10]
0x7495D2: fld     [esp+14h+var_10]
0x7495D6: fstp    dword ptr [esi+2Ch]
0x7495D9: pop     esi
0x7495DA: add     esp, 10h
0x7495DD: retn
