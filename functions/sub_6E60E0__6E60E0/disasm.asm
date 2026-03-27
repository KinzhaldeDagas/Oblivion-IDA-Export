0x6E60E0: push    ecx
0x6E60E1: push    esi
0x6E60E2: mov     esi, ecx
0x6E60E4: fld     dword ptr [esi+8]
0x6E60E7: fld     [esp+8+arg_0]
0x6E60EB: fld     st
0x6E60ED: fucomp  st(2)
0x6E60EF: fnstsw  ax
0x6E60F1: fstp    st(1)
0x6E60F3: test    ah, 44h
0x6E60F6: jp      short loc_6E610A
0x6E60F8: mov     eax, [esp+8+arg_8]
0x6E60FC: fstp    st
0x6E60FE: fld     dword ptr [esi+1Ch]
0x6E6101: pop     esi
0x6E6102: fstp    dword ptr [eax]
0x6E6104: mov     al, 1
0x6E6106: pop     ecx
0x6E6107: retn    0Ch
0x6E610A: mov     eax, [esi+20h]
0x6E610D: cmp     eax, 0FFFFh
0x6E6112: jz      short loc_6E6152
0x6E6114: fld     dword ptr [esi+28h]
0x6E6117: sub     esp, 8
0x6E611A: fstp    [esp+10h+var_C]; float
0x6E611E: mov     ecx, [esi+18h]
0x6E6121: fld     dword ptr [esi+24h]
0x6E6124: lea     edx, [esi+1Ch]
0x6E6127: fstp    [esp+10h+var_10]; float
0x6E612A: push    eax; int
0x6E612B: push    ecx; int
0x6E612C: fsub    dword ptr [esi+0Ch]
0x6E612F: push    1; int
0x6E6131: fld     dword ptr [esi+10h]
0x6E6134: push    edx; int
0x6E6135: fsub    dword ptr [esi+0Ch]
0x6E6138: push    ecx
0x6E6139: mov     ecx, [esi+14h]
0x6E613C: fdivp   st(1), st
0x6E613E: fstp    [esp+24h+var_4]
0x6E6142: fld     [esp+24h+var_4]
0x6E6146: fstp    [esp+24h+var_24]; float
0x6E6149: call    sub_6E7470
0x6E614E: fld     [esp+8+arg_0]
0x6E6152: fld     dword ptr [esi+1Ch]
0x6E6155: mov     eax, [esp+8+arg_8]
0x6E6159: fstp    dword ptr [eax]
0x6E615B: mov     al, 1
0x6E615D: fstp    dword ptr [esi+8]
0x6E6160: pop     esi
0x6E6161: pop     ecx
0x6E6162: retn    0Ch
