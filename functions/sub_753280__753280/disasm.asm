0x753280: sub     esp, 18h
0x753283: mov     eax, [esp+18h+arg_C]
0x753287: mov     ecx, [esp+18h+arg_4]
0x75328B: fld     dword ptr [eax]
0x75328D: fsub    dword ptr [ecx]
0x75328F: fstp    [esp+18h+var_18]
0x753292: fld     dword ptr [eax+4]
0x753295: fsub    dword ptr [ecx+4]
0x753298: fstp    [esp+18h+var_14]
0x75329C: fld     dword ptr [eax+8]
0x75329F: fsub    dword ptr [ecx+8]
0x7532A2: mov     ecx, [esp+18h+arg_8]
0x7532A6: fstp    [esp+18h+var_10]
0x7532AA: fld     dword ptr [ecx]
0x7532AC: fld     [esp+18h+var_18]
0x7532AF: fld     st
0x7532B1: fmulp   st(2), st
0x7532B3: fld     [esp+18h+var_14]
0x7532B7: fld     st
0x7532B9: fmul    dword ptr [ecx+4]
0x7532BC: faddp   st(3), st
0x7532BE: fld     [esp+18h+var_10]
0x7532C2: fld     st
0x7532C4: fmul    dword ptr [ecx+8]
0x7532C7: faddp   st(4), st
0x7532C9: fxch    st(3)
0x7532CB: fstp    [esp+18h+arg_C]
0x7532CF: fld     dword ptr [ecx]
0x7532D1: fld     [esp+18h+arg_C]
0x7532D5: fld     st
0x7532D7: fmulp   st(2), st
0x7532D9: fxch    st(1)
0x7532DB: fstp    [esp+18h+var_C]
0x7532DF: fld     st
0x7532E1: fmul    dword ptr [ecx+4]
0x7532E4: fstp    [esp+18h+var_8]
0x7532E8: fmul    dword ptr [ecx+8]
0x7532EB: fstp    [esp+18h+var_4]
0x7532EF: fld     [esp+18h+var_C]
0x7532F3: fsubp   st(2), st
0x7532F5: fxch    st(1)
0x7532F7: fstp    [esp+18h+var_18]
0x7532FA: fsub    [esp+18h+var_8]
0x7532FE: fstp    [esp+18h+var_14]
0x753302: fsub    [esp+18h+var_4]
0x753306: fstp    [esp+18h+var_10]
0x75330A: fld     [esp+18h+var_18]
0x75330D: fld     dword ptr ds:0B3F9A8h
0x753313: fucompp
0x753315: fnstsw  ax
0x753317: test    ah, 44h
0x75331A: jp      short loc_75335F
0x75331C: fld     [esp+18h+var_14]
0x753320: fld     dword ptr ds:0B3F9ACh
0x753326: fucompp
0x753328: fnstsw  ax
0x75332A: test    ah, 44h
0x75332D: jp      short loc_75335F
0x75332F: fld     [esp+18h+var_10]
0x753333: fld     dword ptr ds:0B3F9B0h
0x753339: fucompp
0x75333B: fnstsw  ax
0x75333D: test    ah, 44h
0x753340: jp      short loc_75335F
0x753342: mov     eax, [esp+18h+arg_0]
0x753346: mov     ecx, [esp+18h+var_18]
0x753349: mov     edx, [esp+18h+var_14]
0x75334D: mov     [eax], ecx
0x75334F: mov     ecx, [esp+18h+var_10]
0x753353: mov     [eax+4], edx
0x753356: mov     [eax+8], ecx
0x753359: add     esp, 18h
0x75335C: retn    10h
0x75335F: push    esi
0x753360: mov     esi, [esp+1Ch+arg_0]
0x753364: lea     edx, [esp+1Ch+var_18]
0x753368: push    edx
0x753369: push    esi
0x75336A: call    sub_4BF9E0
0x75336F: mov     eax, esi
0x753371: pop     esi
0x753372: add     esp, 18h
0x753375: retn    10h
