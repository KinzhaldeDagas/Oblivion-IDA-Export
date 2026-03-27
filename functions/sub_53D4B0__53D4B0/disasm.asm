0x53D4B0: sub     esp, 1Ch
0x53D4B3: mov     eax, [esp+1Ch+arg_4]
0x53D4B7: push    esi
0x53D4B8: mov     esi, ecx
0x53D4BA: fld     dword ptr [esi+30h]
0x53D4BD: push    eax
0x53D4BE: lea     ecx, [esp+24h+var_C]
0x53D4C2: fstp    [esp+24h+var_1C]
0x53D4C6: push    ecx
0x53D4C7: mov     ecx, esi
0x53D4C9: call    sub_7101F0
0x53D4CE: fld     dword ptr [eax]
0x53D4D0: fld     [esp+20h+var_1C]
0x53D4D4: fld     st
0x53D4D6: fmulp   st(2), st
0x53D4D8: fxch    st(1)
0x53D4DA: fstp    [esp+20h+var_18]
0x53D4DE: fld     dword ptr [eax+4]
0x53D4E1: fmul    st, st(1)
0x53D4E3: fstp    [esp+20h+var_14]
0x53D4E7: fmul    dword ptr [eax+8]
0x53D4EA: mov     eax, [esp+20h+arg_0]
0x53D4EE: fstp    [esp+20h+var_10]
0x53D4F2: fld     dword ptr [esi+24h]
0x53D4F5: fadd    [esp+20h+var_18]
0x53D4F9: fstp    dword ptr [eax]
0x53D4FB: fld     dword ptr [esi+28h]
0x53D4FE: fadd    [esp+20h+var_14]
0x53D502: fstp    dword ptr [eax+4]
0x53D505: fld     dword ptr [esi+2Ch]
0x53D508: pop     esi
0x53D509: fadd    [esp+1Ch+var_10]
0x53D50D: fstp    dword ptr [eax+8]
0x53D510: add     esp, 1Ch
0x53D513: retn    8
