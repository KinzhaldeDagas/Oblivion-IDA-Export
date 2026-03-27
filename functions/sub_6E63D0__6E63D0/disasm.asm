0x6E63D0: sub     esp, 24h
0x6E63D3: push    esi
0x6E63D4: mov     esi, ecx
0x6E63D6: fld     dword ptr [esi+8]
0x6E63D9: fld     [esp+28h+arg_0]
0x6E63DD: fld     st
0x6E63DF: fucomp  st(2)
0x6E63E1: fnstsw  ax
0x6E63E3: fstp    st(1)
0x6E63E5: test    ah, 44h
0x6E63E8: jp      short loc_6E6410
0x6E63EA: mov     ecx, [esi+1Ch]
0x6E63ED: fstp    st
0x6E63EF: mov     eax, [esp+28h+arg_8]
0x6E63F3: mov     [eax], ecx
0x6E63F5: mov     edx, [esi+20h]
0x6E63F8: mov     [eax+4], edx
0x6E63FB: mov     ecx, [esi+24h]
0x6E63FE: mov     [eax+8], ecx
0x6E6401: mov     edx, [esi+28h]
0x6E6404: mov     [eax+0Ch], edx
0x6E6407: mov     al, 1
0x6E6409: pop     esi
0x6E640A: add     esp, 24h
0x6E640D: retn    0Ch
0x6E6410: mov     eax, [esi+2Ch]
0x6E6413: cmp     eax, 0FFFFh
0x6E6418: jz      short loc_6E6495
0x6E641A: fld     dword ptr [esi+38h]
0x6E641D: sub     esp, 8
0x6E6420: fstp    [esp+30h+var_2C]; float
0x6E6424: lea     ecx, [esp+30h+var_10]
0x6E6428: fld     dword ptr [esi+34h]
0x6E642B: fstp    [esp+30h+var_30]; float
0x6E642E: push    eax; int
0x6E642F: mov     eax, [esi+18h]
0x6E6432: fsub    dword ptr [esi+0Ch]
0x6E6435: push    eax; int
0x6E6436: fld     dword ptr [esi+10h]
0x6E6439: push    4; int
0x6E643B: fsub    dword ptr [esi+0Ch]
0x6E643E: push    ecx; int
0x6E643F: push    ecx
0x6E6440: mov     ecx, [esi+14h]
0x6E6443: fdivp   st(1), st
0x6E6445: fstp    [esp+44h+var_24]
0x6E6449: fld     [esp+44h+var_24]
0x6E644D: fstp    [esp+44h+var_44]; float
0x6E6450: call    sub_6E7470
0x6E6455: fld     [esp+28h+var_10]
0x6E6459: fstp    [esp+28h+var_20]
0x6E645D: fld     [esp+28h+var_C]
0x6E6461: mov     edx, [esp+28h+var_20]
0x6E6465: fstp    [esp+28h+var_1C]
0x6E6469: mov     [esi+1Ch], edx
0x6E646C: fld     [esp+28h+var_8]
0x6E6470: mov     eax, [esp+28h+var_1C]
0x6E6474: fstp    [esp+28h+var_18]
0x6E6478: mov     [esi+20h], eax
0x6E647B: fld     [esp+28h+var_4]
0x6E647F: mov     ecx, [esp+28h+var_18]
0x6E6483: fstp    [esp+28h+var_14]
0x6E6487: mov     [esi+24h], ecx
0x6E648A: mov     edx, [esp+28h+var_14]
0x6E648E: fld     [esp+28h+arg_0]
0x6E6492: mov     [esi+28h], edx
0x6E6495: mov     ecx, [esi+1Ch]
0x6E6498: mov     eax, [esp+28h+arg_8]
0x6E649C: mov     [eax], ecx
0x6E649E: mov     edx, [esi+20h]
0x6E64A1: mov     [eax+4], edx
0x6E64A4: mov     ecx, [esi+24h]
0x6E64A7: mov     [eax+8], ecx
0x6E64AA: mov     edx, [esi+28h]
0x6E64AD: mov     [eax+0Ch], edx
0x6E64B0: fstp    dword ptr [esi+8]
0x6E64B3: mov     al, 1
0x6E64B5: pop     esi
0x6E64B6: add     esp, 24h
0x6E64B9: retn    0Ch
