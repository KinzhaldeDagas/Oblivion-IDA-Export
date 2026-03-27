0x9A2BD0: mov     eax, [esp+arg_8]
0x9A2BD4: sub     esp, 40h
0x9A2BD7: sub     eax, 7
0x9A2BDA: jz      loc_9A2D48
0x9A2BE0: sub     eax, 2
0x9A2BE3: jz      short loc_9A2BF9
0x9A2BE5: sub     eax, 1
0x9A2BE8: jz      loc_9A2D48
0x9A2BEE: mov     eax, 1; jumptable 009A2D5F default case, cases 5,6,8,9
0x9A2BF3: add     esp, 40h
0x9A2BF6: retn    18h
0x9A2BF9: mov     eax, [esp+40h+arg_C]
0x9A2BFD: cmp     eax, 3
0x9A2C00: jl      short def_9A2D5F; jumptable 009A2D5F default case, cases 5,6,8,9
0x9A2C02: cmp     eax, 4
0x9A2C05: jg      short def_9A2D5F; jumptable 009A2D5F default case, cases 5,6,8,9
0x9A2C07: cmp     byte ptr [esp+40h+arg_10], 0
0x9A2C0C: fld     flt_BAAA80
0x9A2C12: fld1
0x9A2C14: push    esi
0x9A2C15: fdivrp  st(1), st
0x9A2C17: push    edi
0x9A2C18: mov     ecx, 10h
0x9A2C1D: lea     esi, [esp+48h+var_40]
0x9A2C21: mov     edi, offset unk_BAA950
0x9A2C26: fstp    [esp+48h+arg_C]
0x9A2C2A: fld     flt_BAA9E0
0x9A2C30: fld     [esp+48h+arg_C]
0x9A2C34: fld     st
0x9A2C36: fmulp   st(2), st
0x9A2C38: fxch    st(1)
0x9A2C3A: fstp    [esp+48h+var_40]
0x9A2C3E: fld     flt_BAA9E4
0x9A2C44: fmul    st, st(1)
0x9A2C46: fstp    [esp+48h+var_3C]
0x9A2C4A: fld     flt_BAA9E8
0x9A2C50: fmul    st, st(1)
0x9A2C52: fstp    [esp+48h+var_38]
0x9A2C56: fld     flt_BAA9EC
0x9A2C5C: fmul    st, st(1)
0x9A2C5E: fstp    [esp+48h+var_34]
0x9A2C62: fld     flt_BAA9F0
0x9A2C68: fmul    st, st(1)
0x9A2C6A: fstp    [esp+48h+var_30]
0x9A2C6E: fld     flt_BAA9F4
0x9A2C74: fmul    st, st(1)
0x9A2C76: fstp    [esp+48h+var_2C]
0x9A2C7A: fld     flt_BAA9F8
0x9A2C80: fmul    st, st(1)
0x9A2C82: fstp    [esp+48h+var_28]
0x9A2C86: fld     flt_BAA9FC
0x9A2C8C: fmul    st, st(1)
0x9A2C8E: fstp    [esp+48h+var_24]
0x9A2C92: fld     flt_BAAA00
0x9A2C98: fmul    st, st(1)
0x9A2C9A: fstp    [esp+48h+var_20]
0x9A2C9E: fld     flt_BAAA04
0x9A2CA4: fmul    st, st(1)
0x9A2CA6: fstp    [esp+48h+var_1C]
0x9A2CAA: fld     flt_BAAA08
0x9A2CB0: fmul    st, st(1)
0x9A2CB2: fstp    [esp+48h+var_18]
0x9A2CB6: fld     flt_BAAA0C
0x9A2CBC: fmul    st, st(1)
0x9A2CBE: fstp    [esp+48h+var_14]
0x9A2CC2: fld     flt_BAAA10
0x9A2CC8: fmul    st, st(1)
0x9A2CCA: fstp    [esp+48h+var_10]
0x9A2CCE: fld     flt_BAAA14
0x9A2CD4: fmul    st, st(1)
0x9A2CD6: fstp    [esp+48h+var_C]
0x9A2CDA: fld     flt_BAAA18
0x9A2CE0: fmul    st, st(1)
0x9A2CE2: fstp    [esp+48h+var_8]
0x9A2CE6: fmul    flt_BAAA1C
0x9A2CEC: fstp    [esp+48h+var_4]
0x9A2CF0: rep movsd
0x9A2CF2: pop     edi
0x9A2CF3: pop     esi
0x9A2CF4: jz      short loc_9A2D07
0x9A2CF6: push    offset unk_BAA950
0x9A2CFB: push    0
0x9A2CFD: push    offset unk_BAA950
0x9A2D02: call    D3DXMatrixInverse_0
0x9A2D07: cmp     [esp+40h+arg_14], 0
0x9A2D0C: jz      short loc_9A2D1D
0x9A2D0E: push    offset unk_BAA950
0x9A2D13: push    offset unk_BAA950
0x9A2D18: call    D3DXMatrixTranspose_0
0x9A2D1D: push    0
0x9A2D1F: push    offset unk_BAA950
0x9A2D24: mov     ecx, [esp+48h+arg_0]
0x9A2D28: mov     eax, [ecx]
0x9A2D2A: mov     edx, [esp+48h+arg_4]
0x9A2D2E: mov     eax, [eax+30h]
0x9A2D31: push    edx
0x9A2D32: call    eax
0x9A2D34: neg     al
0x9A2D36: sbb     eax, eax
0x9A2D38: and     eax, 7FFFFFB0h
0x9A2D3D: add     eax, 80000050h
0x9A2D42: add     esp, 40h
0x9A2D45: retn    18h
0x9A2D48: mov     eax, [esp+40h+arg_C]
0x9A2D4C: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A2D4F: cmp     eax, 7
0x9A2D52: ja      def_9A2D5F; jumptable 009A2D5F default case, cases 5,6,8,9
0x9A2D58: movzx   ecx, ds:byte_9A2E40[eax]
0x9A2D5F: jmp     ds:jpt_9A2D5F[ecx*4]; switch jump
0x9A2D66: fld     flt_BAAA80; jumptable 009A2D5F cases 3,4
0x9A2D6C: mov     ecx, [esp+40h+arg_0]
0x9A2D70: fld1
0x9A2D72: mov     eax, [esp+40h+arg_4]
0x9A2D76: fdivrp  st(1), st
0x9A2D78: push    0
0x9A2D7A: push    offset flt_BAAA60
0x9A2D7F: push    eax
0x9A2D80: fstp    [esp+4Ch+arg_10]
0x9A2D84: fld     flt_BAAA70
0x9A2D8A: fld     [esp+4Ch+arg_10]
0x9A2D8E: fld     st
0x9A2D90: fmulp   st(2), st
0x9A2D92: fxch    st(1)
0x9A2D94: fstp    flt_BAAA60
0x9A2D9A: fld     flt_BAAA74
0x9A2DA0: fmul    st, st(1)
0x9A2DA2: fstp    flt_BAAA64
0x9A2DA8: fld     flt_BAAA78
0x9A2DAE: fmul    st, st(1)
0x9A2DB0: fstp    flt_BAAA68
0x9A2DB6: fmul    flt_BAAA7C
0x9A2DBC: fstp    flt_BAAA6C
0x9A2DC2: mov     edx, [ecx]
0x9A2DC4: mov     edx, [edx+30h]
0x9A2DC7: call    edx
0x9A2DC9: neg     al
0x9A2DCB: sbb     eax, eax
0x9A2DCD: and     eax, 7FFFFFB0h
0x9A2DD2: add     eax, 80000050h
0x9A2DD7: add     esp, 40h
0x9A2DDA: retn    18h
0x9A2DDD: fld     flt_BAAA70; jumptable 009A2D5F cases 7,10
0x9A2DE3: push    0
0x9A2DE5: fdiv    flt_BAAA80
0x9A2DEB: push    offset flt_BAAA60
0x9A2DF0: fstp    flt_BAAA60
0x9A2DF6: fld     flt_BAAA74
0x9A2DFC: fdiv    flt_BAAA84
0x9A2E02: fstp    flt_BAAA64
0x9A2E08: fld     flt_BAAA78
0x9A2E0E: fdiv    flt_BAAA88
0x9A2E14: fstp    flt_BAAA68
0x9A2E1A: fld     flt_BAAA7C
0x9A2E20: fdiv    flt_BAAA8C
0x9A2E26: fstp    flt_BAAA6C
0x9A2E2C: jmp     loc_9A2D24
