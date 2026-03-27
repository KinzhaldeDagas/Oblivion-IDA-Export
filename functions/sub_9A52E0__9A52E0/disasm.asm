0x9A52E0: mov     eax, [esp+arg_8]
0x9A52E4: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A52E7: sub     esp, 10h
0x9A52EA: cmp     eax, 7
0x9A52ED: ja      def_9A52FA; jumptable 009A52FA default case, cases 5,6,8,9
0x9A52F3: movzx   eax, ds:byte_9A54D8[eax]
0x9A52FA: jmp     ds:jpt_9A52FA[eax*4]; switch jump
0x9A5301: mov     eax, [esp+10h+arg_C]; jumptable 009A52FA cases 3,4
0x9A5305: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A5308: cmp     eax, 7
0x9A530B: ja      def_9A52FA; jumptable 009A52FA default case, cases 5,6,8,9
0x9A5311: movzx   ecx, ds:byte_9A54EC[eax]
0x9A5318: jmp     ds:jpt_9A5318[ecx*4]; switch jump
0x9A531F: fld     flt_BAAA70; jumptable 009A5318 cases 3,4
0x9A5325: fsub    flt_BAAA80
0x9A532B: fstp    [esp+10h+var_10]
0x9A532E: mov     edx, [esp+10h+var_10]
0x9A5331: fld     flt_BAAA74
0x9A5337: mov     flt_BAAA60, edx
0x9A533D: fsub    flt_BAAA84
0x9A5343: fstp    [esp+10h+var_C]
0x9A5347: mov     eax, [esp+10h+var_C]
0x9A534B: fld     flt_BAAA78
0x9A5351: mov     flt_BAAA64, eax
0x9A5356: fsub    flt_BAAA88
0x9A535C: fstp    [esp+10h+var_8]
0x9A5360: mov     ecx, [esp+10h+var_8]
0x9A5364: fld     flt_BAAA7C
0x9A536A: mov     flt_BAAA68, ecx
0x9A5370: fsub    flt_BAAA8C
0x9A5376: fstp    [esp+10h+var_4]
0x9A537A: mov     edx, [esp+10h+var_4]
0x9A537E: mov     flt_BAAA6C, edx
0x9A5384: mov     ecx, [esp+10h+arg_0]
0x9A5388: mov     eax, [ecx]
0x9A538A: mov     edx, [esp+10h+arg_4]
0x9A538E: mov     eax, [eax+28h]
0x9A5391: push    0
0x9A5393: push    offset flt_BAAA60
0x9A5398: push    edx
0x9A5399: call    eax
0x9A539B: neg     al
0x9A539D: sbb     eax, eax
0x9A539F: and     eax, 7FFFFFB0h
0x9A53A4: add     eax, 80000050h
0x9A53A9: add     esp, 10h
0x9A53AC: retn    18h
0x9A53AF: fld     flt_BAAA70; jumptable 009A5318 cases 7,10
0x9A53B5: fld     st
0x9A53B7: fsub    flt_BAAA80
0x9A53BD: fstp    flt_BAAA60
0x9A53C3: fld     st
0x9A53C5: fsub    flt_BAAA84
0x9A53CB: fstp    flt_BAAA64
0x9A53D1: fld     st
0x9A53D3: fsub    flt_BAAA88
0x9A53D9: fstp    flt_BAAA68
0x9A53DF: fsub    flt_BAAA8C
0x9A53E5: mov     ecx, [esp+10h+arg_0]
0x9A53E9: fstp    flt_BAAA6C
0x9A53EF: mov     edx, [ecx]
0x9A53F1: mov     eax, [esp+10h+arg_4]
0x9A53F5: mov     edx, [edx+28h]
0x9A53F8: push    0
0x9A53FA: push    offset flt_BAAA60
0x9A53FF: push    eax
0x9A5400: call    edx
0x9A5402: neg     al
0x9A5404: sbb     eax, eax
0x9A5406: and     eax, 7FFFFFB0h
0x9A540B: add     eax, 80000050h
0x9A5410: add     esp, 10h
0x9A5413: retn    18h
0x9A5416: mov     eax, [esp+10h+arg_C]; jumptable 009A52FA cases 7,10
0x9A541A: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A541D: cmp     eax, 7
0x9A5420: ja      def_9A52FA; jumptable 009A52FA default case, cases 5,6,8,9
0x9A5426: movzx   eax, ds:byte_9A5500[eax]
0x9A542D: jmp     ds:jpt_9A542D[eax*4]; switch jump
0x9A5434: fld     flt_BAAA70; jumptable 009A542D cases 3,4
0x9A543A: fld     flt_BAAA80
0x9A5440: fld     st
0x9A5442: fsubp   st(2), st
0x9A5444: fxch    st(1)
0x9A5446: fstp    flt_BAAA60
0x9A544C: fld     flt_BAAA74
0x9A5452: fsub    st, st(1)
0x9A5454: fstp    flt_BAAA64
0x9A545A: fld     flt_BAAA78
0x9A5460: fsub    st, st(1)
0x9A5462: fstp    flt_BAAA68
0x9A5468: fsubr   flt_BAAA7C
0x9A546E: jmp     loc_9A53E5
0x9A5473: fld     flt_BAAA70; jumptable 009A542D cases 7,10
0x9A5479: fsub    flt_BAAA80
0x9A547F: fstp    flt_BAAA60
0x9A5485: fld     flt_BAAA74
0x9A548B: fsub    flt_BAAA84
0x9A5491: fstp    flt_BAAA64
0x9A5497: fld     flt_BAAA78
0x9A549D: fsub    flt_BAAA88
0x9A54A3: fstp    flt_BAAA68
0x9A54A9: fld     flt_BAAA7C
0x9A54AF: fsub    flt_BAAA8C
0x9A54B5: fstp    flt_BAAA6C
0x9A54BB: jmp     loc_9A5384
0x9A54C0: mov     eax, 1; jumptable 009A52FA default case, cases 5,6,8,9
0x9A54C5: add     esp, 10h
0x9A54C8: retn    18h
