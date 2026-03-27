0x55A3B0: mov     edx, [esp+arg_0]
0x55A3B4: sub     esp, 18h
0x55A3B7: cmp     dword ptr [edx], 0
0x55A3BA: jz      loc_55A6A4
0x55A3C0: push    ebp
0x55A3C1: mov     ebp, [esp+1Ch+arg_4]
0x55A3C5: test    ebp, ebp
0x55A3C7: jz      loc_55A6A3
0x55A3CD: fldz
0x55A3CF: fld     [esp+1Ch+arg_C]
0x55A3D3: fcom    st(1)
0x55A3D5: fnstsw  ax
0x55A3D7: fstp    st(1)
0x55A3D9: test    ah, 41h
0x55A3DC: jnp     loc_55A6A1
0x55A3E2: fld1
0x55A3E4: fcomp   st(1)
0x55A3E6: fnstsw  ax
0x55A3E8: test    ah, 5
0x55A3EB: jnp     loc_55A6A1
0x55A3F1: cmp     dword ptr [ecx+4], 0
0x55A3F5: jz      loc_55A6A1
0x55A3FB: mov     eax, [ecx+8]
0x55A3FE: cmp     ebp, eax
0x55A400: jnb     short loc_55A408
0x55A402: mov     [esp+1Ch+arg_0], ebp
0x55A406: jmp     short loc_55A40E
0x55A408: mov     [esp+1Ch+arg_0], eax
0x55A40C: mov     ebp, eax
0x55A40E: mov     eax, [edx]
0x55A410: push    esi
0x55A411: mov     esi, [edx+4]
0x55A414: mov     edx, [edx+8]
0x55A417: mov     [esp+20h+var_4], edx
0x55A41B: xor     edx, edx
0x55A41D: cmp     ebp, 4
0x55A420: push    edi
0x55A421: jl      loc_55A61C
0x55A427: add     ebp, 0FFFFFFFCh
0x55A42A: fld     st
0x55A42C: shr     ebp, 2
0x55A42F: xor     edi, edi
0x55A431: add     ebp, 1
0x55A434: lea     edx, ds:0[ebp*4]
0x55A43B: mov     [esp+24h+arg_4], edx
0x55A43F: push    ebx
0x55A440: mov     edx, [eax]
0x55A442: mov     [esp+28h+var_18], edx
0x55A446: mov     edx, [eax+4]
0x55A449: mov     [esp+28h+var_14], edx
0x55A44D: mov     edx, [eax+8]
0x55A450: mov     [esp+28h+var_10], edx
0x55A454: mov     edx, [ecx+4]
0x55A457: fld     dword ptr [edx+edi]
0x55A45A: add     edx, edi
0x55A45C: fmul    st, st(1)
0x55A45E: lea     ebx, [edi+24h]
0x55A461: fstp    [esp+28h+var_C]
0x55A465: fld     dword ptr [edx+4]
0x55A468: fmul    st, st(1)
0x55A46A: fstp    [esp+28h+var_8]
0x55A46E: fld     dword ptr [edx+8]
0x55A471: fmul    st, st(1)
0x55A473: fstp    [esp+28h+var_4]
0x55A477: fld     [esp+28h+var_C]
0x55A47B: fadd    [esp+28h+var_18]
0x55A47F: fstp    [esp+28h+var_18]
0x55A483: mov     edx, [esp+28h+var_18]
0x55A487: fld     [esp+28h+var_14]
0x55A48B: mov     [eax], edx
0x55A48D: fadd    [esp+28h+var_8]
0x55A491: fstp    [esp+28h+var_14]
0x55A495: mov     edx, [esp+28h+var_14]
0x55A499: fld     [esp+28h+var_10]
0x55A49D: mov     [eax+4], edx
0x55A4A0: fadd    [esp+28h+var_4]
0x55A4A4: fstp    [esp+28h+var_10]
0x55A4A8: mov     edx, [esp+28h+var_10]
0x55A4AC: mov     [eax+8], edx
0x55A4AF: mov     edx, [eax+esi]
0x55A4B2: mov     [esp+28h+var_18], edx
0x55A4B6: mov     edx, [eax+esi+4]
0x55A4BA: add     eax, esi
0x55A4BC: mov     [esp+28h+var_14], edx
0x55A4C0: mov     edx, [eax+8]
0x55A4C3: mov     [esp+28h+var_10], edx
0x55A4C7: mov     edx, [ecx+4]
0x55A4CA: fld     dword ptr [edi+edx+0Ch]
0x55A4CE: lea     edx, [edi+edx+0Ch]
0x55A4D2: fmul    st, st(1)
0x55A4D4: fstp    [esp+28h+var_C]
0x55A4D8: fld     dword ptr [edx+4]
0x55A4DB: fmul    st, st(1)
0x55A4DD: fstp    [esp+28h+var_8]
0x55A4E1: fld     dword ptr [edx+8]
0x55A4E4: fmul    st, st(1)
0x55A4E6: fstp    [esp+28h+var_4]
0x55A4EA: fld     [esp+28h+var_C]
0x55A4EE: fadd    [esp+28h+var_18]
0x55A4F2: fstp    [esp+28h+var_18]
0x55A4F6: mov     edx, [esp+28h+var_18]
0x55A4FA: fld     [esp+28h+var_14]
0x55A4FE: mov     [eax], edx
0x55A500: fadd    [esp+28h+var_8]
0x55A504: fstp    [esp+28h+var_14]
0x55A508: mov     edx, [esp+28h+var_14]
0x55A50C: fld     [esp+28h+var_10]
0x55A510: mov     [eax+4], edx
0x55A513: fadd    [esp+28h+var_4]
0x55A517: fstp    [esp+28h+var_10]
0x55A51B: mov     edx, [esp+28h+var_10]
0x55A51F: mov     [eax+8], edx
0x55A522: mov     edx, [eax+esi]
0x55A525: add     eax, esi
0x55A527: mov     [esp+28h+var_18], edx
0x55A52B: mov     edx, [eax+4]
0x55A52E: mov     [esp+28h+var_14], edx
0x55A532: mov     edx, [eax+8]
0x55A535: mov     [esp+28h+var_10], edx
0x55A539: mov     edx, [ecx+4]
0x55A53C: fld     dword ptr [ebx+edx-0Ch]
0x55A540: lea     edx, [ebx+edx-0Ch]
0x55A544: fmul    st, st(1)
0x55A546: fstp    [esp+28h+var_C]
0x55A54A: fld     dword ptr [edx+4]
0x55A54D: fmul    st, st(1)
0x55A54F: fstp    [esp+28h+var_8]
0x55A553: fld     dword ptr [edx+8]
0x55A556: add     edi, 30h ; '0'
0x55A559: fmul    st, st(1)
0x55A55B: fstp    [esp+28h+var_4]
0x55A55F: fld     [esp+28h+var_C]
0x55A563: fadd    [esp+28h+var_18]
0x55A567: fstp    [esp+28h+var_18]
0x55A56B: mov     edx, [esp+28h+var_18]
0x55A56F: fld     [esp+28h+var_14]
0x55A573: mov     [eax], edx
0x55A575: fadd    [esp+28h+var_8]
0x55A579: fstp    [esp+28h+var_14]
0x55A57D: mov     edx, [esp+28h+var_14]
0x55A581: fld     [esp+28h+var_10]
0x55A585: mov     [eax+4], edx
0x55A588: fadd    [esp+28h+var_4]
0x55A58C: fstp    [esp+28h+var_10]
0x55A590: mov     edx, [esp+28h+var_10]
0x55A594: mov     [eax+8], edx
0x55A597: mov     edx, [eax+esi]
0x55A59A: add     eax, esi
0x55A59C: mov     [esp+28h+var_18], edx
0x55A5A0: mov     edx, [eax+4]
0x55A5A3: mov     [esp+28h+var_14], edx
0x55A5A7: mov     edx, [eax+8]
0x55A5AA: mov     [esp+28h+var_10], edx
0x55A5AE: mov     edx, [ecx+4]
0x55A5B1: fld     dword ptr [edx+ebx]
0x55A5B4: add     edx, ebx
0x55A5B6: fmul    st, st(1)
0x55A5B8: fstp    [esp+28h+var_C]
0x55A5BC: fld     dword ptr [edx+4]
0x55A5BF: fmul    st, st(1)
0x55A5C1: fstp    [esp+28h+var_8]
0x55A5C5: fld     dword ptr [edx+8]
0x55A5C8: fmul    st, st(1)
0x55A5CA: fstp    [esp+28h+var_4]
0x55A5CE: fld     [esp+28h+var_C]
0x55A5D2: fadd    [esp+28h+var_18]
0x55A5D6: fstp    [esp+28h+var_18]
0x55A5DA: mov     edx, [esp+28h+var_18]
0x55A5DE: fld     [esp+28h+var_14]
0x55A5E2: mov     [eax], edx
0x55A5E4: fadd    [esp+28h+var_8]
0x55A5E8: fstp    [esp+28h+var_14]
0x55A5EC: mov     edx, [esp+28h+var_14]
0x55A5F0: fld     [esp+28h+var_10]
0x55A5F4: mov     [eax+4], edx
0x55A5F7: fadd    [esp+28h+var_4]
0x55A5FB: fstp    [esp+28h+var_10]
0x55A5FF: mov     edx, [esp+28h+var_10]
0x55A603: mov     [eax+8], edx
0x55A606: add     eax, esi
0x55A608: sub     ebp, 1
0x55A60B: jnz     loc_55A440
0x55A611: mov     edx, [esp+28h+arg_4]
0x55A615: fstp    st
0x55A617: mov     ebp, [esp+28h+arg_0]
0x55A61B: pop     ebx
0x55A61C: cmp     edx, ebp
0x55A61E: jnb     short loc_55A69F
0x55A620: lea     edi, [edx+edx*2]
0x55A623: add     edi, edi
0x55A625: add     edi, edi
0x55A627: sub     ebp, edx
0x55A629: mov     edx, [eax]
0x55A62B: mov     [esp+24h+var_18], edx
0x55A62F: mov     edx, [eax+4]
0x55A632: mov     [esp+24h+var_14], edx
0x55A636: mov     edx, [eax+8]
0x55A639: mov     [esp+24h+var_10], edx
0x55A63D: mov     edx, [ecx+4]
0x55A640: fld     dword ptr [edx+edi]
0x55A643: add     edx, edi
0x55A645: fmul    st, st(1)
0x55A647: add     edi, 0Ch
0x55A64A: fstp    [esp+24h+var_C]
0x55A64E: fld     dword ptr [edx+4]
0x55A651: fmul    st, st(1)
0x55A653: fstp    [esp+24h+var_8]
0x55A657: fld     dword ptr [edx+8]
0x55A65A: fmul    st, st(1)
0x55A65C: fstp    [esp+24h+var_4]
0x55A660: fld     [esp+24h+var_C]
0x55A664: fadd    [esp+24h+var_18]
0x55A668: fstp    [esp+24h+var_18]
0x55A66C: mov     edx, [esp+24h+var_18]
0x55A670: fld     [esp+24h+var_14]
0x55A674: mov     [eax], edx
0x55A676: fadd    [esp+24h+var_8]
0x55A67A: fstp    [esp+24h+var_14]
0x55A67E: mov     edx, [esp+24h+var_14]
0x55A682: fld     [esp+24h+var_10]
0x55A686: mov     [eax+4], edx
0x55A689: fadd    [esp+24h+var_4]
0x55A68D: fstp    [esp+24h+var_10]
0x55A691: mov     edx, [esp+24h+var_10]
0x55A695: mov     [eax+8], edx
0x55A698: add     eax, esi
0x55A69A: sub     ebp, 1
0x55A69D: jnz     short loc_55A629
0x55A69F: pop     edi
0x55A6A0: pop     esi
0x55A6A1: fstp    st
0x55A6A3: pop     ebp
0x55A6A4: add     esp, 18h
0x55A6A7: retn    10h
