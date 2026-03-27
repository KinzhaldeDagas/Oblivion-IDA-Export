0x9A3080: mov     eax, [esp+arg_8]
0x9A3084: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A3087: sub     esp, 10h
0x9A308A: cmp     eax, 7
0x9A308D: ja      def_9A309A; jumptable 009A309A default case, cases 5,6,8,9
0x9A3093: movzx   eax, ds:byte_9A3278[eax]
0x9A309A: jmp     ds:jpt_9A309A[eax*4]; switch jump
0x9A30A1: mov     eax, [esp+10h+arg_C]; jumptable 009A309A cases 3,4
0x9A30A5: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A30A8: cmp     eax, 7
0x9A30AB: ja      def_9A309A; jumptable 009A309A default case, cases 5,6,8,9
0x9A30B1: movzx   ecx, ds:byte_9A328C[eax]
0x9A30B8: jmp     ds:jpt_9A30B8[ecx*4]; switch jump
0x9A30BF: fld     flt_BAAA70; jumptable 009A30B8 cases 3,4
0x9A30C5: fsub    flt_BAAA80
0x9A30CB: fstp    [esp+10h+var_10]
0x9A30CE: mov     edx, [esp+10h+var_10]
0x9A30D1: fld     flt_BAAA74
0x9A30D7: mov     flt_BAAA60, edx
0x9A30DD: fsub    flt_BAAA84
0x9A30E3: fstp    [esp+10h+var_C]
0x9A30E7: mov     eax, [esp+10h+var_C]
0x9A30EB: fld     flt_BAAA78
0x9A30F1: mov     flt_BAAA64, eax
0x9A30F6: fsub    flt_BAAA88
0x9A30FC: fstp    [esp+10h+var_8]
0x9A3100: mov     ecx, [esp+10h+var_8]
0x9A3104: fld     flt_BAAA7C
0x9A310A: mov     flt_BAAA68, ecx
0x9A3110: fsub    flt_BAAA8C
0x9A3116: fstp    [esp+10h+var_4]
0x9A311A: mov     edx, [esp+10h+var_4]
0x9A311E: mov     flt_BAAA6C, edx
0x9A3124: mov     ecx, [esp+10h+arg_0]
0x9A3128: mov     eax, [ecx]
0x9A312A: mov     edx, [esp+10h+arg_4]
0x9A312E: mov     eax, [eax+30h]
0x9A3131: push    0
0x9A3133: push    offset flt_BAAA60
0x9A3138: push    edx
0x9A3139: call    eax
0x9A313B: neg     al
0x9A313D: sbb     eax, eax
0x9A313F: and     eax, 7FFFFFB0h
0x9A3144: add     eax, 80000050h
0x9A3149: add     esp, 10h
0x9A314C: retn    18h
0x9A314F: fld     flt_BAAA70; jumptable 009A30B8 cases 7,10
0x9A3155: fld     st
0x9A3157: fsub    flt_BAAA80
0x9A315D: fstp    flt_BAAA60
0x9A3163: fld     st
0x9A3165: fsub    flt_BAAA84
0x9A316B: fstp    flt_BAAA64
0x9A3171: fld     st
0x9A3173: fsub    flt_BAAA88
0x9A3179: fstp    flt_BAAA68
0x9A317F: fsub    flt_BAAA8C
0x9A3185: mov     ecx, [esp+10h+arg_0]
0x9A3189: fstp    flt_BAAA6C
0x9A318F: mov     edx, [ecx]
0x9A3191: mov     eax, [esp+10h+arg_4]
0x9A3195: mov     edx, [edx+30h]
0x9A3198: push    0
0x9A319A: push    offset flt_BAAA60
0x9A319F: push    eax
0x9A31A0: call    edx
0x9A31A2: neg     al
0x9A31A4: sbb     eax, eax
0x9A31A6: and     eax, 7FFFFFB0h
0x9A31AB: add     eax, 80000050h
0x9A31B0: add     esp, 10h
0x9A31B3: retn    18h
0x9A31B6: mov     eax, [esp+10h+arg_C]; jumptable 009A309A cases 7,10
0x9A31BA: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A31BD: cmp     eax, 7
0x9A31C0: ja      def_9A309A; jumptable 009A309A default case, cases 5,6,8,9
0x9A31C6: movzx   eax, ds:byte_9A32A0[eax]
0x9A31CD: jmp     ds:jpt_9A31CD[eax*4]; switch jump
0x9A31D4: fld     flt_BAAA70; jumptable 009A31CD cases 3,4
0x9A31DA: fld     flt_BAAA80
0x9A31E0: fld     st
0x9A31E2: fsubp   st(2), st
0x9A31E4: fxch    st(1)
0x9A31E6: fstp    flt_BAAA60
0x9A31EC: fld     flt_BAAA74
0x9A31F2: fsub    st, st(1)
0x9A31F4: fstp    flt_BAAA64
0x9A31FA: fld     flt_BAAA78
0x9A3200: fsub    st, st(1)
0x9A3202: fstp    flt_BAAA68
0x9A3208: fsubr   flt_BAAA7C
0x9A320E: jmp     loc_9A3185
0x9A3213: fld     flt_BAAA70; jumptable 009A31CD cases 7,10
0x9A3219: fsub    flt_BAAA80
0x9A321F: fstp    flt_BAAA60
0x9A3225: fld     flt_BAAA74
0x9A322B: fsub    flt_BAAA84
0x9A3231: fstp    flt_BAAA64
0x9A3237: fld     flt_BAAA78
0x9A323D: fsub    flt_BAAA88
0x9A3243: fstp    flt_BAAA68
0x9A3249: fld     flt_BAAA7C
0x9A324F: fsub    flt_BAAA8C
0x9A3255: fstp    flt_BAAA6C
0x9A325B: jmp     loc_9A3124
0x9A3260: mov     eax, 1; jumptable 009A309A default case, cases 5,6,8,9
0x9A3265: add     esp, 10h
0x9A3268: retn    18h
