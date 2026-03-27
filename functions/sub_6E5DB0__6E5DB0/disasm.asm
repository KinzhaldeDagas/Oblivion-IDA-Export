0x6E5DB0: sub     esp, 20h
0x6E5DB3: push    esi
0x6E5DB4: mov     esi, ecx
0x6E5DB6: fld     dword ptr [esi+8]
0x6E5DB9: fld     [esp+24h+arg_0]
0x6E5DBD: fld     st
0x6E5DBF: fucomp  st(2)
0x6E5DC1: fnstsw  ax
0x6E5DC3: fstp    st(1)
0x6E5DC5: test    ah, 44h
0x6E5DC8: jp      short loc_6E5DEA
0x6E5DCA: mov     ecx, [esi+1Ch]
0x6E5DCD: fstp    st
0x6E5DCF: mov     eax, [esp+24h+arg_8]
0x6E5DD3: mov     [eax], ecx
0x6E5DD5: mov     edx, [esi+20h]
0x6E5DD8: mov     [eax+4], edx
0x6E5DDB: mov     ecx, [esi+24h]
0x6E5DDE: mov     [eax+8], ecx
0x6E5DE1: mov     al, 1
0x6E5DE3: pop     esi
0x6E5DE4: add     esp, 20h
0x6E5DE7: retn    0Ch
0x6E5DEA: mov     eax, [esi+28h]
0x6E5DED: cmp     eax, 0FFFFh
0x6E5DF2: jz      short loc_6E5E60
0x6E5DF4: fld     dword ptr [esi+30h]
0x6E5DF7: sub     esp, 8
0x6E5DFA: fstp    [esp+2Ch+var_28]; float
0x6E5DFE: mov     edx, [esi+18h]
0x6E5E01: fld     dword ptr [esi+2Ch]
0x6E5E04: fstp    [esp+2Ch+var_2C]; float
0x6E5E07: push    eax; int
0x6E5E08: push    edx; int
0x6E5E09: fsub    dword ptr [esi+0Ch]
0x6E5E0C: push    3; int
0x6E5E0E: fld     dword ptr [esi+10h]
0x6E5E11: lea     eax, [esp+38h+var_10]
0x6E5E15: fsub    dword ptr [esi+0Ch]
0x6E5E18: push    eax; int
0x6E5E19: push    ecx
0x6E5E1A: mov     ecx, [esi+14h]
0x6E5E1D: fdivp   st(1), st
0x6E5E1F: fstp    [esp+40h+var_20]
0x6E5E23: fld     [esp+40h+var_20]
0x6E5E27: fstp    [esp+40h+var_40]; float
0x6E5E2A: call    sub_6E7470
0x6E5E2F: fld     [esp+24h+var_10]
0x6E5E33: fstp    [esp+24h+var_1C]
0x6E5E37: fld     [esp+24h+var_C]
0x6E5E3B: mov     ecx, [esp+24h+var_1C]
0x6E5E3F: fstp    [esp+24h+var_18]
0x6E5E43: mov     [esi+1Ch], ecx
0x6E5E46: fld     [esp+24h+var_8]
0x6E5E4A: mov     edx, [esp+24h+var_18]
0x6E5E4E: fstp    [esp+24h+var_14]
0x6E5E52: mov     [esi+20h], edx
0x6E5E55: mov     eax, [esp+24h+var_14]
0x6E5E59: fld     [esp+24h+arg_0]
0x6E5E5D: mov     [esi+24h], eax
0x6E5E60: mov     ecx, [esi+1Ch]
0x6E5E63: mov     eax, [esp+24h+arg_8]
0x6E5E67: mov     [eax], ecx
0x6E5E69: mov     edx, [esi+20h]
0x6E5E6C: mov     [eax+4], edx
0x6E5E6F: mov     ecx, [esi+24h]
0x6E5E72: mov     [eax+8], ecx
0x6E5E75: fstp    dword ptr [esi+8]
0x6E5E78: mov     al, 1
0x6E5E7A: pop     esi
0x6E5E7B: add     esp, 20h
0x6E5E7E: retn    0Ch
