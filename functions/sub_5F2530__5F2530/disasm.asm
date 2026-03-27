0x5F2530: sub     esp, 0Ch
0x5F2533: fldz
0x5F2535: push    esi
0x5F2536: mov     esi, ecx
0x5F2538: fstp    [esp+10h+var_C]
0x5F253C: mov     ecx, ds:0B333C4h
0x5F2542: cmp     esi, ecx
0x5F2544: jnz     short loc_5F2551
0x5F2546: push    8
0x5F2548: push    0
0x5F254A: call    Player_GetAVModifierf
0x5F254F: jmp     short loc_5F2564
0x5F2551: mov     ecx, [esi+58h]
0x5F2554: test    ecx, ecx
0x5F2556: jz      short loc_5F2568
0x5F2558: mov     eax, [ecx]
0x5F255A: mov     edx, [eax+468h]
0x5F2560: push    8
0x5F2562: call    edx
0x5F2564: fstp    [esp+10h+var_C]
0x5F2568: push    8
0x5F256A: mov     ecx, esi
0x5F256C: call    Actor_GetBaseCalcAVi
0x5F2571: mov     dword ptr [esp+10h+var_8], eax
0x5F2575: fild    dword ptr [esp+10h+var_8]
0x5F2579: mov     eax, [esi]
0x5F257B: mov     edx, [eax+288h]
0x5F2581: push    8
0x5F2583: fadd    [esp+14h+var_C]
0x5F2587: mov     ecx, esi
0x5F2589: fstp    dword ptr [esp+14h+var_8]
0x5F258D: call    edx
0x5F258F: fld     dword ptr [esp+10h+var_8]
0x5F2593: fcom    st(1)
0x5F2595: fnstsw  ax
0x5F2597: fstp    st(1)
0x5F2599: test    ah, 41h
0x5F259C: jnz     short loc_5F25E4
0x5F259E: mov     eax, [esi]
0x5F25A0: fstp    [esp+10h+var_8]
0x5F25A4: mov     edx, [eax+288h]
0x5F25AA: push    8
0x5F25AC: mov     ecx, esi
0x5F25AE: call    edx
0x5F25B0: fsubr   [esp+10h+var_8]
0x5F25B4: fstp    dword ptr [esp+10h+var_8]
0x5F25B8: fldz
0x5F25BA: fld     dword ptr [esp+10h+var_8]
0x5F25BE: fcom    st(1)
0x5F25C0: fnstsw  ax
0x5F25C2: fstp    st(1)
0x5F25C4: test    ah, 41h
0x5F25C7: jnz     short loc_5F25E4
0x5F25C9: mov     eax, [esi]
0x5F25CB: mov     edx, [eax+2A4h]
0x5F25D1: push    0
0x5F25D3: push    ecx
0x5F25D4: fstp    [esp+18h+var_18]
0x5F25D7: push    8
0x5F25D9: mov     ecx, esi
0x5F25DB: call    edx
0x5F25DD: pop     esi
0x5F25DE: add     esp, 0Ch
0x5F25E1: retn    4
0x5F25E4: fstp    st
0x5F25E6: pop     esi
0x5F25E7: add     esp, 0Ch
0x5F25EA: retn    4
