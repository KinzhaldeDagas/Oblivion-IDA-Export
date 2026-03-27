0x7102B0: fld     dword ptr [ecx+20h]
0x7102B3: mov     eax, [esp+arg_0]
0x7102B7: fmul    dword ptr [ecx+10h]
0x7102BA: lea     edx, [eax+8]
0x7102BD: fld     dword ptr [ecx+1Ch]
0x7102C0: fmul    dword ptr [ecx+14h]
0x7102C3: fsubp   st(1), st
0x7102C5: fstp    dword ptr [eax]
0x7102C7: fld     dword ptr [ecx+1Ch]
0x7102CA: fmul    dword ptr [ecx+8]
0x7102CD: fld     dword ptr [ecx+4]
0x7102D0: fmul    dword ptr [ecx+20h]
0x7102D3: fsubp   st(1), st
0x7102D5: fstp    dword ptr [eax+4]
0x7102D8: fld     dword ptr [ecx+4]
0x7102DB: fmul    dword ptr [ecx+14h]
0x7102DE: fld     dword ptr [ecx+8]
0x7102E1: fmul    dword ptr [ecx+10h]
0x7102E4: fsubp   st(1), st
0x7102E6: fstp    dword ptr [edx]
0x7102E8: fld     dword ptr [ecx+18h]
0x7102EB: fmul    dword ptr [ecx+14h]
0x7102EE: fld     dword ptr [ecx+0Ch]
0x7102F1: fmul    dword ptr [ecx+20h]
0x7102F4: fsubp   st(1), st
0x7102F6: fstp    dword ptr [eax+0Ch]
0x7102F9: fld     dword ptr [ecx]
0x7102FB: fmul    dword ptr [ecx+20h]
0x7102FE: fld     dword ptr [ecx+18h]
0x710301: fmul    dword ptr [ecx+8]
0x710304: fsubp   st(1), st
0x710306: fstp    dword ptr [eax+10h]
0x710309: fld     dword ptr [ecx+0Ch]
0x71030C: fmul    dword ptr [ecx+8]
0x71030F: fld     dword ptr [ecx+14h]
0x710312: fmul    dword ptr [ecx]
0x710314: fsubp   st(1), st
0x710316: fstp    dword ptr [eax+14h]
0x710319: fld     dword ptr [ecx+0Ch]
0x71031C: fmul    dword ptr [ecx+1Ch]
0x71031F: fld     dword ptr [ecx+18h]
0x710322: fmul    dword ptr [ecx+10h]
0x710325: fsubp   st(1), st
0x710327: fstp    dword ptr [eax+18h]
0x71032A: fld     dword ptr [ecx+4]
0x71032D: fmul    dword ptr [ecx+18h]
0x710330: fld     dword ptr [ecx+1Ch]
0x710333: fmul    dword ptr [ecx]
0x710335: fsubp   st(1), st
0x710337: fstp    dword ptr [eax+1Ch]
0x71033A: fld     dword ptr [ecx]
0x71033C: fmul    dword ptr [ecx+10h]
0x71033F: fld     dword ptr [ecx+0Ch]
0x710342: fmul    dword ptr [ecx+4]
0x710345: fsubp   st(1), st
0x710347: fstp    dword ptr [eax+20h]
0x71034A: fld     dword ptr [eax]
0x71034C: fmul    dword ptr [ecx]
0x71034E: fld     dword ptr [ecx+4]
0x710351: fmul    dword ptr [eax+0Ch]
0x710354: faddp   st(1), st
0x710356: fld     dword ptr [eax+18h]
0x710359: fmul    dword ptr [ecx+8]
0x71035C: faddp   st(1), st
0x71035E: fstp    [esp+arg_0]
0x710362: fld     [esp+arg_0]
0x710366: fld     st
0x710368: fabs
0x71036A: fstp    [esp+arg_0]
0x71036E: fld     [esp+arg_0]
0x710372: fcomp   dword ptr ds:0A372CCh
0x710378: fnstsw  ax
0x71037A: test    ah, 41h
0x71037D: jp      short loc_710386
0x71037F: xor     al, al
0x710381: fstp    st
0x710383: retn    4
0x710386: fld1
0x710388: mov     eax, edx
0x71038A: fdivrp  st(1), st
0x71038C: mov     ecx, 3
0x710391: fstp    [esp+arg_0]
0x710395: fld     [esp+arg_0]
0x710399: fld     dword ptr [eax-8]
0x71039C: add     eax, 0Ch
0x71039F: sub     ecx, 1
0x7103A2: fmul    st, st(1)
0x7103A4: fstp    dword ptr [eax-14h]
0x7103A7: fld     dword ptr [eax-10h]
0x7103AA: fmul    st, st(1)
0x7103AC: fstp    dword ptr [eax-10h]
0x7103AF: fld     dword ptr [eax-0Ch]
0x7103B2: fmul    st, st(1)
0x7103B4: fstp    dword ptr [eax-0Ch]
0x7103B7: jnz     short loc_710399
0x7103B9: mov     al, 1
0x7103BB: fstp    st
0x7103BD: retn    4
