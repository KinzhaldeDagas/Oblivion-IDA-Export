0x9A28A0: mov     eax, [esp+arg_8]
0x9A28A4: sub     esp, 40h
0x9A28A7: sub     eax, 7
0x9A28AA: jz      loc_9A2A9E
0x9A28B0: sub     eax, 2
0x9A28B3: jz      short loc_9A28C9
0x9A28B5: sub     eax, 1
0x9A28B8: jz      loc_9A2A9E
0x9A28BE: mov     eax, 1; jumptable 009A28D5 default case, cases 5,6,8
0x9A28C3: add     esp, 40h
0x9A28C6: retn    18h
0x9A28C9: mov     eax, [esp+40h+arg_C]
0x9A28CD: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A28D0: cmp     eax, 7
0x9A28D3: ja      short def_9A28D5; jumptable 009A28D5 default case, cases 5,6,8
0x9A28D5: jmp     ds:jpt_9A28D5[eax*4]; switch jump
0x9A28DC: push    offset unk_BAAA20; jumptable 009A28D5 case 9
0x9A28E1: push    offset unk_BAA9E0
0x9A28E6: push    offset unk_BAA950
0x9A28EB: call    D3DXMatrixMultiply_0
0x9A28F0: cmp     [esp+40h+arg_10], 0
0x9A28F5: jz      short loc_9A2908
0x9A28F7: push    offset unk_BAA950
0x9A28FC: push    0
0x9A28FE: push    offset unk_BAA950
0x9A2903: call    D3DXMatrixInverse_0
0x9A2908: cmp     [esp+40h+arg_14], 0
0x9A290D: jz      short loc_9A291E
0x9A290F: push    offset unk_BAA950
0x9A2914: push    offset unk_BAA950
0x9A2919: call    D3DXMatrixTranspose_0
0x9A291E: push    0
0x9A2920: push    offset unk_BAA950
0x9A2925: mov     ecx, [esp+48h+arg_0]
0x9A2929: mov     eax, [ecx]
0x9A292B: mov     edx, [esp+48h+arg_4]
0x9A292F: mov     eax, [eax+30h]
0x9A2932: push    edx
0x9A2933: call    eax
0x9A2935: neg     al
0x9A2937: sbb     eax, eax
0x9A2939: and     eax, 7FFFFFB0h
0x9A293E: add     eax, 80000050h
0x9A2943: add     esp, 40h
0x9A2946: retn    18h
0x9A2949: cmp     [esp+40h+arg_10], 0; jumptable 009A28D5 cases 3,4
0x9A294E: fld     dword ptr unk_BAA9E0
0x9A2954: fld     dword ptr unk_BAAA80
0x9A295A: push    esi
0x9A295B: fld     st
0x9A295D: push    edi
0x9A295E: fmulp   st(2), st
0x9A2960: mov     ecx, 10h
0x9A2965: fxch    st(1)
0x9A2967: lea     esi, [esp+48h+var_40]
0x9A296B: mov     edi, offset unk_BAA950
0x9A2970: fstp    [esp+48h+var_40]
0x9A2974: fld     dword ptr unk_BAA9E4
0x9A297A: fmul    st, st(1)
0x9A297C: fstp    [esp+48h+var_3C]
0x9A2980: fld     dword ptr unk_BAA9E8
0x9A2986: fmul    st, st(1)
0x9A2988: fstp    [esp+48h+var_38]
0x9A298C: fld     dword ptr unk_BAA9EC
0x9A2992: fmul    st, st(1)
0x9A2994: fstp    [esp+48h+var_34]
0x9A2998: fld     dword ptr unk_BAA9F0
0x9A299E: fmul    st, st(1)
0x9A29A0: fstp    [esp+48h+var_30]
0x9A29A4: fld     dword ptr unk_BAA9F4
0x9A29AA: fmul    st, st(1)
0x9A29AC: fstp    [esp+48h+var_2C]
0x9A29B0: fld     dword ptr unk_BAA9F8
0x9A29B6: fmul    st, st(1)
0x9A29B8: fstp    [esp+48h+var_28]
0x9A29BC: fld     dword ptr unk_BAA9FC
0x9A29C2: fmul    st, st(1)
0x9A29C4: fstp    [esp+48h+var_24]
0x9A29C8: fld     dword ptr unk_BAAA00
0x9A29CE: fmul    st, st(1)
0x9A29D0: fstp    [esp+48h+var_20]
0x9A29D4: fld     dword ptr unk_BAAA04
0x9A29DA: fmul    st, st(1)
0x9A29DC: fstp    [esp+48h+var_1C]
0x9A29E0: fld     dword ptr unk_BAAA08
0x9A29E6: fmul    st, st(1)
0x9A29E8: fstp    [esp+48h+var_18]
0x9A29EC: fld     dword ptr unk_BAAA0C
0x9A29F2: fmul    st, st(1)
0x9A29F4: fstp    [esp+48h+var_14]
0x9A29F8: fld     dword ptr unk_BAAA10
0x9A29FE: fmul    st, st(1)
0x9A2A00: fstp    [esp+48h+var_10]
0x9A2A04: fld     dword ptr unk_BAAA14
0x9A2A0A: fmul    st, st(1)
0x9A2A0C: fstp    [esp+48h+var_C]
0x9A2A10: fld     dword ptr unk_BAAA18
0x9A2A16: fmul    st, st(1)
0x9A2A18: fstp    [esp+48h+var_8]
0x9A2A1C: fmul    dword ptr unk_BAAA1C
0x9A2A22: fstp    [esp+48h+var_4]
0x9A2A26: rep movsd
0x9A2A28: pop     edi
0x9A2A29: pop     esi
0x9A2A2A: jz      short loc_9A2A3D
0x9A2A2C: push    offset unk_BAA950
0x9A2A31: push    0
0x9A2A33: push    offset unk_BAA950
0x9A2A38: call    D3DXMatrixInverse_0
0x9A2A3D: cmp     [esp+40h+arg_14], 0
0x9A2A42: jz      short loc_9A2A53
0x9A2A44: push    offset unk_BAA950
0x9A2A49: push    offset unk_BAA950
0x9A2A4E: call    D3DXMatrixTranspose_0
0x9A2A53: mov     ecx, [esp+40h+arg_0]
0x9A2A57: mov     edx, [ecx]
0x9A2A59: mov     eax, [esp+40h+arg_4]
0x9A2A5D: mov     edx, [edx+30h]
0x9A2A60: push    0
0x9A2A62: push    offset unk_BAA950
0x9A2A67: push    eax
0x9A2A68: call    edx
0x9A2A6A: neg     al
0x9A2A6C: sbb     eax, eax
0x9A2A6E: and     eax, 7FFFFFB0h
0x9A2A73: add     eax, 80000050h
0x9A2A78: add     esp, 40h
0x9A2A7B: retn    18h
0x9A2A7E: push    offset unk_BAA9E0; jumptable 009A28D5 cases 7,10
0x9A2A83: push    offset unk_BAAA80
0x9A2A88: push    offset unk_BAAA60
0x9A2A8D: call    D3DXVec4Transform_0
0x9A2A92: push    0
0x9A2A94: push    offset unk_BAAA60
0x9A2A99: jmp     loc_9A2925
0x9A2A9E: mov     eax, [esp+40h+arg_C]
0x9A2AA2: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A2AA5: cmp     eax, 7
0x9A2AA8: ja      def_9A28D5; jumptable 009A28D5 default case, cases 5,6,8
0x9A2AAE: jmp     ds:jpt_9A2AAE[eax*4]; switch jump
0x9A2AB5: push    offset unk_BAAA20; jumptable 009A2AAE case 9
0x9A2ABA: push    offset unk_BAAA70
0x9A2ABF: push    offset unk_BAAA60
0x9A2AC4: call    D3DXVec4Transform_0
0x9A2AC9: mov     ecx, [esp+40h+arg_0]
0x9A2ACD: mov     edx, [ecx]
0x9A2ACF: mov     eax, [esp+40h+arg_4]
0x9A2AD3: mov     edx, [edx+30h]
0x9A2AD6: push    0
0x9A2AD8: push    offset unk_BAAA60
0x9A2ADD: push    eax
0x9A2ADE: call    edx
0x9A2AE0: neg     al
0x9A2AE2: sbb     eax, eax
0x9A2AE4: and     eax, 7FFFFFB0h
0x9A2AE9: add     eax, 80000050h
0x9A2AEE: add     esp, 40h
0x9A2AF1: retn    18h
0x9A2AF4: fld     dword ptr unk_BAAA70; jumptable 009A2AAE cases 3,4
0x9A2AFA: push    0
0x9A2AFC: fld     dword ptr unk_BAAA80
0x9A2B02: push    offset unk_BAAA60
0x9A2B07: fld     st
0x9A2B09: fmulp   st(2), st
0x9A2B0B: fxch    st(1)
0x9A2B0D: fstp    dword ptr unk_BAAA60
0x9A2B13: fld     dword ptr unk_BAAA74
0x9A2B19: fmul    st, st(1)
0x9A2B1B: fstp    dword ptr unk_BAAA64
0x9A2B21: fld     dword ptr unk_BAAA78
0x9A2B27: fmul    st, st(1)
0x9A2B29: fstp    dword ptr unk_BAAA68
0x9A2B2F: fmul    dword ptr unk_BAAA7C
0x9A2B35: fstp    dword ptr unk_BAAA6C
0x9A2B3B: jmp     loc_9A2925
0x9A2B40: fld     dword ptr unk_BAAA70; jumptable 009A2AAE cases 7,10
0x9A2B46: fmul    dword ptr unk_BAAA80
0x9A2B4C: fstp    dword ptr unk_BAAA60
0x9A2B52: fld     dword ptr unk_BAAA84
0x9A2B58: fmul    dword ptr unk_BAAA74
0x9A2B5E: fstp    dword ptr unk_BAAA64
0x9A2B64: fld     dword ptr unk_BAAA88
0x9A2B6A: fmul    dword ptr unk_BAAA78
0x9A2B70: fstp    dword ptr unk_BAAA68
0x9A2B76: fld     dword ptr unk_BAAA8C
0x9A2B7C: fmul    dword ptr unk_BAAA7C
0x9A2B82: fstp    dword ptr unk_BAAA6C
0x9A2B88: jmp     loc_9A2AC9
