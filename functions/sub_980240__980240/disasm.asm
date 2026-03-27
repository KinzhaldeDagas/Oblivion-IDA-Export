0x980240: sub     esp, 0Ch
0x980243: push    esi
0x980244: mov     esi, ecx
0x980246: fld     dword ptr [esi+6Ch]
0x980249: lea     ecx, [esp+10h+var_C]
0x98024D: fstp    [esp+10h+var_C]
0x980251: fld     dword ptr [esi+70h]
0x980254: fstp    [esp+10h+var_8]
0x980258: fld     dword ptr [esi+74h]
0x98025B: fstp    [esp+10h+var_4]
0x98025F: call    sub_43F350
0x980264: fstp    st
0x980266: fld     [esp+10h+var_C]
0x98026A: fld     qword ptr ds:0A68FE0h
0x980270: fcom    st(1)
0x980272: fnstsw  ax
0x980274: fstp    st(1)
0x980276: test    ah, 1
0x980279: jnz     short loc_980299
0x98027B: mov     ecx, [esi+48h]
0x98027E: fstp    st
0x980280: mov     eax, [esp+10h+arg_4]
0x980284: mov     [eax], ecx
0x980286: mov     edx, [esi+4Ch]
0x980289: mov     [eax+4], edx
0x98028C: mov     ecx, [esi+50h]
0x98028F: mov     [eax+8], ecx
0x980292: pop     esi
0x980293: add     esp, 0Ch
0x980296: retn    8
0x980299: fld     [esp+10h+var_8]
0x98029D: fcomp   st(1)
0x98029F: fnstsw  ax
0x9802A1: test    ah, 41h
0x9802A4: jp      short loc_9802C4
0x9802A6: mov     edx, [esi+54h]
0x9802A9: fstp    st
0x9802AB: mov     eax, [esp+10h+arg_4]
0x9802AF: mov     [eax], edx
0x9802B1: mov     ecx, [esi+58h]
0x9802B4: mov     [eax+4], ecx
0x9802B7: mov     edx, [esi+5Ch]
0x9802BA: mov     [eax+8], edx
0x9802BD: pop     esi
0x9802BE: add     esp, 0Ch
0x9802C1: retn    8
0x9802C4: fld     [esp+10h+var_4]
0x9802C8: fcompp
0x9802CA: fnstsw  ax
0x9802CC: test    ah, 41h
0x9802CF: jp      short loc_9802ED
0x9802D1: mov     ecx, [esi+60h]
0x9802D4: mov     eax, [esp+10h+arg_4]
0x9802D8: mov     [eax], ecx
0x9802DA: mov     edx, [esi+64h]
0x9802DD: mov     [eax+4], edx
0x9802E0: mov     ecx, [esi+68h]
0x9802E3: mov     [eax+8], ecx
0x9802E6: pop     esi
0x9802E7: add     esp, 0Ch
0x9802EA: retn    8
0x9802ED: mov     eax, [esp+10h+arg_0]
0x9802F1: fld     dword ptr [eax]
0x9802F3: mov     ecx, [esp+10h+arg_4]
0x9802F7: fsub    dword ptr [esi+3Ch]
0x9802FA: fstp    [esp+10h+var_C]
0x9802FE: fld     dword ptr [eax+4]
0x980301: fsub    dword ptr [esi+40h]
0x980304: fstp    [esp+10h+var_8]
0x980308: fld     dword ptr [eax+8]
0x98030B: fsub    dword ptr [esi+44h]
0x98030E: fstp    [esp+10h+var_4]
0x980312: fld     dword ptr [esi+6Ch]
0x980315: fld     dword ptr [esi+4Ch]
0x980318: fld     [esp+10h+var_8]
0x98031C: fld     st
0x98031E: fmulp   st(2), st
0x980320: fld     dword ptr [esi+48h]
0x980323: fld     [esp+10h+var_C]
0x980327: fld     st
0x980329: fmulp   st(2), st
0x98032B: fxch    st(3)
0x98032D: faddp   st(1), st
0x98032F: fld     dword ptr [esi+50h]
0x980332: fld     [esp+10h+var_4]
0x980336: fld     st
0x980338: fmulp   st(2), st
0x98033A: fxch    st(2)
0x98033C: faddp   st(1), st
0x98033E: fstp    [esp+10h+arg_0]
0x980342: fld     [esp+10h+arg_0]
0x980346: fld     st(4)
0x980348: fmulp   st(5), st
0x98034A: fdivrp  st(4), st
0x98034C: fxch    st(3)
0x98034E: fstp    dword ptr [ecx]
0x980350: fld     dword ptr [esi+70h]
0x980353: fld     dword ptr [esi+58h]
0x980356: fmul    st, st(2)
0x980358: fld     dword ptr [esi+54h]
0x98035B: fmul    st, st(4)
0x98035D: faddp   st(1), st
0x98035F: fld     dword ptr [esi+5Ch]
0x980362: fmul    st, st(5)
0x980364: faddp   st(1), st
0x980366: fstp    [esp+10h+arg_4]
0x98036A: fld     st
0x98036C: fmulp   st(1), st
0x98036E: fdivr   [esp+10h+arg_4]
0x980372: fstp    dword ptr [ecx+4]
0x980375: fld     dword ptr [esi+74h]
0x980378: fld     dword ptr [esi+64h]
0x98037B: fmulp   st(2), st
0x98037D: fld     dword ptr [esi+60h]
0x980380: fmulp   st(3), st
0x980382: fxch    st(1)
0x980384: faddp   st(2), st
0x980386: fld     dword ptr [esi+68h]
0x980389: fmulp   st(3), st
0x98038B: fxch    st(1)
0x98038D: faddp   st(2), st
0x98038F: fxch    st(1)
0x980391: fstp    [esp+10h+arg_4]
0x980395: fld     st
0x980397: fmulp   st(1), st
0x980399: fdivr   [esp+10h+arg_4]
0x98039D: fstp    dword ptr [ecx+8]
0x9803A0: call    sub_43F350
0x9803A5: fstp    st
0x9803A7: pop     esi
0x9803A8: add     esp, 0Ch
0x9803AB: retn    8
