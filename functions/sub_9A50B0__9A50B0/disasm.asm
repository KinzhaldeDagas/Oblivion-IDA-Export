0x9A50B0: mov     eax, [esp+arg_8]
0x9A50B4: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A50B7: sub     esp, 10h
0x9A50BA: cmp     eax, 7
0x9A50BD: ja      def_9A50CA; jumptable 009A50CA default case, cases 5,6,8,9
0x9A50C3: movzx   eax, ds:byte_9A52A8[eax]
0x9A50CA: jmp     ds:jpt_9A50CA[eax*4]; switch jump
0x9A50D1: mov     eax, [esp+10h+arg_C]; jumptable 009A50CA cases 3,4
0x9A50D5: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A50D8: cmp     eax, 7
0x9A50DB: ja      def_9A50CA; jumptable 009A50CA default case, cases 5,6,8,9
0x9A50E1: movzx   ecx, ds:byte_9A52BC[eax]
0x9A50E8: jmp     ds:jpt_9A50E8[ecx*4]; switch jump
0x9A50EF: fld     flt_BAAA70; jumptable 009A50E8 cases 3,4
0x9A50F5: fadd    flt_BAAA80
0x9A50FB: fstp    [esp+10h+var_10]
0x9A50FE: mov     edx, [esp+10h+var_10]
0x9A5101: fld     flt_BAAA74
0x9A5107: mov     flt_BAAA60, edx
0x9A510D: fadd    flt_BAAA84
0x9A5113: fstp    [esp+10h+var_C]
0x9A5117: mov     eax, [esp+10h+var_C]
0x9A511B: fld     flt_BAAA78
0x9A5121: mov     flt_BAAA64, eax
0x9A5126: fadd    flt_BAAA88
0x9A512C: fstp    [esp+10h+var_8]
0x9A5130: mov     ecx, [esp+10h+var_8]
0x9A5134: fld     flt_BAAA7C
0x9A513A: mov     flt_BAAA68, ecx
0x9A5140: fadd    flt_BAAA8C
0x9A5146: fstp    [esp+10h+var_4]
0x9A514A: mov     edx, [esp+10h+var_4]
0x9A514E: mov     flt_BAAA6C, edx
0x9A5154: mov     ecx, [esp+10h+arg_0]
0x9A5158: mov     eax, [ecx]
0x9A515A: mov     edx, [esp+10h+arg_4]
0x9A515E: mov     eax, [eax+28h]
0x9A5161: push    0
0x9A5163: push    offset flt_BAAA60
0x9A5168: push    edx
0x9A5169: call    eax
0x9A516B: neg     al
0x9A516D: sbb     eax, eax
0x9A516F: and     eax, 7FFFFFB0h
0x9A5174: add     eax, 80000050h
0x9A5179: add     esp, 10h
0x9A517C: retn    18h
0x9A517F: fld     flt_BAAA70; jumptable 009A50E8 cases 7,10
0x9A5185: fld     st
0x9A5187: fadd    flt_BAAA80
0x9A518D: fstp    flt_BAAA60
0x9A5193: fld     flt_BAAA84
0x9A5199: fadd    st, st(1)
0x9A519B: fstp    flt_BAAA64
0x9A51A1: fld     flt_BAAA88
0x9A51A7: fadd    st, st(1)
0x9A51A9: fstp    flt_BAAA68
0x9A51AF: fadd    flt_BAAA8C
0x9A51B5: mov     ecx, [esp+10h+arg_0]
0x9A51B9: fstp    flt_BAAA6C
0x9A51BF: mov     edx, [ecx]
0x9A51C1: mov     eax, [esp+10h+arg_4]
0x9A51C5: mov     edx, [edx+28h]
0x9A51C8: push    0
0x9A51CA: push    offset flt_BAAA60
0x9A51CF: push    eax
0x9A51D0: call    edx
0x9A51D2: neg     al
0x9A51D4: sbb     eax, eax
0x9A51D6: and     eax, 7FFFFFB0h
0x9A51DB: add     eax, 80000050h
0x9A51E0: add     esp, 10h
0x9A51E3: retn    18h
0x9A51E6: mov     eax, [esp+10h+arg_C]; jumptable 009A50CA cases 7,10
0x9A51EA: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A51ED: cmp     eax, 7
0x9A51F0: ja      def_9A50CA; jumptable 009A50CA default case, cases 5,6,8,9
0x9A51F6: movzx   eax, ds:byte_9A52D0[eax]
0x9A51FD: jmp     ds:jpt_9A51FD[eax*4]; switch jump
0x9A5204: fld     flt_BAAA70; jumptable 009A51FD cases 3,4
0x9A520A: fld     flt_BAAA80
0x9A5210: fld     st
0x9A5212: faddp   st(2), st
0x9A5214: fxch    st(1)
0x9A5216: fstp    flt_BAAA60
0x9A521C: fld     flt_BAAA74
0x9A5222: fadd    st, st(1)
0x9A5224: fstp    flt_BAAA64
0x9A522A: fld     flt_BAAA78
0x9A5230: fadd    st, st(1)
0x9A5232: fstp    flt_BAAA68
0x9A5238: fadd    flt_BAAA7C
0x9A523E: jmp     loc_9A51B5
0x9A5243: fld     flt_BAAA70; jumptable 009A51FD cases 7,10
0x9A5249: fadd    flt_BAAA80
0x9A524F: fstp    flt_BAAA60
0x9A5255: fld     flt_BAAA74
0x9A525B: fadd    flt_BAAA84
0x9A5261: fstp    flt_BAAA64
0x9A5267: fld     flt_BAAA78
0x9A526D: fadd    flt_BAAA88
0x9A5273: fstp    flt_BAAA68
0x9A5279: fld     flt_BAAA7C
0x9A527F: fadd    flt_BAAA8C
0x9A5285: fstp    flt_BAAA6C
0x9A528B: jmp     loc_9A5154
0x9A5290: mov     eax, 1; jumptable 009A50CA default case, cases 5,6,8,9
0x9A5295: add     esp, 10h
0x9A5298: retn    18h
