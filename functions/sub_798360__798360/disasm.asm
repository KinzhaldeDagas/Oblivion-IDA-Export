0x798360: xor     edx, edx
0x798362: sub     esp, 34h
0x798365: cmp     [ecx+2Ch], edx
0x798368: jz      loc_798546
0x79836E: cmp     [ecx+20h], edx
0x798371: jz      loc_798546
0x798377: cmp     [ecx+28h], dx
0x79837B: mov     eax, [esp+34h+arg_0]
0x79837F: push    esi
0x798380: mov     [esp+38h+var_34], edx
0x798384: jbe     loc_798505
0x79838A: push    ebx
0x79838B: push    ebp
0x79838C: mov     [esp+40h+arg_0], edx
0x798390: push    edi
0x798391: mov     esi, [ecx+2Ch]
0x798394: add     esi, [esp+44h+arg_0]
0x798398: xor     ebx, ebx
0x79839A: cmp     [esi+0Ch], bx
0x79839E: jbe     loc_7984E6
0x7983A4: xor     edi, edi
0x7983A6: mov     edx, [esi+18h]
0x7983A9: fld     dword ptr [edx+edi]
0x7983AC: add     edx, edi
0x7983AE: fstp    [esp+44h+var_30]
0x7983B2: fld     dword ptr [edx+4]
0x7983B5: fstp    [esp+44h+var_2C]
0x7983B9: fld     dword ptr [edx+8]
0x7983BC: fstp    [esp+44h+var_28]
0x7983C0: fld     dword ptr [eax+10h]
0x7983C3: fld     [esp+44h+var_2C]
0x7983C7: fld     st
0x7983C9: fmulp   st(2), st
0x7983CB: fld     dword ptr [eax]
0x7983CD: fld     [esp+44h+var_30]
0x7983D1: fld     st
0x7983D3: fmulp   st(2), st
0x7983D5: fxch    st(3)
0x7983D7: faddp   st(1), st
0x7983D9: fld     dword ptr [eax+20h]
0x7983DC: fld     [esp+44h+var_28]
0x7983E0: fld     st
0x7983E2: fmulp   st(2), st
0x7983E4: fxch    st(2)
0x7983E6: faddp   st(1), st
0x7983E8: fadd    dword ptr [eax+30h]
0x7983EB: fstp    [esp+44h+var_24]
0x7983EF: mov     ebp, [esp+44h+var_24]
0x7983F3: fld     dword ptr [eax+4]
0x7983F6: fmul    st, st(3)
0x7983F8: fld     dword ptr [eax+14h]
0x7983FB: fmul    st, st(3)
0x7983FD: faddp   st(1), st
0x7983FF: fld     dword ptr [eax+24h]
0x798402: fmul    st, st(2)
0x798404: faddp   st(1), st
0x798406: fadd    dword ptr [eax+34h]
0x798409: fstp    [esp+44h+var_20]
0x79840D: fld     dword ptr [eax+8]
0x798410: fmulp   st(3), st
0x798412: fld     dword ptr [eax+18h]
0x798415: fmulp   st(2), st
0x798417: fxch    st(2)
0x798419: faddp   st(1), st
0x79841B: fld     dword ptr [eax+28h]
0x79841E: fmulp   st(2), st
0x798420: faddp   st(1), st
0x798422: fadd    dword ptr [eax+38h]
0x798425: mov     [edx], ebp
0x798427: mov     ebp, [esp+44h+var_20]
0x79842B: mov     [edx+4], ebp
0x79842E: fstp    [esp+44h+var_1C]
0x798432: mov     ebp, [esp+44h+var_1C]
0x798436: mov     [edx+8], ebp
0x798439: cmp     byte ptr [ecx+1], 0
0x79843D: jz      loc_7984D4
0x798443: mov     edx, [esi+40h]
0x798446: fld     dword ptr [edx+edi]
0x798449: add     edx, edi
0x79844B: fstp    [esp+44h+var_18]
0x79844F: fld     dword ptr [edx+4]
0x798452: fstp    [esp+44h+var_14]
0x798456: fld     dword ptr [edx+8]
0x798459: fstp    [esp+44h+var_10]
0x79845D: fld     dword ptr [eax+10h]
0x798460: fld     [esp+44h+var_14]
0x798464: fld     st
0x798466: fmulp   st(2), st
0x798468: fld     dword ptr [eax]
0x79846A: fld     [esp+44h+var_18]
0x79846E: fld     st
0x798470: fmulp   st(2), st
0x798472: fxch    st(3)
0x798474: faddp   st(1), st
0x798476: fld     dword ptr [eax+20h]
0x798479: fld     [esp+44h+var_10]
0x79847D: fld     st
0x79847F: fmulp   st(2), st
0x798481: fxch    st(2)
0x798483: faddp   st(1), st
0x798485: fadd    dword ptr [eax+30h]
0x798488: fstp    [esp+44h+var_C]
0x79848C: mov     ebp, [esp+44h+var_C]
0x798490: fld     dword ptr [eax+14h]
0x798493: fmul    st, st(2)
0x798495: fld     dword ptr [eax+4]
0x798498: fmul    st, st(4)
0x79849A: faddp   st(1), st
0x79849C: fld     dword ptr [eax+24h]
0x79849F: fmul    st, st(2)
0x7984A1: faddp   st(1), st
0x7984A3: fadd    dword ptr [eax+34h]
0x7984A6: fstp    [esp+44h+var_8]
0x7984AA: fld     dword ptr [eax+18h]
0x7984AD: fmulp   st(2), st
0x7984AF: fld     dword ptr [eax+8]
0x7984B2: fmulp   st(3), st
0x7984B4: fxch    st(1)
0x7984B6: faddp   st(2), st
0x7984B8: fmul    dword ptr [eax+28h]
0x7984BB: faddp   st(1), st
0x7984BD: fadd    dword ptr [eax+38h]
0x7984C0: mov     [edx], ebp
0x7984C2: mov     ebp, [esp+44h+var_8]
0x7984C6: mov     [edx+4], ebp
0x7984C9: fstp    [esp+44h+var_4]
0x7984CD: mov     ebp, [esp+44h+var_4]
0x7984D1: mov     [edx+8], ebp
0x7984D4: movzx   edx, word ptr [esi+0Ch]
0x7984D8: add     ebx, 1
0x7984DB: add     edi, 0Ch
0x7984DE: cmp     ebx, edx
0x7984E0: jl      loc_7983A6
0x7984E6: mov     edx, [esp+44h+var_34]
0x7984EA: movzx   esi, word ptr [ecx+28h]
0x7984EE: add     [esp+44h+arg_0], 44h ; 'D'
0x7984F3: add     edx, 1
0x7984F6: cmp     edx, esi
0x7984F8: mov     [esp+44h+var_34], edx
0x7984FC: jl      loc_798391
0x798502: pop     edi
0x798503: pop     ebp
0x798504: pop     ebx
0x798505: fld     dword ptr [eax]
0x798507: xor     edx, edx
0x798509: cmp     [ecx+1Ch], dx
0x79850D: fstp    [esp+38h+arg_0]
0x798511: jbe     short loc_798545
0x798513: fld     [esp+38h+arg_0]
0x798517: xor     esi, esi
0x798519: mov     eax, [ecx+20h]
0x79851C: fld     dword ptr [eax+esi]
0x79851F: add     eax, esi
0x798521: fmul    st, st(1)
0x798523: add     edx, 1
0x798526: add     esi, 0Ch
0x798529: fstp    dword ptr [eax]
0x79852B: fld     dword ptr [eax+4]
0x79852E: fmul    st, st(1)
0x798530: fstp    dword ptr [eax+4]
0x798533: fld     dword ptr [eax+8]
0x798536: fmul    st, st(1)
0x798538: fstp    dword ptr [eax+8]
0x79853B: movzx   eax, word ptr [ecx+1Ch]
0x79853F: cmp     edx, eax
0x798541: jl      short loc_798519
0x798543: fstp    st
0x798545: pop     esi
0x798546: add     esp, 34h
0x798549: retn    4
