0x5E2210: fldz
0x5E2212: mov     eax, [esp+arg_0]
0x5E2216: push    ebx
0x5E2217: mov     ebx, [esp+4+arg_8]
0x5E221B: push    esi
0x5E221C: push    edi
0x5E221D: mov     edi, [esp+0Ch+arg_4]
0x5E2221: fstp    dword ptr [edi]
0x5E2223: mov     esi, ecx
0x5E2225: fld1
0x5E2227: lea     ecx, [eax-8]
0x5E222A: cmp     ecx, 3
0x5E222D: fstp    dword ptr [ebx]
0x5E222F: ja      Actor_GetBaseAVCalcFactors___Done
0x5E2235: add     eax, 0FFFFFFF8h; switch 4 cases
0x5E2238: cmp     eax, 3
0x5E223B: ja      Actor_GetBaseAVCalcFactors___Done
0x5E2241: jmp     ds:jpt_5E2241[eax*4]; switch jump
0x5E2248: mov     edx, [esi]; jumptable 005E2241 case 8
0x5E224A: mov     eax, [edx+284h]
0x5E2250: push    5
0x5E2252: mov     ecx, esi
0x5E2254: call    eax
0x5E2256: mov     edx, [esi]
0x5E2258: push    eax
0x5E2259: mov     eax, [edx+284h]
0x5E225F: push    0
0x5E2261: mov     ecx, esi
0x5E2263: call    eax
0x5E2265: push    eax
0x5E2266: call    Calc_ActorBaseHealth
0x5E226B: mov     [esp+1Ch], eax
0x5E226F: fild    dword ptr [esp+1Ch]
0x5E2273: add     esp, 8
0x5E2276: fstp    dword ptr [edi]
0x5E2278: pop     edi
0x5E2279: pop     esi
0x5E227A: pop     ebx
0x5E227B: retn    0Ch
0x5E227E: mov     edx, [esi]; jumptable 005E2241 case 9
0x5E2280: mov     eax, [edx+288h]
0x5E2286: push    28h ; '('
0x5E2288: mov     ecx, esi
0x5E228A: call    eax
0x5E228C: fdiv    qword ptr ds:0A3F3E8h
0x5E2292: mov     eax, [esi]
0x5E2294: fstp    dword ptr [ebx]
0x5E2296: cmp     esi, ds:0B333C4h
0x5E229C: setz    cl
0x5E229F: mov     byte ptr [esp+10h+arg_0], cl
0x5E22A3: mov     edx, [esp+10h+arg_0]
0x5E22A7: push    edx
0x5E22A8: mov     edx, [eax+284h]
0x5E22AE: push    1; float
0x5E22B0: mov     ecx, esi
0x5E22B2: call    edx
0x5E22B4: push    eax; int
0x5E22B5: call    Calc_ActorBaseMagicka
0x5E22BA: mov     [esp+1Ch], eax
0x5E22BE: fild    dword ptr [esp+1Ch]
0x5E22C2: add     esp, 8
0x5E22C5: fstp    dword ptr [edi]
0x5E22C7: pop     edi
0x5E22C8: pop     esi
0x5E22C9: pop     ebx
0x5E22CA: retn    0Ch
0x5E22CD: mov     eax, [esi]; jumptable 005E2241 case 10
0x5E22CF: mov     edx, [eax+284h]
0x5E22D5: push    2
0x5E22D7: mov     ecx, esi
0x5E22D9: call    edx
0x5E22DB: push    eax
0x5E22DC: mov     eax, [esi]
0x5E22DE: mov     edx, [eax+284h]
0x5E22E4: push    3
0x5E22E6: mov     ecx, esi
0x5E22E8: call    edx
0x5E22EA: push    eax
0x5E22EB: mov     eax, [esi]
0x5E22ED: mov     edx, [eax+284h]
0x5E22F3: push    5
0x5E22F5: mov     ecx, esi
0x5E22F7: call    edx
0x5E22F9: push    eax
0x5E22FA: mov     eax, [esi]
0x5E22FC: mov     edx, [eax+284h]
0x5E2302: push    0
0x5E2304: mov     ecx, esi
0x5E2306: call    edx
0x5E2308: push    eax
0x5E2309: call    Calc_ActorBaseFatigue
0x5E230E: mov     [esp+2Ch+var_8], eax
0x5E2312: fild    [esp+2Ch+var_8]
0x5E2316: add     esp, 10h
0x5E2319: fstp    dword ptr [edi]
0x5E231B: pop     edi
0x5E231C: pop     esi
0x5E231D: pop     ebx
0x5E231E: retn    0Ch
0x5E2321: mov     eax, [esi]; jumptable 005E2241 case 11
0x5E2323: mov     edx, [eax+284h]
0x5E2329: push    0
0x5E232B: mov     ecx, esi
0x5E232D: call    edx
0x5E232F: mov     [esp+10h+arg_0], eax
0x5E2333: fild    [esp+10h+arg_0]
0x5E2337: push    ecx
0x5E2338: fstp    [esp+14h+var_14]; float
0x5E233B: call    Calc_ActorBaseEncumbrance
0x5E2340: fstp    dword ptr [edi]
0x5E2342: add     esp, 4
