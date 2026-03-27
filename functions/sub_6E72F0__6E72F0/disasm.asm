0x6E72F0: push    ecx
0x6E72F1: push    ebx
0x6E72F2: push    ebp
0x6E72F3: push    esi
0x6E72F4: mov     ebx, ecx
0x6E72F6: mov     ecx, [esp+10h+arg_C]
0x6E72FA: push    edi
0x6E72FB: call    sub_6E78D0
0x6E7300: fld     [esp+14h+arg_0]
0x6E7304: mov     ebp, eax
0x6E7306: lea     eax, [esp+14h+var_4]
0x6E730A: push    eax
0x6E730B: lea     ecx, [esp+18h+arg_0]
0x6E730F: push    ecx
0x6E7310: push    ecx
0x6E7311: mov     ecx, ebp
0x6E7313: fstp    [esp+20h+var_20]
0x6E7316: call    sub_6E6B50
0x6E731B: fld     dword ptr [ebp+4]
0x6E731E: mov     esi, [esp+14h+arg_0]
0x6E7322: fstp    [esp+14h+arg_C]
0x6E7326: mov     edi, [esp+14h+arg_8]
0x6E732A: fld     [esp+14h+arg_C]
0x6E732E: mov     eax, [ebx+8]
0x6E7331: mov     ebx, [esp+14h+arg_4]
0x6E7335: mov     edx, esi
0x6E7337: imul    edx, edi
0x6E733A: add     edx, [esp+14h+arg_10]
0x6E733E: lea     eax, [eax+edx*4]
0x6E7341: xor     edx, edx
0x6E7343: cmp     edi, 4
0x6E7346: jl      short loc_6E738D
0x6E7348: lea     esi, [edi-4]
0x6E734B: fld     st
0x6E734D: shr     esi, 2
0x6E7350: add     esi, 1
0x6E7353: lea     ecx, [ebx+8]
0x6E7356: lea     edx, ds:0[esi*4]
0x6E735D: fld     dword ptr [eax]
0x6E735F: add     eax, 10h
0x6E7362: fmul    st, st(1)
0x6E7364: add     ecx, 10h
0x6E7367: sub     esi, 1
0x6E736A: fstp    dword ptr [ecx-18h]
0x6E736D: fld     dword ptr [eax-0Ch]
0x6E7370: fmul    st, st(1)
0x6E7372: fstp    dword ptr [ecx-14h]
0x6E7375: fld     dword ptr [eax-8]
0x6E7378: fmul    st, st(1)
0x6E737A: fstp    dword ptr [ecx-10h]
0x6E737D: fld     dword ptr [eax-4]
0x6E7380: fmul    st, st(1)
0x6E7382: fstp    dword ptr [ecx-0Ch]
0x6E7385: jnz     short loc_6E735D
0x6E7387: mov     esi, [esp+14h+arg_0]
0x6E738B: fstp    st
0x6E738D: cmp     edx, edi
0x6E738F: jnb     short loc_6E73A3
0x6E7391: fld     dword ptr [eax]
0x6E7393: add     edx, 1
0x6E7396: fmul    st, st(1)
0x6E7398: add     eax, 4
0x6E739B: cmp     edx, edi
0x6E739D: fstp    dword ptr [ebx+edx*4-4]
0x6E73A1: jb      short loc_6E7391
0x6E73A3: mov     ecx, [esp+14h+var_4]
0x6E73A7: fstp    st
0x6E73A9: lea     edx, [esi+1]
0x6E73AC: cmp     edx, ecx
0x6E73AE: mov     [esp+14h+arg_C], edx
0x6E73B2: jg      loc_6E7459
0x6E73B8: sub     ecx, [esp+14h+arg_C]
0x6E73BC: sub     edx, esi
0x6E73BE: add     ecx, 1
0x6E73C1: lea     ebp, [ebp+edx*4+4]
0x6E73C5: mov     [esp+14h+arg_0], ecx
0x6E73C9: lea     esp, [esp+0]
0x6E73D0: fld     dword ptr [ebp+0]
0x6E73D3: xor     edx, edx
0x6E73D5: cmp     edi, 4
0x6E73D8: fstp    [esp+14h+arg_C]
0x6E73DC: fld     [esp+14h+arg_C]
0x6E73E0: jl      short loc_6E742F
0x6E73E2: lea     esi, [edi-4]
0x6E73E5: fld     st
0x6E73E7: shr     esi, 2
0x6E73EA: add     esi, 1
0x6E73ED: lea     ecx, [ebx+8]
0x6E73F0: lea     edx, ds:0[esi*4]
0x6E73F7: fld     dword ptr [eax]
0x6E73F9: add     eax, 10h
0x6E73FC: fmul    st, st(1)
0x6E73FE: add     ecx, 10h
0x6E7401: sub     esi, 1
0x6E7404: fadd    dword ptr [ecx-18h]
0x6E7407: fstp    dword ptr [ecx-18h]
0x6E740A: fld     dword ptr [eax-0Ch]
0x6E740D: fmul    st, st(1)
0x6E740F: fadd    dword ptr [ecx-14h]
0x6E7412: fstp    dword ptr [ecx-14h]
0x6E7415: fld     dword ptr [eax-8]
0x6E7418: fmul    st, st(1)
0x6E741A: fadd    dword ptr [ecx-10h]
0x6E741D: fstp    dword ptr [ecx-10h]
0x6E7420: fld     dword ptr [eax-4]
0x6E7423: fmul    st, st(1)
0x6E7425: fadd    dword ptr [ecx-0Ch]
0x6E7428: fstp    dword ptr [ecx-0Ch]
0x6E742B: jnz     short loc_6E73F7
0x6E742D: fstp    st
0x6E742F: cmp     edx, edi
0x6E7431: jnb     short loc_6E7449
0x6E7433: fld     dword ptr [eax]
0x6E7435: add     edx, 1
0x6E7438: fmul    st, st(1)
0x6E743A: add     eax, 4
0x6E743D: cmp     edx, edi
0x6E743F: fadd    dword ptr [ebx+edx*4-4]
0x6E7443: fstp    dword ptr [ebx+edx*4-4]
0x6E7447: jb      short loc_6E7433
0x6E7449: add     ebp, 4
0x6E744C: fstp    st
0x6E744E: sub     [esp+14h+arg_0], 1
0x6E7453: jnz     loc_6E73D0
0x6E7459: pop     edi
0x6E745A: pop     esi
0x6E745B: pop     ebp
0x6E745C: pop     ebx
0x6E745D: pop     ecx
0x6E745E: retn    14h
