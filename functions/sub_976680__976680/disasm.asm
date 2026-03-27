0x976680: sub     esp, 28h
0x976683: push    esi
0x976684: mov     esi, ecx
0x976686: fld     dword ptr [esi+68h]
0x976689: lea     ecx, [esi+3Ch]
0x97668C: fstp    [esp+2Ch+var_28]
0x976690: fld     dword ptr [esi+54h]
0x976693: fld     [esp+2Ch+var_28]
0x976697: fld     st
0x976699: fmulp   st(2), st
0x97669B: fxch    st(1)
0x97669D: fstp    [esp+2Ch+var_C]
0x9766A1: fld     dword ptr [esi+58h]
0x9766A4: fmul    st, st(1)
0x9766A6: fstp    [esp+2Ch+var_8]
0x9766AA: fmul    dword ptr [esi+5Ch]
0x9766AD: fstp    [esp+2Ch+var_4]
0x9766B1: fld     dword ptr [esi+64h]
0x9766B4: fstp    [esp+2Ch+var_28]
0x9766B8: fld     dword ptr [esi+48h]
0x9766BB: fld     [esp+2Ch+var_28]
0x9766BF: fld     st
0x9766C1: fmulp   st(2), st
0x9766C3: fxch    st(1)
0x9766C5: fstp    [esp+2Ch+var_24]
0x9766C9: fld     dword ptr [esi+4Ch]
0x9766CC: fmul    st, st(1)
0x9766CE: fstp    [esp+2Ch+var_20]
0x9766D2: fmul    dword ptr [esi+50h]
0x9766D5: fstp    [esp+2Ch+var_1C]
0x9766D9: fld     dword ptr [ecx]
0x9766DB: fadd    [esp+2Ch+var_24]
0x9766DF: fstp    [esp+2Ch+var_18]
0x9766E3: fld     dword ptr [ecx+4]
0x9766E6: fadd    [esp+2Ch+var_20]
0x9766EA: fstp    [esp+2Ch+var_14]
0x9766EE: fld     dword ptr [ecx+8]
0x9766F1: fadd    [esp+2Ch+var_1C]
0x9766F5: fstp    [esp+2Ch+var_10]
0x9766F9: fld     [esp+2Ch+var_18]
0x9766FD: fadd    [esp+2Ch+var_C]
0x976701: fstp    [esp+2Ch+var_24]
0x976705: mov     eax, [esp+2Ch+var_24]
0x976709: fld     [esp+2Ch+var_14]
0x97670D: mov     [esi+20h], eax
0x976710: fadd    [esp+2Ch+var_8]
0x976714: fstp    [esp+2Ch+var_20]
0x976718: mov     edx, [esp+2Ch+var_20]
0x97671C: fld     [esp+2Ch+var_10]
0x976720: mov     [esi+24h], edx
0x976723: fadd    [esp+2Ch+var_4]
0x976727: lea     edx, [esp+2Ch+var_18]
0x97672B: push    edx
0x97672C: fstp    [esp+30h+var_1C]
0x976730: mov     eax, [esp+30h+var_1C]
0x976734: mov     [esi+28h], eax
0x976737: call    sub_9741F0
0x97673C: fld     dword ptr [eax]
0x97673E: cmp     dword ptr [esi+18h], 2
0x976742: fchs
0x976744: fstp    [esp+2Ch+var_C]
0x976748: fld     dword ptr [eax+4]
0x97674B: fchs
0x97674D: fstp    [esp+2Ch+var_8]
0x976751: mov     ecx, [esp+2Ch+var_8]
0x976755: fld     dword ptr [eax+8]
0x976758: mov     eax, [esp+2Ch+var_C]
0x97675C: fchs
0x97675E: mov     [esi+2Ch], eax
0x976761: fstp    [esp+2Ch+var_4]
0x976765: mov     edx, [esp+2Ch+var_4]
0x976769: mov     [esi+30h], ecx
0x97676C: mov     [esi+34h], edx
0x97676F: jnz     short loc_9767BA
0x976771: fld     dword ptr [esi+1Ch]
0x976774: mov     eax, [esp+2Ch+arg_4]
0x976778: fstp    [esp+2Ch+var_28]
0x97677C: fld     dword ptr [eax]
0x97677E: fld     [esp+2Ch+var_28]
0x976782: fld     st
0x976784: fmulp   st(2), st
0x976786: fxch    st(1)
0x976788: fstp    [esp+2Ch+var_C]
0x97678C: fld     dword ptr [eax+4]
0x97678F: fmul    st, st(1)
0x976791: fstp    [esp+2Ch+var_8]
0x976795: fmul    dword ptr [eax+8]
0x976798: fstp    [esp+2Ch+var_4]
0x97679C: fld     dword ptr [esi+20h]
0x97679F: fadd    [esp+2Ch+var_C]
0x9767A3: fstp    dword ptr [esi+20h]
0x9767A6: fld     dword ptr [esi+24h]
0x9767A9: fadd    [esp+2Ch+var_8]
0x9767AD: fstp    dword ptr [esi+24h]
0x9767B0: fld     [esp+2Ch+var_4]
0x9767B4: fadd    dword ptr [esi+28h]
0x9767B7: fstp    dword ptr [esi+28h]
0x9767BA: pop     esi
0x9767BB: add     esp, 28h
0x9767BE: retn    8
