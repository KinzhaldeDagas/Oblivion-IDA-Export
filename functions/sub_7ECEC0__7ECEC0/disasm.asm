0x7ECEC0: sub     esp, 44h
0x7ECEC3: push    edi
0x7ECEC4: mov     edi, [ecx+70h]
0x7ECEC7: test    edi, edi
0x7ECEC9: mov     [esp+48h+var_40], ecx
0x7ECECD: mov     [esp+48h+var_41], 0
0x7ECED2: jz      loc_7ED154
0x7ECED8: push    ebx
0x7ECED9: push    ebp
0x7ECEDA: push    esi
0x7ECEDB: jmp     short loc_7ECEE8
0x7ECEDD: align 10h
0x7ECEE0: mov     edi, [esp+54h+var_3C]
0x7ECEE4: mov     ecx, [esp+54h+var_40]
0x7ECEE8: mov     ebp, [edi+8]
0x7ECEEB: mov     edx, [edi]
0x7ECEED: mov     esi, [ecx+70h]
0x7ECEF0: lea     eax, [edi+8]
0x7ECEF3: lea     eax, [esp+54h+var_38]
0x7ECEF7: push    eax
0x7ECEF8: mov     ecx, ebp
0x7ECEFA: mov     [esp+58h+var_3C], edx
0x7ECEFE: call    sub_405AD0
0x7ECF03: mov     ecx, [eax]
0x7ECF05: mov     eax, [esp+54h+var_38]
0x7ECF09: fld     dword ptr [ecx+0F8h]
0x7ECF0F: test    eax, eax
0x7ECF11: fstp    [esp+54h+var_30]
0x7ECF15: jz      short loc_7ECF35
0x7ECF17: mov     ebx, eax
0x7ECF19: add     eax, 4
0x7ECF1C: push    eax; lpAddend
0x7ECF1D: call    dword ptr ds:0A2807Ch
0x7ECF23: test    eax, eax
0x7ECF25: jnz     short loc_7ECF35
0x7ECF27: test    ebx, ebx
0x7ECF29: jz      short loc_7ECF35
0x7ECF2B: mov     edx, [ebx]
0x7ECF2D: mov     eax, [edx]
0x7ECF2F: push    1
0x7ECF31: mov     ecx, ebx
0x7ECF33: call    eax
0x7ECF35: lea     ecx, [esp+54h+var_2C]
0x7ECF39: push    ecx
0x7ECF3A: mov     ecx, ebp
0x7ECF3C: call    sub_405AD0
0x7ECF41: mov     eax, [eax]
0x7ECF43: mov     ebx, [esp+54h+arg_0]
0x7ECF47: fld     dword ptr [eax+88h]
0x7ECF4D: fsub    dword ptr [ebx]
0x7ECF4F: add     eax, 88h ; 'ˆ'
0x7ECF54: fstp    [esp+54h+var_18]
0x7ECF58: fld     dword ptr [eax+4]
0x7ECF5B: fsub    dword ptr [ebx+4]
0x7ECF5E: fstp    [esp+54h+var_14]
0x7ECF62: fld     dword ptr [eax+8]
0x7ECF65: fsub    dword ptr [ebx+8]
0x7ECF68: fstp    [esp+54h+var_10]
0x7ECF6C: fld     [esp+54h+var_14]
0x7ECF70: fld     [esp+54h+var_18]
0x7ECF74: fld     [esp+54h+var_10]
0x7ECF78: fld     st(1)
0x7ECF7A: fmulp   st(2), st
0x7ECF7C: fld     st(2)
0x7ECF7E: fmulp   st(3), st
0x7ECF80: fxch    st(1)
0x7ECF82: faddp   st(2), st
0x7ECF84: fmul    st, st
0x7ECF86: faddp   st(1), st
0x7ECF88: fstp    [esp+54h+var_34]
0x7ECF8C: fld     [esp+54h+var_34]
0x7ECF90: call    __CIsqrt
0x7ECF95: fstp    [esp+54h+var_34]
0x7ECF99: fld     [esp+54h+var_34]
0x7ECF9D: mov     eax, [esp+54h+var_2C]
0x7ECFA1: test    eax, eax
0x7ECFA3: fsub    dword ptr [ebx+0Ch]
0x7ECFA6: fdiv    [esp+54h+var_30]
0x7ECFAA: fstp    [esp+54h+var_20]
0x7ECFAE: jz      short loc_7ECFCF
0x7ECFB0: mov     ebp, eax
0x7ECFB2: add     eax, 4
0x7ECFB5: push    eax; lpAddend
0x7ECFB6: call    dword ptr ds:0A2807Ch
0x7ECFBC: test    eax, eax
0x7ECFBE: jnz     short loc_7ECFCF
0x7ECFC0: test    ebp, ebp
0x7ECFC2: jz      short loc_7ECFCF
0x7ECFC4: mov     edx, [ebp+0]
0x7ECFC7: mov     eax, [edx]
0x7ECFC9: push    1
0x7ECFCB: mov     ecx, ebp
0x7ECFCD: call    eax
0x7ECFCF: cmp     esi, edi
0x7ECFD1: jz      loc_7ED134
0x7ECFD7: test    esi, esi
0x7ECFD9: jz      loc_7ED134
0x7ECFDF: mov     ebp, [esi+8]
0x7ECFE2: lea     eax, [esi+8]
0x7ECFE5: lea     ecx, [esp+54h+var_28]
0x7ECFE9: push    ecx
0x7ECFEA: mov     [esp+58h+var_1C], esi
0x7ECFEE: mov     esi, [esi]
0x7ECFF0: mov     ecx, ebp
0x7ECFF2: call    sub_405AD0
0x7ECFF7: mov     edx, [eax]
0x7ECFF9: mov     eax, [esp+54h+var_28]
0x7ECFFD: fld     dword ptr [edx+0F8h]
0x7ED003: test    eax, eax
0x7ED005: fstp    [esp+54h+var_34]
0x7ED009: jz      short loc_7ED02D
0x7ED00B: mov     ebx, eax
0x7ED00D: add     eax, 4
0x7ED010: push    eax; lpAddend
0x7ED011: call    dword ptr ds:0A2807Ch
0x7ED017: test    eax, eax
0x7ED019: jnz     short loc_7ED029
0x7ED01B: test    ebx, ebx
0x7ED01D: jz      short loc_7ED029
0x7ED01F: mov     eax, [ebx]
0x7ED021: mov     edx, [eax]
0x7ED023: push    1
0x7ED025: mov     ecx, ebx
0x7ED027: call    edx
0x7ED029: mov     ebx, [esp+54h+arg_0]
0x7ED02D: lea     eax, [esp+54h+var_24]
0x7ED031: push    eax
0x7ED032: mov     ecx, ebp
0x7ED034: call    sub_405AD0
0x7ED039: mov     eax, [eax]
0x7ED03B: fld     dword ptr [eax+88h]
0x7ED041: add     eax, 88h ; 'ˆ'
0x7ED046: fsub    dword ptr [ebx]
0x7ED048: fstp    [esp+54h+var_C]
0x7ED04C: fld     dword ptr [eax+4]
0x7ED04F: fsub    dword ptr [ebx+4]
0x7ED052: fstp    [esp+54h+var_8]
0x7ED056: fld     dword ptr [eax+8]
0x7ED059: fsub    dword ptr [ebx+8]
0x7ED05C: fstp    [esp+54h+var_4]
0x7ED060: fld     [esp+54h+var_8]
0x7ED064: fld     [esp+54h+var_C]
0x7ED068: fld     [esp+54h+var_4]
0x7ED06C: fld     st(1)
0x7ED06E: fmulp   st(2), st
0x7ED070: fld     st(2)
0x7ED072: fmulp   st(3), st
0x7ED074: fxch    st(1)
0x7ED076: faddp   st(2), st
0x7ED078: fmul    st, st
0x7ED07A: faddp   st(1), st
0x7ED07C: fstp    [esp+54h+var_30]
0x7ED080: fld     [esp+54h+var_30]
0x7ED084: call    __CIsqrt
0x7ED089: fstp    [esp+54h+var_30]
0x7ED08D: fld     [esp+54h+var_30]
0x7ED091: mov     eax, [esp+54h+var_24]
0x7ED095: test    eax, eax
0x7ED097: fsub    dword ptr [ebx+0Ch]
0x7ED09A: fdiv    [esp+54h+var_34]
0x7ED09E: fstp    [esp+54h+var_30]
0x7ED0A2: jz      short loc_7ED0C3
0x7ED0A4: mov     ebp, eax
0x7ED0A6: add     eax, 4
0x7ED0A9: push    eax; lpAddend
0x7ED0AA: call    dword ptr ds:0A2807Ch
0x7ED0B0: test    eax, eax
0x7ED0B2: jnz     short loc_7ED0C3
0x7ED0B4: test    ebp, ebp
0x7ED0B6: jz      short loc_7ED0C3
0x7ED0B8: mov     edx, [ebp+0]
0x7ED0BB: mov     eax, [edx]
0x7ED0BD: push    1
0x7ED0BF: mov     ecx, ebp
0x7ED0C1: call    eax
0x7ED0C3: fld     [esp+54h+var_20]
0x7ED0C7: fld     [esp+54h+var_30]
0x7ED0CB: fcompp
0x7ED0CD: fnstsw  ax
0x7ED0CF: test    ah, 41h
0x7ED0D2: jnz     short loc_7ED12C
0x7ED0D4: mov     ecx, [esp+54h+var_1C]
0x7ED0D8: cmp     edi, ecx
0x7ED0DA: jz      short loc_7ED125
0x7ED0DC: mov     eax, [esp+54h+var_40]
0x7ED0E0: cmp     [eax+70h], edi
0x7ED0E3: jnz     short loc_7ED0EA
0x7ED0E5: mov     edx, [edi]
0x7ED0E7: mov     [eax+70h], edx
0x7ED0EA: cmp     [eax+70h], ecx
0x7ED0ED: jnz     short loc_7ED0F2
0x7ED0EF: mov     [eax+70h], edi
0x7ED0F2: cmp     [eax+74h], edi
0x7ED0F5: jnz     short loc_7ED0FD
0x7ED0F7: mov     edx, [edi+4]
0x7ED0FA: mov     [eax+74h], edx
0x7ED0FD: mov     eax, [edi]
0x7ED0FF: test    eax, eax
0x7ED101: jz      short loc_7ED109
0x7ED103: mov     edx, [edi+4]
0x7ED106: mov     [eax+4], edx
0x7ED109: mov     eax, [edi+4]
0x7ED10C: test    eax, eax
0x7ED10E: jz      short loc_7ED114
0x7ED110: mov     edx, [edi]
0x7ED112: mov     [eax], edx
0x7ED114: mov     eax, [ecx+4]
0x7ED117: test    eax, eax
0x7ED119: mov     [edi+4], eax
0x7ED11C: mov     [edi], ecx
0x7ED11E: jz      short loc_7ED122
0x7ED120: mov     [eax], edi
0x7ED122: mov     [ecx+4], edi
0x7ED125: xor     esi, esi
0x7ED127: mov     [esp+54h+var_41], 1
0x7ED12C: cmp     esi, edi
0x7ED12E: jnz     loc_7ECFD7
0x7ED134: cmp     [esp+54h+var_3C], 0
0x7ED139: jnz     loc_7ECEE0
0x7ED13F: cmp     [esp+54h+var_41], 0
0x7ED144: pop     esi
0x7ED145: pop     ebp
0x7ED146: pop     ebx
0x7ED147: jz      short loc_7ED154
0x7ED149: mov     ecx, [esp+48h+var_40]
0x7ED14D: mov     dword ptr [ecx+24h], 0
0x7ED154: pop     edi
0x7ED155: add     esp, 44h
0x7ED158: retn    4
