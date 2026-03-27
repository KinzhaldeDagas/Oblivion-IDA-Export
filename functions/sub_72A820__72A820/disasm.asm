0x72A820: sub     esp, 18h
0x72A823: push    ebx
0x72A824: mov     ebx, [esp+1Ch+arg_0]
0x72A828: push    esi
0x72A829: mov     esi, [esp+20h+arg_4]
0x72A82D: push    edi
0x72A82E: push    ebx
0x72A82F: lea     eax, [esp+28h+var_C]
0x72A833: mov     edi, ecx
0x72A835: push    eax
0x72A836: mov     ecx, esi
0x72A838: call    sub_7101F0
0x72A83D: fld     dword ptr [esi+30h]
0x72A840: fstp    [esp+24h+arg_0]
0x72A844: fld     dword ptr [eax]
0x72A846: fld     [esp+24h+arg_0]
0x72A84A: fld     st
0x72A84C: fmulp   st(2), st
0x72A84E: fxch    st(1)
0x72A850: fstp    [esp+24h+var_18]
0x72A854: fld     dword ptr [eax+4]
0x72A857: fmul    st, st(1)
0x72A859: fstp    [esp+24h+var_14]
0x72A85D: fmul    dword ptr [eax+8]
0x72A860: fstp    [esp+24h+var_10]
0x72A864: fld     dword ptr [esi+24h]
0x72A867: fadd    [esp+24h+var_18]
0x72A86B: fstp    [esp+24h+var_C]
0x72A86F: mov     ecx, [esp+24h+var_C]
0x72A873: fld     dword ptr [esi+28h]
0x72A876: fadd    [esp+24h+var_14]
0x72A87A: fstp    [esp+24h+var_8]
0x72A87E: mov     edx, [esp+24h+var_8]
0x72A882: fld     dword ptr [esi+2Ch]
0x72A885: mov     [edi], ecx
0x72A887: fadd    [esp+24h+var_10]
0x72A88B: mov     [edi+4], edx
0x72A88E: fstp    [esp+24h+var_4]
0x72A892: mov     eax, [esp+24h+var_4]
0x72A896: mov     [edi+8], eax
0x72A899: fld     dword ptr [ebx+0Ch]
0x72A89C: fmul    dword ptr [esi+30h]
0x72A89F: fstp    dword ptr [edi+0Ch]
0x72A8A2: pop     edi
0x72A8A3: pop     esi
0x72A8A4: pop     ebx
0x72A8A5: add     esp, 18h
0x72A8A8: retn    8
