0x6E7470: sub     esp, 48h
0x6E7473: push    ebx
0x6E7474: push    ebp
0x6E7475: push    esi
0x6E7476: mov     esi, ecx
0x6E7478: mov     ecx, [esp+54h+arg_C]
0x6E747C: push    edi
0x6E747D: call    sub_6E78D0
0x6E7482: fld     [esp+58h+arg_0]
0x6E7486: mov     ebp, eax
0x6E7488: lea     eax, [esp+58h+var_44]
0x6E748C: push    eax
0x6E748D: lea     ecx, [esp+5Ch+arg_C]
0x6E7491: push    ecx
0x6E7492: push    ecx
0x6E7493: mov     ecx, ebp
0x6E7495: fstp    [esp+64h+var_64]
0x6E7498: mov     [esp+64h+var_48], ebp
0x6E749C: call    sub_6E6B50
0x6E74A1: fld     [esp+58h+arg_18]
0x6E74A5: mov     edi, [esp+58h+arg_8]
0x6E74A9: mov     ecx, [esi+0Ch]
0x6E74AC: lea     eax, ds:0[edi*4]
0x6E74B3: push    eax; int
0x6E74B4: lea     edx, [esp+5Ch+var_40]
0x6E74B8: push    edx; int
0x6E74B9: sub     esp, 8
0x6E74BC: fstp    [esp+68h+var_64]; float
0x6E74C0: fld     [esp+68h+arg_14]
0x6E74C7: fstp    [esp+68h+var_68]; float
0x6E74CA: push    eax; int
0x6E74CB: mov     eax, [esp+6Ch+arg_C]
0x6E74CF: imul    eax, edi
0x6E74D2: add     eax, [esp+6Ch+arg_10]
0x6E74D9: lea     edx, [ecx+eax*2]
0x6E74DC: push    edx; int
0x6E74DD: call    sub_730840
0x6E74E2: fld     dword ptr [ebp+4]
0x6E74E5: mov     ebx, [esp+70h+arg_4]
0x6E74E9: fstp    [esp+70h+arg_0]
0x6E74ED: fld     [esp+70h+arg_0]
0x6E74F1: add     esp, 18h
0x6E74F4: xor     ecx, ecx
0x6E74F6: xor     esi, esi
0x6E74F8: cmp     edi, 4
0x6E74FB: jl      short loc_6E7565
0x6E74FD: lea     edx, [esp+58h+var_3C]
0x6E7501: fld     st
0x6E7503: sub     edx, ebx
0x6E7505: mov     [esp+58h+arg_8], edx
0x6E7509: lea     edx, [edi-4]
0x6E750C: lea     ebp, [esp+58h+var_40]
0x6E7510: sub     ebp, ebx
0x6E7512: shr     edx, 2
0x6E7515: add     edx, 1
0x6E7518: lea     eax, [ebx+8]
0x6E751B: mov     [esp+58h+arg_0], ebp
0x6E751F: lea     esi, ds:0[edx*4]
0x6E7526: jmp     short loc_6E752C
0x6E7528: mov     ebp, [esp+58h+arg_0]
0x6E752C: fld     [esp+ecx*4+58h+var_40]
0x6E7530: add     ecx, 4
0x6E7533: fmul    st, st(1)
0x6E7535: add     eax, 10h
0x6E7538: sub     edx, 1
0x6E753B: fstp    dword ptr [eax-18h]
0x6E753E: fld     [esp+ecx*4+58h+var_4C]
0x6E7542: fmul    st, st(1)
0x6E7544: fstp    dword ptr [eax-14h]
0x6E7547: fld     dword ptr [eax+ebp-10h]
0x6E754B: mov     ebp, [esp+58h+arg_8]
0x6E754F: fmul    st, st(1)
0x6E7551: fstp    dword ptr [eax-10h]
0x6E7554: fld     dword ptr [eax+ebp-10h]
0x6E7558: fmul    st, st(1)
0x6E755A: fstp    dword ptr [eax-0Ch]
0x6E755D: jnz     short loc_6E7528
0x6E755F: mov     ebp, [esp+58h+var_48]
0x6E7563: fstp    st
0x6E7565: cmp     esi, edi
0x6E7567: jnb     short loc_6E757D
0x6E7569: fld     [esp+ecx*4+58h+var_40]
0x6E756D: add     esi, 1
0x6E7570: fmul    st, st(1)
0x6E7572: add     ecx, 1
0x6E7575: cmp     esi, edi
0x6E7577: fstp    dword ptr [ebx+esi*4-4]
0x6E757B: jb      short loc_6E7569
0x6E757D: mov     edx, [esp+58h+arg_C]
0x6E7581: fstp    st
0x6E7583: mov     eax, [esp+58h+var_44]
0x6E7587: add     edx, 1
0x6E758A: cmp     edx, eax
0x6E758C: jg      loc_6E7635
0x6E7592: mov     esi, edx
0x6E7594: sub     esi, [esp+58h+arg_C]
0x6E7598: sub     eax, edx
0x6E759A: add     eax, 1
0x6E759D: lea     ebp, [ebp+esi*4+4]
0x6E75A1: mov     [esp+58h+arg_C], eax
0x6E75A5: fld     dword ptr [ebp+0]
0x6E75A8: xor     edx, edx
0x6E75AA: cmp     edi, 4
0x6E75AD: fstp    [esp+58h+arg_0]
0x6E75B1: fld     [esp+58h+arg_0]
0x6E75B5: jl      short loc_6E7609
0x6E75B7: lea     esi, [edi-4]
0x6E75BA: fld     st
0x6E75BC: shr     esi, 2
0x6E75BF: add     esi, 1
0x6E75C2: lea     eax, [ebx+8]
0x6E75C5: lea     edx, ds:0[esi*4]
0x6E75CC: fld     [esp+ecx*4+58h+var_40]
0x6E75D0: add     ecx, 4
0x6E75D3: fmul    st, st(1)
0x6E75D5: add     eax, 10h
0x6E75D8: sub     esi, 1
0x6E75DB: fadd    dword ptr [eax-18h]
0x6E75DE: fstp    dword ptr [eax-18h]
0x6E75E1: fld     [esp+ecx*4+58h+var_4C]
0x6E75E5: fmul    st, st(1)
0x6E75E7: fadd    dword ptr [eax-14h]
0x6E75EA: fstp    dword ptr [eax-14h]
0x6E75ED: fld     [esp+ecx*4+58h+var_48]
0x6E75F1: fmul    st, st(1)
0x6E75F3: fadd    dword ptr [eax-10h]
0x6E75F6: fstp    dword ptr [eax-10h]
0x6E75F9: fld     [esp+ecx*4+58h+var_44]
0x6E75FD: fmul    st, st(1)
0x6E75FF: fadd    dword ptr [eax-0Ch]
0x6E7602: fstp    dword ptr [eax-0Ch]
0x6E7605: jnz     short loc_6E75CC
0x6E7607: fstp    st
0x6E7609: cmp     edx, edi
0x6E760B: jnb     short loc_6E7625
0x6E760D: fld     [esp+ecx*4+58h+var_40]
0x6E7611: add     edx, 1
0x6E7614: fmul    st, st(1)
0x6E7616: add     ecx, 1
0x6E7619: cmp     edx, edi
0x6E761B: fadd    dword ptr [ebx+edx*4-4]
0x6E761F: fstp    dword ptr [ebx+edx*4-4]
0x6E7623: jb      short loc_6E760D
0x6E7625: add     ebp, 4
0x6E7628: fstp    st
0x6E762A: sub     [esp+58h+arg_C], 1
0x6E762F: jnz     loc_6E75A5
0x6E7635: pop     edi
0x6E7636: pop     esi
0x6E7637: pop     ebp
0x6E7638: pop     ebx
0x6E7639: add     esp, 48h
0x6E763C: retn    1Ch
