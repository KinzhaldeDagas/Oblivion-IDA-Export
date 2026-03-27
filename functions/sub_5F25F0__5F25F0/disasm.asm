0x5F25F0: push    ecx
0x5F25F1: push    esi
0x5F25F2: mov     esi, ecx
0x5F25F4: mov     eax, [esi+5Ch]
0x5F25F7: mov     edx, [eax+30h]
0x5F25FA: lea     ecx, [esi+5Ch]
0x5F25FD: call    edx
0x5F25FF: test    eax, eax
0x5F2601: jz      short loc_5F260E
0x5F2603: cmp     byte ptr [esp+8+arg_4], 0
0x5F2608: jnz     sub_5F2714
0x5F260E: fldz
0x5F2610: mov     ecx, ds:0B333C4h
0x5F2616: cmp     esi, ecx
0x5F2618: fstp    [esp+8+arg_4]
0x5F261C: jnz     short loc_5F2629
0x5F261E: push    9
0x5F2620: push    0
0x5F2622: call    Player_GetAVModifierf
0x5F2627: jmp     short loc_5F263C
0x5F2629: mov     ecx, [esi+58h]
0x5F262C: test    ecx, ecx
0x5F262E: jz      short loc_5F2640
0x5F2630: mov     eax, [ecx]
0x5F2632: mov     edx, [eax+468h]
0x5F2638: push    9
0x5F263A: call    edx
0x5F263C: fstp    [esp+8+arg_4]
0x5F2640: push    9
0x5F2642: mov     ecx, esi
0x5F2644: call    Actor_GetBaseCalcAVi
0x5F2649: mov     [esp+8+var_4], eax
0x5F264D: fild    [esp+8+var_4]
0x5F2651: mov     eax, [esi]
0x5F2653: mov     edx, [eax+288h]
0x5F2659: push    9
0x5F265B: fadd    [esp+0Ch+arg_4]
0x5F265F: mov     ecx, esi
0x5F2661: fstp    [esp+0Ch+var_4]
0x5F2665: call    edx
0x5F2667: fstp    [esp+0Ch+arg_0]
0x5F266B: fld     [esp+0Ch+arg_0]
0x5F266F: fld     st
0x5F2671: call    Double_To_SInt32
0x5F2676: mov     [esp+0Ch+arg_0], eax
0x5F267A: fild    [esp+0Ch+arg_0]
0x5F267E: fstp    [esp+0Ch+arg_0]
0x5F2682: fld     [esp+0Ch+arg_0]
0x5F2686: fld     st
0x5F2688: fsubp   st(2), st
0x5F268A: fxch    st(1)
0x5F268C: fcomp   qword ptr ds:0A2FC68h
0x5F2692: fnstsw  ax
0x5F2694: test    ah, 1
0x5F2697: jz      short loc_5F269F
0x5F2699: fsub    qword ptr ds:0A2F928h
0x5F269F: fstp    [esp+0Ch+arg_0]
0x5F26A3: fld     [esp+0Ch+arg_0]
0x5F26A7: fld     [esp+0Ch+var_8]
0x5F26AB: fcom    st(1)
0x5F26AD: fnstsw  ax
0x5F26AF: fstp    st(1)
0x5F26B1: test    ah, 41h
0x5F26B4: jnz     short loc_5F2712
0x5F26B6: mov     eax, [esi]
0x5F26B8: mov     edx, [eax+284h]
0x5F26BE: push    ecx
0x5F26BF: fstp    [esp+10h+var_10]
0x5F26C2: push    39h ; '9'
0x5F26C4: mov     ecx, esi
0x5F26C6: call    edx
0x5F26C8: push    eax; float
0x5F26C9: mov     eax, [esi]
0x5F26CB: mov     edx, [eax+284h]
0x5F26D1: push    2; int
0x5F26D3: mov     ecx, esi
0x5F26D5: call    edx
0x5F26D7: push    eax; int
0x5F26D8: call    Calc_MagickaReturnRate
0x5F26DD: fmul    [esp+20h+var_8]
0x5F26E1: add     esp, 0Ch
0x5F26E4: fstp    [esp+14h+var_4]
0x5F26E8: fldz
0x5F26EA: fld     [esp+14h+var_4]
0x5F26EE: fcom    st(1)
0x5F26F0: fnstsw  ax
0x5F26F2: fstp    st(1)
0x5F26F4: test    ah, 41h
0x5F26F7: jnz     short loc_5F2712
0x5F26F9: mov     eax, [esi]
0x5F26FB: mov     edx, [eax+2A4h]
0x5F2701: push    0
0x5F2703: push    ecx
0x5F2704: fstp    [esp+1Ch+var_1C]
0x5F2707: push    9
0x5F2709: mov     ecx, esi
0x5F270B: call    edx
0x5F270D: pop     esi
0x5F270E: pop     ecx
0x5F270F: retn    8
0x5F2712: fstp    st
