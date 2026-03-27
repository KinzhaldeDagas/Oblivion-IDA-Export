0x8C43B0: push    ecx
0x8C43B1: push    esi
0x8C43B2: mov     esi, ecx
0x8C43B4: mov     eax, [esi]
0x8C43B6: mov     edx, [eax+74h]
0x8C43B9: lea     ecx, [esp+8+var_1]
0x8C43BD: push    ecx
0x8C43BE: mov     ecx, esi
0x8C43C0: call    edx
0x8C43C2: mov     edx, [esp+8+arg_4]
0x8C43C6: mov     ecx, eax
0x8C43C8: test    ecx, ecx
0x8C43CA: jz      short loc_8C4436
0x8C43CC: fld     dword ptr [edx+10h]
0x8C43CF: fstp    [esp+8+arg_4]
0x8C43D3: fld1
0x8C43D5: fld     [esp+8+arg_4]
0x8C43D9: fucom   st(1)
0x8C43DB: fnstsw  ax
0x8C43DD: fstp    st(1)
0x8C43DF: test    ah, 44h
0x8C43E2: jnp     short loc_8C4434
0x8C43E4: fld     dword ptr [ecx+20h]
0x8C43E7: mov     eax, [esp+8+arg_0]
0x8C43EB: fmul    st, st(1)
0x8C43ED: push    edx
0x8C43EE: push    eax
0x8C43EF: fstp    dword ptr [ecx+20h]
0x8C43F2: fld     dword ptr [ecx+24h]
0x8C43F5: fmul    st, st(1)
0x8C43F7: fstp    dword ptr [ecx+24h]
0x8C43FA: fld     dword ptr [ecx+28h]
0x8C43FD: fmul    st, st(1)
0x8C43FF: fstp    dword ptr [ecx+28h]
0x8C4402: fld     dword ptr [ecx+2Ch]
0x8C4405: fmul    st, st(1)
0x8C4407: fstp    dword ptr [ecx+2Ch]
0x8C440A: fld     st
0x8C440C: fmul    dword ptr [ecx+30h]
0x8C440F: fstp    dword ptr [ecx+30h]
0x8C4412: fld     dword ptr [ecx+34h]
0x8C4415: fmul    st, st(1)
0x8C4417: fstp    dword ptr [ecx+34h]
0x8C441A: fld     dword ptr [ecx+38h]
0x8C441D: fmul    st, st(1)
0x8C441F: fstp    dword ptr [ecx+38h]
0x8C4422: fmul    dword ptr [ecx+3Ch]
0x8C4425: fstp    dword ptr [ecx+3Ch]
0x8C4428: mov     ecx, esi
0x8C442A: call    sub_8A2670
0x8C442F: pop     esi
0x8C4430: pop     ecx
0x8C4431: retn    8
0x8C4434: fstp    st
0x8C4436: mov     eax, [esp+8+arg_0]
0x8C443A: push    edx
0x8C443B: push    eax
0x8C443C: mov     ecx, esi
0x8C443E: call    sub_8A2670
0x8C4443: pop     esi
0x8C4444: pop     ecx
0x8C4445: retn    8
