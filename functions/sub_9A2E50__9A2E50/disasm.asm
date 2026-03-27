0x9A2E50: mov     eax, [esp+arg_8]
0x9A2E54: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A2E57: sub     esp, 10h
0x9A2E5A: cmp     eax, 7
0x9A2E5D: ja      def_9A2E6A; jumptable 009A2E6A default case, cases 5,6,8,9
0x9A2E63: movzx   eax, ds:byte_9A3048[eax]
0x9A2E6A: jmp     ds:jpt_9A2E6A[eax*4]; switch jump
0x9A2E71: mov     eax, [esp+10h+arg_C]; jumptable 009A2E6A cases 3,4
0x9A2E75: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A2E78: cmp     eax, 7
0x9A2E7B: ja      def_9A2E6A; jumptable 009A2E6A default case, cases 5,6,8,9
0x9A2E81: movzx   ecx, ds:byte_9A305C[eax]
0x9A2E88: jmp     ds:jpt_9A2E88[ecx*4]; switch jump
0x9A2E8F: fld     flt_BAAA70; jumptable 009A2E88 cases 3,4
0x9A2E95: fadd    flt_BAAA80
0x9A2E9B: fstp    [esp+10h+var_10]
0x9A2E9E: mov     edx, [esp+10h+var_10]
0x9A2EA1: fld     flt_BAAA74
0x9A2EA7: mov     flt_BAAA60, edx
0x9A2EAD: fadd    flt_BAAA84
0x9A2EB3: fstp    [esp+10h+var_C]
0x9A2EB7: mov     eax, [esp+10h+var_C]
0x9A2EBB: fld     flt_BAAA78
0x9A2EC1: mov     flt_BAAA64, eax
0x9A2EC6: fadd    flt_BAAA88
0x9A2ECC: fstp    [esp+10h+var_8]
0x9A2ED0: mov     ecx, [esp+10h+var_8]
0x9A2ED4: fld     flt_BAAA7C
0x9A2EDA: mov     flt_BAAA68, ecx
0x9A2EE0: fadd    flt_BAAA8C
0x9A2EE6: fstp    [esp+10h+var_4]
0x9A2EEA: mov     edx, [esp+10h+var_4]
0x9A2EEE: mov     flt_BAAA6C, edx
0x9A2EF4: mov     ecx, [esp+10h+arg_0]
0x9A2EF8: mov     eax, [ecx]
0x9A2EFA: mov     edx, [esp+10h+arg_4]
0x9A2EFE: mov     eax, [eax+30h]
0x9A2F01: push    0
0x9A2F03: push    offset flt_BAAA60
0x9A2F08: push    edx
0x9A2F09: call    eax
0x9A2F0B: neg     al
0x9A2F0D: sbb     eax, eax
0x9A2F0F: and     eax, 7FFFFFB0h
0x9A2F14: add     eax, 80000050h
0x9A2F19: add     esp, 10h
0x9A2F1C: retn    18h
0x9A2F1F: fld     flt_BAAA70; jumptable 009A2E88 cases 7,10
0x9A2F25: fld     st
0x9A2F27: fadd    flt_BAAA80
0x9A2F2D: fstp    flt_BAAA60
0x9A2F33: fld     flt_BAAA84
0x9A2F39: fadd    st, st(1)
0x9A2F3B: fstp    flt_BAAA64
0x9A2F41: fld     flt_BAAA88
0x9A2F47: fadd    st, st(1)
0x9A2F49: fstp    flt_BAAA68
0x9A2F4F: fadd    flt_BAAA8C
0x9A2F55: mov     ecx, [esp+10h+arg_0]
0x9A2F59: fstp    flt_BAAA6C
0x9A2F5F: mov     edx, [ecx]
0x9A2F61: mov     eax, [esp+10h+arg_4]
0x9A2F65: mov     edx, [edx+30h]
0x9A2F68: push    0
0x9A2F6A: push    offset flt_BAAA60
0x9A2F6F: push    eax
0x9A2F70: call    edx
0x9A2F72: neg     al
0x9A2F74: sbb     eax, eax
0x9A2F76: and     eax, 7FFFFFB0h
0x9A2F7B: add     eax, 80000050h
0x9A2F80: add     esp, 10h
0x9A2F83: retn    18h
0x9A2F86: mov     eax, [esp+10h+arg_C]; jumptable 009A2E6A cases 7,10
0x9A2F8A: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A2F8D: cmp     eax, 7
0x9A2F90: ja      def_9A2E6A; jumptable 009A2E6A default case, cases 5,6,8,9
0x9A2F96: movzx   eax, ds:byte_9A3070[eax]
0x9A2F9D: jmp     ds:jpt_9A2F9D[eax*4]; switch jump
0x9A2FA4: fld     flt_BAAA70; jumptable 009A2F9D cases 3,4
0x9A2FAA: fld     flt_BAAA80
0x9A2FB0: fld     st
0x9A2FB2: faddp   st(2), st
0x9A2FB4: fxch    st(1)
0x9A2FB6: fstp    flt_BAAA60
0x9A2FBC: fld     flt_BAAA74
0x9A2FC2: fadd    st, st(1)
0x9A2FC4: fstp    flt_BAAA64
0x9A2FCA: fld     flt_BAAA78
0x9A2FD0: fadd    st, st(1)
0x9A2FD2: fstp    flt_BAAA68
0x9A2FD8: fadd    flt_BAAA7C
0x9A2FDE: jmp     loc_9A2F55
0x9A2FE3: fld     flt_BAAA70; jumptable 009A2F9D cases 7,10
0x9A2FE9: fadd    flt_BAAA80
0x9A2FEF: fstp    flt_BAAA60
0x9A2FF5: fld     flt_BAAA74
0x9A2FFB: fadd    flt_BAAA84
0x9A3001: fstp    flt_BAAA64
0x9A3007: fld     flt_BAAA78
0x9A300D: fadd    flt_BAAA88
0x9A3013: fstp    flt_BAAA68
0x9A3019: fld     flt_BAAA7C
0x9A301F: fadd    flt_BAAA8C
0x9A3025: fstp    flt_BAAA6C
0x9A302B: jmp     loc_9A2EF4
0x9A3030: mov     eax, 1; jumptable 009A2E6A default case, cases 5,6,8,9
0x9A3035: add     esp, 10h
0x9A3038: retn    18h
