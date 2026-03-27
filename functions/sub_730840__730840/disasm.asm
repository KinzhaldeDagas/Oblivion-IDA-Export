0x730840: fld     [esp+arg_C]
0x730844: mov     eax, [esp+arg_0]
0x730848: fld     [esp+arg_8]
0x73084C: push    ebx
0x73084D: mov     ebx, [esp+4+arg_10]
0x730851: fld     qword ptr ds:0A3D5A8h
0x730857: push    esi
0x730858: push    edi
0x730859: mov     edi, [esp+0Ch+arg_14]
0x73085D: xor     esi, esi
0x73085F: cmp     edi, 4
0x730862: jl      loc_7308EB
0x730868: lea     edx, [edi-4]
0x73086B: fld     st(2)
0x73086D: shr     edx, 2
0x730870: fld     st(2)
0x730872: add     eax, 4
0x730875: add     edx, 1
0x730878: lea     ecx, [ebx+8]
0x73087B: lea     esi, ds:0[edx*4]
0x730882: push    ebp
0x730883: movsx   ebp, word ptr [eax-4]
0x730887: mov     [esp+10h+arg_14], ebp
0x73088B: add     eax, 8
0x73088E: add     ecx, 10h
0x730891: sub     edx, 1
0x730894: fild    [esp+10h+arg_14]
0x730898: fdiv    st, st(3)
0x73089A: fmul    st, st(2)
0x73089C: fadd    st, st(1)
0x73089E: fstp    dword ptr [ecx-18h]
0x7308A1: movsx   ebp, word ptr [eax-0Ah]
0x7308A5: mov     [esp+10h+arg_14], ebp
0x7308A9: fild    [esp+10h+arg_14]
0x7308AD: fdiv    st, st(3)
0x7308AF: fmul    st, st(2)
0x7308B1: fadd    st, st(1)
0x7308B3: fstp    dword ptr [ecx-14h]
0x7308B6: movsx   ebp, word ptr [eax-8]
0x7308BA: mov     [esp+10h+arg_14], ebp
0x7308BE: fild    [esp+10h+arg_14]
0x7308C2: fdiv    st, st(3)
0x7308C4: fmul    st, st(2)
0x7308C6: fadd    st, st(1)
0x7308C8: fstp    dword ptr [ecx-10h]
0x7308CB: movsx   ebp, word ptr [eax-6]
0x7308CF: mov     [esp+10h+arg_14], ebp
0x7308D3: fild    [esp+10h+arg_14]
0x7308D7: fdiv    st, st(3)
0x7308D9: fmul    st, st(2)
0x7308DB: fadd    st, st(1)
0x7308DD: fstp    dword ptr [ecx-0Ch]
0x7308E0: jnz     short loc_730883
0x7308E2: mov     eax, [esp+10h+arg_0]
0x7308E6: fstp    st(1)
0x7308E8: fstp    st
0x7308EA: pop     ebp
0x7308EB: cmp     esi, edi
0x7308ED: jnb     short loc_730916
0x7308EF: movsx   ecx, word ptr [eax+esi*2]
0x7308F3: mov     [esp+0Ch+arg_14], ecx
0x7308F7: add     esi, 1
0x7308FA: cmp     esi, edi
0x7308FC: fild    [esp+0Ch+arg_14]
0x730900: fdiv    st, st(1)
0x730902: fmul    st, st(3)
0x730904: fadd    st, st(2)
0x730906: fstp    dword ptr [ebx+esi*4-4]
0x73090A: jb      short loc_7308EF
0x73090C: fstp    st(2)
0x73090E: pop     edi
0x73090F: fstp    st
0x730911: pop     esi
0x730912: fstp    st
0x730914: pop     ebx
0x730915: retn
0x730916: fstp    st
0x730918: pop     edi
0x730919: fstp    st(1)
0x73091B: pop     esi
0x73091C: fstp    st
0x73091E: pop     ebx
0x73091F: retn
