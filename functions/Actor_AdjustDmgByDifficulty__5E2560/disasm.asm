0x5E2560: fld     [esp+arg_0]
0x5E2564: push    esi
0x5E2565: push    edi
0x5E2566: fst     [esp+8+arg_0]
0x5E256A: mov     edi, [esp+8+arg_4]
0x5E256E: test    edi, edi
0x5E2570: mov     esi, ecx
0x5E2572: jz      short loc_5E25D6
0x5E2574: fldz
0x5E2576: mov     edx, ds:0B333C4h
0x5E257C: fcom    dword ptr [edx+734h]
0x5E2582: fnstsw  ax
0x5E2584: test    ah, 44h
0x5E2587: jnp     short loc_5E25D4
0x5E2589: fcom    dword ptr [edx+734h]
0x5E258F: push    ebx
0x5E2590: fnstsw  ax
0x5E2592: test    ah, 41h
0x5E2595: jnz     short loc_5E259B
0x5E2597: mov     bl, 1
0x5E2599: jmp     short loc_5E259D
0x5E259B: xor     bl, bl
0x5E259D: fcom    st(1)
0x5E259F: fnstsw  ax
0x5E25A1: test    ah, 41h
0x5E25A4: jnz     short loc_5E25AA
0x5E25A6: mov     cl, 1
0x5E25A8: jmp     short loc_5E25AC
0x5E25AA: xor     cl, cl
0x5E25AC: fld     dword ptr [edx+734h]
0x5E25B2: test    bl, bl
0x5E25B4: fmul    dword ptr ds:0B37B88h
0x5E25BA: pop     ebx
0x5E25BB: fstp    [esp+8+arg_4]
0x5E25BF: jz      short loc_5E25F5
0x5E25C1: fld1
0x5E25C3: fld     [esp+8+arg_4]
0x5E25C7: fucom   st(1)
0x5E25C9: fnstsw  ax
0x5E25CB: fstp    st(1)
0x5E25CD: test    ah, 44h
0x5E25D0: jp      short loc_5E25DB
0x5E25D2: fstp    st
0x5E25D4: fstp    st
0x5E25D6: pop     edi
0x5E25D7: pop     esi
0x5E25D8: retn    8
0x5E25DB: fld1
0x5E25DD: fsub    st(1), st
0x5E25DF: fxch    st(1)
0x5E25E1: fstp    [esp+8+arg_4]
0x5E25E5: fld     [esp+8+arg_4]
0x5E25E9: fabs
0x5E25EB: fstp    [esp+8+arg_4]
0x5E25EF: fdiv    [esp+8+arg_4]
0x5E25F3: jmp     short loc_5E25FF
0x5E25F5: fld     [esp+8+arg_4]
0x5E25F9: fadd    qword ptr ds:0A2F928h
0x5E25FF: fstp    [esp+8+arg_4]
0x5E2603: fld     [esp+8+arg_4]
0x5E2607: fucom   st(1)
0x5E2609: fnstsw  ax
0x5E260B: fstp    st(1)
0x5E260D: test    ah, 44h
0x5E2610: jnp     short loc_5E25D4
0x5E2612: cmp     esi, edx
0x5E2614: jnz     short loc_5E2638
0x5E2616: test    cl, cl
0x5E2618: jz      short loc_5E2629
0x5E261A: fmulp   st(1), st
0x5E261C: pop     edi
0x5E261D: pop     esi
0x5E261E: fstp    [esp+arg_0]
0x5E2622: fld     [esp+arg_0]
0x5E2626: retn    8
0x5E2629: fdivp   st(1), st
0x5E262B: pop     edi
0x5E262C: pop     esi
0x5E262D: fstp    [esp+arg_0]
0x5E2631: fld     [esp+arg_0]
0x5E2635: retn    8
0x5E2638: cmp     edi, edx
0x5E263A: jnz     short loc_5E265E
0x5E263C: test    cl, cl
0x5E263E: jz      short loc_5E264F
0x5E2640: fdivp   st(1), st
0x5E2642: pop     edi
0x5E2643: pop     esi
0x5E2644: fstp    [esp+arg_0]
0x5E2648: fld     [esp+arg_0]
0x5E264C: retn    8
0x5E264F: fmulp   st(1), st
0x5E2651: pop     edi
0x5E2652: pop     esi
0x5E2653: fstp    [esp+arg_0]
0x5E2657: fld     [esp+arg_0]
0x5E265B: retn    8
0x5E265E: fstp    st
0x5E2660: pop     edi
0x5E2661: fstp    st
0x5E2663: pop     esi
0x5E2664: fld     [esp+arg_0]
0x5E2668: retn    8
