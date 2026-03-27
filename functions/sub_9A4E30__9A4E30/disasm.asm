0x9A4E30: mov     eax, [esp+arg_8]
0x9A4E34: sub     esp, 40h
0x9A4E37: sub     eax, 7
0x9A4E3A: jz      loc_9A4FA8
0x9A4E40: sub     eax, 2
0x9A4E43: jz      short loc_9A4E59
0x9A4E45: sub     eax, 1
0x9A4E48: jz      loc_9A4FA8
0x9A4E4E: mov     eax, 1; jumptable 009A4FBF default case, cases 5,6,8,9
0x9A4E53: add     esp, 40h
0x9A4E56: retn    18h
0x9A4E59: mov     eax, [esp+40h+arg_C]
0x9A4E5D: cmp     eax, 3
0x9A4E60: jl      short def_9A4FBF; jumptable 009A4FBF default case, cases 5,6,8,9
0x9A4E62: cmp     eax, 4
0x9A4E65: jg      short def_9A4FBF; jumptable 009A4FBF default case, cases 5,6,8,9
0x9A4E67: cmp     byte ptr [esp+40h+arg_10], 0
0x9A4E6C: fld     flt_BAAA80
0x9A4E72: fld1
0x9A4E74: push    esi
0x9A4E75: fdivrp  st(1), st
0x9A4E77: push    edi
0x9A4E78: mov     ecx, 10h
0x9A4E7D: lea     esi, [esp+48h+var_40]
0x9A4E81: mov     edi, offset unk_BAA950
0x9A4E86: fstp    [esp+48h+arg_C]
0x9A4E8A: fld     flt_BAA9E0
0x9A4E90: fld     [esp+48h+arg_C]
0x9A4E94: fld     st
0x9A4E96: fmulp   st(2), st
0x9A4E98: fxch    st(1)
0x9A4E9A: fstp    [esp+48h+var_40]
0x9A4E9E: fld     flt_BAA9E4
0x9A4EA4: fmul    st, st(1)
0x9A4EA6: fstp    [esp+48h+var_3C]
0x9A4EAA: fld     flt_BAA9E8
0x9A4EB0: fmul    st, st(1)
0x9A4EB2: fstp    [esp+48h+var_38]
0x9A4EB6: fld     flt_BAA9EC
0x9A4EBC: fmul    st, st(1)
0x9A4EBE: fstp    [esp+48h+var_34]
0x9A4EC2: fld     flt_BAA9F0
0x9A4EC8: fmul    st, st(1)
0x9A4ECA: fstp    [esp+48h+var_30]
0x9A4ECE: fld     flt_BAA9F4
0x9A4ED4: fmul    st, st(1)
0x9A4ED6: fstp    [esp+48h+var_2C]
0x9A4EDA: fld     flt_BAA9F8
0x9A4EE0: fmul    st, st(1)
0x9A4EE2: fstp    [esp+48h+var_28]
0x9A4EE6: fld     flt_BAA9FC
0x9A4EEC: fmul    st, st(1)
0x9A4EEE: fstp    [esp+48h+var_24]
0x9A4EF2: fld     flt_BAAA00
0x9A4EF8: fmul    st, st(1)
0x9A4EFA: fstp    [esp+48h+var_20]
0x9A4EFE: fld     flt_BAAA04
0x9A4F04: fmul    st, st(1)
0x9A4F06: fstp    [esp+48h+var_1C]
0x9A4F0A: fld     flt_BAAA08
0x9A4F10: fmul    st, st(1)
0x9A4F12: fstp    [esp+48h+var_18]
0x9A4F16: fld     flt_BAAA0C
0x9A4F1C: fmul    st, st(1)
0x9A4F1E: fstp    [esp+48h+var_14]
0x9A4F22: fld     flt_BAAA10
0x9A4F28: fmul    st, st(1)
0x9A4F2A: fstp    [esp+48h+var_10]
0x9A4F2E: fld     flt_BAAA14
0x9A4F34: fmul    st, st(1)
0x9A4F36: fstp    [esp+48h+var_C]
0x9A4F3A: fld     flt_BAAA18
0x9A4F40: fmul    st, st(1)
0x9A4F42: fstp    [esp+48h+var_8]
0x9A4F46: fmul    flt_BAAA1C
0x9A4F4C: fstp    [esp+48h+var_4]
0x9A4F50: rep movsd
0x9A4F52: pop     edi
0x9A4F53: pop     esi
0x9A4F54: jz      short loc_9A4F67
0x9A4F56: push    offset unk_BAA950
0x9A4F5B: push    0
0x9A4F5D: push    offset unk_BAA950
0x9A4F62: call    D3DXMatrixInverse_0
0x9A4F67: cmp     [esp+40h+arg_14], 0
0x9A4F6C: jz      short loc_9A4F7D
0x9A4F6E: push    offset unk_BAA950
0x9A4F73: push    offset unk_BAA950
0x9A4F78: call    D3DXMatrixTranspose_0
0x9A4F7D: push    0
0x9A4F7F: push    offset unk_BAA950
0x9A4F84: mov     ecx, [esp+48h+arg_0]
0x9A4F88: mov     eax, [ecx]
0x9A4F8A: mov     edx, [esp+48h+arg_4]
0x9A4F8E: mov     eax, [eax+28h]
0x9A4F91: push    edx
0x9A4F92: call    eax
0x9A4F94: neg     al
0x9A4F96: sbb     eax, eax
0x9A4F98: and     eax, 7FFFFFB0h
0x9A4F9D: add     eax, 80000050h
0x9A4FA2: add     esp, 40h
0x9A4FA5: retn    18h
0x9A4FA8: mov     eax, [esp+40h+arg_C]
0x9A4FAC: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A4FAF: cmp     eax, 7
0x9A4FB2: ja      def_9A4FBF; jumptable 009A4FBF default case, cases 5,6,8,9
0x9A4FB8: movzx   ecx, ds:byte_9A50A0[eax]
0x9A4FBF: jmp     ds:jpt_9A4FBF[ecx*4]; switch jump
0x9A4FC6: fld     flt_BAAA80; jumptable 009A4FBF cases 3,4
0x9A4FCC: mov     ecx, [esp+40h+arg_0]
0x9A4FD0: fld1
0x9A4FD2: mov     eax, [esp+40h+arg_4]
0x9A4FD6: fdivrp  st(1), st
0x9A4FD8: push    0
0x9A4FDA: push    offset flt_BAAA60
0x9A4FDF: push    eax
0x9A4FE0: fstp    [esp+4Ch+arg_10]
0x9A4FE4: fld     flt_BAAA70
0x9A4FEA: fld     [esp+4Ch+arg_10]
0x9A4FEE: fld     st
0x9A4FF0: fmulp   st(2), st
0x9A4FF2: fxch    st(1)
0x9A4FF4: fstp    flt_BAAA60
0x9A4FFA: fld     flt_BAAA74
0x9A5000: fmul    st, st(1)
0x9A5002: fstp    flt_BAAA64
0x9A5008: fld     flt_BAAA78
0x9A500E: fmul    st, st(1)
0x9A5010: fstp    flt_BAAA68
0x9A5016: fmul    flt_BAAA7C
0x9A501C: fstp    flt_BAAA6C
0x9A5022: mov     edx, [ecx]
0x9A5024: mov     edx, [edx+28h]
0x9A5027: call    edx
0x9A5029: neg     al
0x9A502B: sbb     eax, eax
0x9A502D: and     eax, 7FFFFFB0h
0x9A5032: add     eax, 80000050h
0x9A5037: add     esp, 40h
0x9A503A: retn    18h
0x9A503D: fld     flt_BAAA70; jumptable 009A4FBF cases 7,10
0x9A5043: push    0
0x9A5045: fdiv    flt_BAAA80
0x9A504B: push    offset flt_BAAA60
0x9A5050: fstp    flt_BAAA60
0x9A5056: fld     flt_BAAA74
0x9A505C: fdiv    flt_BAAA84
0x9A5062: fstp    flt_BAAA64
0x9A5068: fld     flt_BAAA78
0x9A506E: fdiv    flt_BAAA88
0x9A5074: fstp    flt_BAAA68
0x9A507A: fld     flt_BAAA7C
0x9A5080: fdiv    flt_BAAA8C
0x9A5086: fstp    flt_BAAA6C
0x9A508C: jmp     loc_9A4F84
