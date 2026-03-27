0x4C3C90: sub     esp, 38h
0x4C3C93: push    ebp
0x4C3C94: mov     ebp, ecx
0x4C3C96: mov     eax, [ebp+24h]
0x4C3C99: mov     ecx, [eax+10h]
0x4C3C9C: push    esi
0x4C3C9D: mov     esi, [esp+40h+arg_0]
0x4C3CA1: mov     edx, [ecx+esi*4]
0x4C3CA4: push    edi
0x4C3CA5: mov     edi, [esp+44h+arg_4]
0x4C3CA9: cmp     byte ptr [edi+edx], 0
0x4C3CAD: jnz     loc_4C44AA
0x4C3CB3: push    ebx
0x4C3CB4: mov     ebx, [esp+48h+arg_C]
0x4C3CB8: test    ebx, ebx
0x4C3CBA: jz      loc_4C44A9
0x4C3CC0: mov     ecx, ebp
0x4C3CC2: call    sub_4BF060
0x4C3CC7: fadd    qword ptr ds:0A30F70h
0x4C3CCD: mov     ecx, ebp
0x4C3CCF: fstp    [esp+48h+var_C]
0x4C3CD3: call    sub_4BF0A0
0x4C3CD8: fadd    qword ptr ds:0A30F70h
0x4C3CDE: mov     edx, [ebp+24h]
0x4C3CE1: mov     eax, [edx+4]
0x4C3CE4: mov     eax, [eax+esi*4]
0x4C3CE7: mov     edx, [edx+8]
0x4C3CEA: fstp    [esp+48h+var_8]
0x4C3CEE: lea     ecx, [edi+edi*2]
0x4C3CF1: add     ecx, ecx
0x4C3CF3: add     ecx, ecx
0x4C3CF5: fld     dword ptr [eax+ecx]
0x4C3CF8: add     eax, ecx
0x4C3CFA: fadd    [esp+48h+var_C]
0x4C3CFE: mov     [esp+48h+var_38], 0
0x4C3D03: mov     [esp+48h+var_37], 0
0x4C3D08: mov     byte ptr [esp+48h+arg_0], 0
0x4C3D0D: fstp    [esp+48h+var_18]
0x4C3D11: mov     byte ptr [esp+48h+arg_4], 0
0x4C3D16: fld     dword ptr [eax+4]
0x4C3D19: mov     [esp+48h+var_36], 0
0x4C3D1E: fadd    [esp+48h+var_8]
0x4C3D22: mov     [esp+48h+var_35], 0
0x4C3D27: fstp    [esp+48h+var_14]
0x4C3D2B: fld     dword ptr [eax+8]
0x4C3D2E: mov     eax, [edx+esi*4]
0x4C3D31: fadd    qword ptr ds:0A2FC68h
0x4C3D37: mov     edx, [eax+ecx+4]
0x4C3D3B: add     eax, ecx
0x4C3D3D: cmp     esi, 2
0x4C3D40: mov     ecx, [eax]
0x4C3D42: fstp    [esp+48h+var_10]
0x4C3D46: fld1
0x4C3D48: mov     eax, [eax+8]
0x4C3D4B: fstp    [esp+48h+var_34]
0x4C3D4F: mov     [esp+48h+var_24], ecx
0x4C3D53: mov     [esp+48h+var_20], edx
0x4C3D57: mov     [esp+48h+var_1C], eax
0x4C3D5B: jge     loc_4C3E03
0x4C3D61: cmp     edi, 11h
0x4C3D64: jge     loc_4C3EA3
0x4C3D6A: mov     ebx, [ebx+18h]
0x4C3D6D: test    ebx, ebx
0x4C3D6F: mov     byte ptr [esp+48h+arg_0], 1
0x4C3D74: jz      short loc_4C3D90
0x4C3D76: lea     ecx, [esp+48h+var_C]
0x4C3D7A: push    ecx
0x4C3D7B: lea     edx, [esp+4Ch+var_30]
0x4C3D7F: push    edx
0x4C3D80: lea     eax, [esp+50h+var_18]
0x4C3D84: push    eax
0x4C3D85: mov     ecx, ebx
0x4C3D87: call    sub_4C3C00
0x4C3D8C: test    al, al
0x4C3D8E: jnz     short loc_4C3DB8
0x4C3D90: fldz
0x4C3D92: fst     [esp+48h+var_C]
0x4C3D96: mov     ecx, [esp+48h+var_C]
0x4C3D9A: fstp    [esp+48h+var_8]
0x4C3D9E: fld1
0x4C3DA0: mov     edx, [esp+48h+var_8]
0x4C3DA4: fstp    [esp+48h+var_4]
0x4C3DA8: mov     [esp+48h+var_30], ecx
0x4C3DAC: mov     [esp+48h+var_2C], edx
0x4C3DB0: mov     eax, [esp+48h+var_4]
0x4C3DB4: mov     [esp+48h+var_28], eax
0x4C3DB8: test    ebx, ebx
0x4C3DBA: jz      loc_4C3E75
0x4C3DC0: lea     ecx, [esp+48h+var_18]
0x4C3DC4: push    ecx
0x4C3DC5: mov     ecx, ebx
0x4C3DC7: call    sub_4C3C50
0x4C3DCC: test    al, al
0x4C3DCE: jz      loc_4C3E75
0x4C3DD4: mov     eax, [esp+48h+arg_8]
0x4C3DD8: mov     edx, [esp+48h+var_30]
0x4C3DDC: mov     ecx, [esp+48h+var_2C]
0x4C3DE0: mov     [eax], edx
0x4C3DE2: mov     edx, [esp+48h+var_28]
0x4C3DE6: mov     [eax+4], ecx
0x4C3DE9: mov     [eax+8], edx
0x4C3DEC: mov     eax, [ebp+24h]
0x4C3DEF: mov     ecx, [eax+10h]
0x4C3DF2: mov     edx, [ecx+esi*4]
0x4C3DF5: pop     ebx
0x4C3DF6: mov     byte ptr [edi+edx], 1
0x4C3DFA: pop     edi
0x4C3DFB: pop     esi
0x4C3DFC: pop     ebp
0x4C3DFD: add     esp, 38h
0x4C3E00: retn    10h
0x4C3E03: cmp     edi, 110h
0x4C3E09: jl      loc_4C3EA3
0x4C3E0F: mov     ebx, [ebx+4]
0x4C3E12: test    ebx, ebx
0x4C3E14: mov     byte ptr [esp+48h+arg_4], 1
0x4C3E19: jz      short loc_4C3E35
0x4C3E1B: lea     eax, [esp+48h+var_C]
0x4C3E1F: push    eax
0x4C3E20: lea     ecx, [esp+4Ch+var_30]
0x4C3E24: push    ecx
0x4C3E25: lea     edx, [esp+50h+var_18]
0x4C3E29: push    edx
0x4C3E2A: mov     ecx, ebx
0x4C3E2C: call    sub_4C3C00
0x4C3E31: test    al, al
0x4C3E33: jnz     short loc_4C3E5D
0x4C3E35: fldz
0x4C3E37: fst     [esp+48h+var_C]
0x4C3E3B: mov     eax, [esp+48h+var_C]
0x4C3E3F: fstp    [esp+48h+var_8]
0x4C3E43: fld1
0x4C3E45: mov     ecx, [esp+48h+var_8]
0x4C3E49: fstp    [esp+48h+var_4]
0x4C3E4D: mov     [esp+48h+var_30], eax
0x4C3E51: mov     [esp+48h+var_2C], ecx
0x4C3E55: mov     edx, [esp+48h+var_4]
0x4C3E59: mov     [esp+48h+var_28], edx
0x4C3E5D: test    ebx, ebx
0x4C3E5F: jz      short loc_4C3E75
0x4C3E61: lea     eax, [esp+48h+var_18]
0x4C3E65: push    eax
0x4C3E66: mov     ecx, ebx
0x4C3E68: call    sub_4C3C50
0x4C3E6D: test    al, al
0x4C3E6F: jnz     loc_4C3FF0
0x4C3E75: fld     [esp+48h+var_24]
0x4C3E79: fadd    [esp+48h+var_30]
0x4C3E7D: fstp    [esp+48h+var_24]
0x4C3E81: fld     [esp+48h+var_2C]
0x4C3E85: fadd    [esp+48h+var_20]
0x4C3E89: fstp    [esp+48h+var_20]
0x4C3E8D: fld     [esp+48h+var_28]
0x4C3E91: fadd    [esp+48h+var_1C]
0x4C3E95: fstp    [esp+48h+var_1C]
0x4C3E99: fld     dword ptr ds:0A379B4h
0x4C3E9F: fstp    [esp+48h+var_34]
0x4C3EA3: mov     edx, esi
0x4C3EA5: and     edx, 80000001h
0x4C3EAB: jns     short loc_4C3EB2
0x4C3EAD: dec     edx
0x4C3EAE: or      edx, 0FFFFFFFEh
0x4C3EB1: inc     edx
0x4C3EB2: fld1
0x4C3EB4: jnz     loc_4C4007
0x4C3EBA: mov     eax, 78787879h
0x4C3EBF: imul    edi
0x4C3EC1: sar     edx, 3
0x4C3EC4: mov     eax, edx
0x4C3EC6: shr     eax, 1Fh
0x4C3EC9: add     eax, edx
0x4C3ECB: mov     ecx, eax
0x4C3ECD: shl     ecx, 4
0x4C3ED0: add     ecx, eax
0x4C3ED2: mov     edx, edi
0x4C3ED4: sub     edx, ecx
0x4C3ED6: jnz     loc_4C4007
0x4C3EDC: mov     eax, [esp+48h+arg_C]
0x4C3EE0: fstp    st
0x4C3EE2: mov     ebx, [eax+0Ch]
0x4C3EE5: test    ebx, ebx
0x4C3EE7: mov     [esp+48h+var_36], 1
0x4C3EEC: jz      short loc_4C3F08
0x4C3EEE: lea     ecx, [esp+48h+var_C]
0x4C3EF2: push    ecx
0x4C3EF3: lea     edx, [esp+4Ch+var_30]
0x4C3EF7: push    edx
0x4C3EF8: lea     eax, [esp+50h+var_18]
0x4C3EFC: push    eax
0x4C3EFD: mov     ecx, ebx
0x4C3EFF: call    sub_4C3C00
0x4C3F04: test    al, al
0x4C3F06: jnz     short loc_4C3F30
0x4C3F08: fldz
0x4C3F0A: fst     [esp+48h+var_C]
0x4C3F0E: mov     ecx, [esp+48h+var_C]
0x4C3F12: fstp    [esp+48h+var_8]
0x4C3F16: fld1
0x4C3F18: mov     edx, [esp+48h+var_8]
0x4C3F1C: fstp    [esp+48h+var_4]
0x4C3F20: mov     [esp+48h+var_30], ecx
0x4C3F24: mov     [esp+48h+var_2C], edx
0x4C3F28: mov     eax, [esp+48h+var_4]
0x4C3F2C: mov     [esp+48h+var_28], eax
0x4C3F30: test    ebx, ebx
0x4C3F32: jz      short loc_4C3F48
0x4C3F34: lea     ecx, [esp+48h+var_18]
0x4C3F38: push    ecx
0x4C3F39: mov     ecx, ebx
0x4C3F3B: call    sub_4C3C50
0x4C3F40: test    al, al
0x4C3F42: jnz     loc_4C3DD4
0x4C3F48: cmp     byte ptr [esp+48h+arg_0], 0
0x4C3F4D: fld     [esp+48h+var_24]
0x4C3F51: fadd    [esp+48h+var_30]
0x4C3F55: fstp    [esp+48h+var_24]
0x4C3F59: fld     [esp+48h+var_2C]
0x4C3F5D: fadd    [esp+48h+var_20]
0x4C3F61: fstp    [esp+48h+var_20]
0x4C3F65: fld     [esp+48h+var_28]
0x4C3F69: fadd    [esp+48h+var_1C]
0x4C3F6D: fstp    [esp+48h+var_1C]
0x4C3F71: fld     [esp+48h+var_34]
0x4C3F75: fld1
0x4C3F77: fadd    st(1), st
0x4C3F79: fxch    st(1)
0x4C3F7B: fstp    [esp+48h+var_34]
0x4C3F7F: jz      loc_4C40E0
0x4C3F85: mov     edx, [esp+48h+arg_C]
0x4C3F89: mov     ebx, [edx+14h]
0x4C3F8C: test    ebx, ebx
0x4C3F8E: fstp    st
0x4C3F90: jz      short loc_4C3FAC
0x4C3F92: lea     eax, [esp+48h+var_C]
0x4C3F96: push    eax
0x4C3F97: lea     ecx, [esp+4Ch+var_30]
0x4C3F9B: push    ecx
0x4C3F9C: lea     edx, [esp+50h+var_18]
0x4C3FA0: push    edx
0x4C3FA1: mov     ecx, ebx
0x4C3FA3: call    sub_4C3C00
0x4C3FA8: test    al, al
0x4C3FAA: jnz     short loc_4C3FD4
0x4C3FAC: fldz
0x4C3FAE: fst     [esp+48h+var_C]
0x4C3FB2: mov     eax, [esp+48h+var_C]
0x4C3FB6: fstp    [esp+48h+var_8]
0x4C3FBA: fld1
0x4C3FBC: mov     ecx, [esp+48h+var_8]
0x4C3FC0: fstp    [esp+48h+var_4]
0x4C3FC4: mov     [esp+48h+var_30], eax
0x4C3FC8: mov     [esp+48h+var_2C], ecx
0x4C3FCC: mov     edx, [esp+48h+var_4]
0x4C3FD0: mov     [esp+48h+var_28], edx
0x4C3FD4: test    ebx, ebx
0x4C3FD6: jz      loc_4C4105
0x4C3FDC: lea     eax, [esp+48h+var_18]
0x4C3FE0: push    eax
0x4C3FE1: mov     ecx, ebx
0x4C3FE3: call    sub_4C3C50
0x4C3FE8: test    al, al
0x4C3FEA: jz      loc_4C4105
0x4C3FF0: mov     ecx, [esp+48h+var_30]
0x4C3FF4: mov     eax, [esp+48h+arg_8]
0x4C3FF8: mov     edx, [esp+48h+var_2C]
0x4C3FFC: mov     [eax], ecx
0x4C3FFE: mov     ecx, [esp+48h+var_28]
0x4C4002: jmp     loc_4C4496
0x4C4007: lea     eax, [esi+1]
0x4C400A: and     eax, 80000001h
0x4C400F: jns     short loc_4C4016
0x4C4011: dec     eax
0x4C4012: or      eax, 0FFFFFFFEh
0x4C4015: inc     eax
0x4C4016: jnz     loc_4C4137
0x4C401C: lea     eax, [edi+1]
0x4C401F: cdq
0x4C4020: mov     ecx, 11h
0x4C4025: idiv    ecx
0x4C4027: test    edx, edx
0x4C4029: jnz     loc_4C4137
0x4C402F: mov     edx, [esp+48h+arg_C]
0x4C4033: fstp    st
0x4C4035: mov     ebx, [edx+10h]
0x4C4038: test    ebx, ebx
0x4C403A: mov     [esp+48h+var_35], 1
0x4C403F: jz      short loc_4C405B
0x4C4041: lea     eax, [esp+48h+var_C]
0x4C4045: push    eax
0x4C4046: lea     ecx, [esp+4Ch+var_30]
0x4C404A: push    ecx
0x4C404B: lea     edx, [esp+50h+var_18]
0x4C404F: push    edx
0x4C4050: mov     ecx, ebx
0x4C4052: call    sub_4C3C00
0x4C4057: test    al, al
0x4C4059: jnz     short loc_4C4083
0x4C405B: fldz
0x4C405D: fst     [esp+48h+var_C]
0x4C4061: mov     eax, [esp+48h+var_C]
0x4C4065: fstp    [esp+48h+var_8]
0x4C4069: fld1
0x4C406B: mov     ecx, [esp+48h+var_8]
0x4C406F: fstp    [esp+48h+var_4]
0x4C4073: mov     [esp+48h+var_30], eax
0x4C4077: mov     [esp+48h+var_2C], ecx
0x4C407B: mov     edx, [esp+48h+var_4]
0x4C407F: mov     [esp+48h+var_28], edx
0x4C4083: test    ebx, ebx
0x4C4085: jz      short loc_4C409B
0x4C4087: lea     eax, [esp+48h+var_18]
0x4C408B: push    eax
0x4C408C: mov     ecx, ebx
0x4C408E: call    sub_4C3C50
0x4C4093: test    al, al
0x4C4095: jnz     loc_4C3FF0
0x4C409B: cmp     byte ptr [esp+48h+arg_0], 0
0x4C40A0: fld     [esp+48h+var_24]
0x4C40A4: fadd    [esp+48h+var_30]
0x4C40A8: fstp    [esp+48h+var_24]
0x4C40AC: fld     [esp+48h+var_2C]
0x4C40B0: fadd    [esp+48h+var_20]
0x4C40B4: fstp    [esp+48h+var_20]
0x4C40B8: fld     [esp+48h+var_28]
0x4C40BC: fadd    [esp+48h+var_1C]
0x4C40C0: fstp    [esp+48h+var_1C]
0x4C40C4: fld     [esp+48h+var_34]
0x4C40C8: fld1
0x4C40CA: fadd    st(1), st
0x4C40CC: fxch    st(1)
0x4C40CE: fstp    [esp+48h+var_34]
0x4C40D2: jz      short loc_4C40F2
0x4C40D4: mov     edx, [esp+48h+arg_C]
0x4C40D8: mov     ebx, [edx+1Ch]
0x4C40DB: jmp     loc_4C3F8C
0x4C40E0: cmp     byte ptr [esp+48h+arg_4], 0
0x4C40E5: jz      short loc_4C4137
0x4C40E7: mov     edx, [esp+48h+arg_C]
0x4C40EB: mov     ebx, [edx]
0x4C40ED: jmp     loc_4C3F8C
0x4C40F2: cmp     byte ptr [esp+48h+arg_4], 0
0x4C40F7: jz      short loc_4C4137
0x4C40F9: mov     edx, [esp+48h+arg_C]
0x4C40FD: mov     ebx, [edx+8]
0x4C4100: jmp     loc_4C3F8C
0x4C4105: fld     [esp+48h+var_24]
0x4C4109: fadd    [esp+48h+var_30]
0x4C410D: fstp    [esp+48h+var_24]
0x4C4111: fld     [esp+48h+var_2C]
0x4C4115: fadd    [esp+48h+var_20]
0x4C4119: fstp    [esp+48h+var_20]
0x4C411D: fld     [esp+48h+var_28]
0x4C4121: fadd    [esp+48h+var_1C]
0x4C4125: fstp    [esp+48h+var_1C]
0x4C4129: fld     [esp+48h+var_34]
0x4C412D: fld1
0x4C412F: fadd    st(1), st
0x4C4131: fxch    st(1)
0x4C4133: fstp    [esp+48h+var_34]
0x4C4137: cmp     edi, 11h
0x4C413A: jge     short loc_4C4195
0x4C413C: cmp     byte ptr [esp+48h+arg_0], 0
0x4C4141: jnz     short loc_4C4195
0x4C4143: mov     ecx, [ebp+24h]
0x4C4146: mov     edx, [ecx+8]
0x4C4149: mov     ecx, [ecx+10h]
0x4C414C: mov     ecx, [ecx+esi*4-8]
0x4C4150: mov     edx, [edx+esi*4-8]
0x4C4154: cmp     byte ptr [ecx+edi+110h], 0
0x4C415C: mov     [esp+48h+var_38], 1
0x4C4161: lea     eax, [edi+edi*2+330h]
0x4C4168: mov     ebx, [edx+eax*4+4]
0x4C416C: lea     eax, [edx+eax*4]
0x4C416F: mov     edx, [eax]
0x4C4171: mov     eax, [eax+8]
0x4C4174: mov     [esp+48h+var_28], eax
0x4C4178: mov     [esp+48h+var_2C], ebx
0x4C417C: mov     [esp+48h+var_30], edx
0x4C4180: jz      short loc_4C41CB
0x4C4182: mov     ecx, [esp+48h+arg_8]
0x4C4186: fstp    st
0x4C4188: mov     [ecx], edx
0x4C418A: mov     [ecx+4], ebx
0x4C418D: mov     [ecx+8], eax
0x4C4190: jmp     loc_4C449C
0x4C4195: cmp     edi, 110h
0x4C419B: jl      short loc_4C41F9
0x4C419D: cmp     byte ptr [esp+48h+arg_4], 0
0x4C41A2: jnz     short loc_4C41F9
0x4C41A4: mov     ecx, [ebp+24h]
0x4C41A7: mov     edx, [ecx+8]
0x4C41AA: mov     ecx, [ecx+10h]
0x4C41AD: mov     ecx, [ecx+esi*4+8]
0x4C41B1: mov     edx, [edx+esi*4+8]
0x4C41B5: cmp     byte ptr [ecx+edi-110h], 0
0x4C41BD: mov     [esp+48h+var_37], 1
0x4C41C2: lea     eax, [edi+edi*2-330h]
0x4C41C9: jmp     short loc_4C4168
0x4C41CB: fld     [esp+48h+var_24]
0x4C41CF: fadd    [esp+48h+var_30]
0x4C41D3: fstp    [esp+48h+var_24]
0x4C41D7: fld     [esp+48h+var_2C]
0x4C41DB: fadd    [esp+48h+var_20]
0x4C41DF: fstp    [esp+48h+var_20]
0x4C41E3: fld     [esp+48h+var_28]
0x4C41E7: fadd    [esp+48h+var_1C]
0x4C41EB: fstp    [esp+48h+var_1C]
0x4C41EF: fld     [esp+48h+var_34]
0x4C41F3: fadd    st, st(1)
0x4C41F5: fstp    [esp+48h+var_34]
0x4C41F9: mov     eax, 78787879h
0x4C41FE: imul    edi
0x4C4200: sar     edx, 3
0x4C4203: mov     eax, edx
0x4C4205: shr     eax, 1Fh
0x4C4208: add     eax, edx
0x4C420A: mov     edx, eax
0x4C420C: shl     edx, 4
0x4C420F: add     edx, eax
0x4C4211: mov     eax, edi
0x4C4213: sub     eax, edx
0x4C4215: jnz     loc_4C42ED
0x4C421B: cmp     [esp+48h+var_36], 0
0x4C4220: jnz     loc_4C42ED
0x4C4226: mov     edx, [ebp+24h]
0x4C4229: mov     ecx, [edx+8]
0x4C422C: mov     ebx, [ecx+esi*4-4]
0x4C4230: mov     edx, [edx+10h]
0x4C4233: lea     eax, [edi+edi*2+30h]
0x4C4237: lea     eax, [ebx+eax*4]
0x4C423A: mov     ebx, [eax]
0x4C423C: mov     [esp+48h+var_30], ebx
0x4C4240: mov     ebx, [eax+4]
0x4C4243: mov     eax, [eax+8]
0x4C4246: mov     [esp+48h+var_28], eax
0x4C424A: mov     eax, [edx+esi*4-4]
0x4C424E: cmp     byte ptr [eax+edi+10h], 0
0x4C4253: mov     [esp+48h+var_2C], ebx
0x4C4257: jnz     loc_4C433D
0x4C425D: cmp     [esp+48h+var_38], 0
0x4C4262: fld     [esp+48h+var_24]
0x4C4266: fadd    [esp+48h+var_30]
0x4C426A: fstp    [esp+48h+var_24]
0x4C426E: fld     [esp+48h+var_2C]
0x4C4272: fadd    [esp+48h+var_20]
0x4C4276: fstp    [esp+48h+var_20]
0x4C427A: fld     [esp+48h+var_28]
0x4C427E: fadd    [esp+48h+var_1C]
0x4C4282: fstp    [esp+48h+var_1C]
0x4C4286: fld     [esp+48h+var_34]
0x4C428A: fadd    st, st(1)
0x4C428C: fstp    [esp+48h+var_34]
0x4C4290: jz      loc_4C43B8
0x4C4296: mov     eax, [ecx+esi*4-0Ch]
0x4C429A: mov     edx, [edx+esi*4-0Ch]
0x4C429E: add     eax, 0D80h
0x4C42A3: cmp     byte ptr [edx+120h], 0
0x4C42AA: mov     ebx, [eax]
0x4C42AC: mov     ecx, [eax+4]
0x4C42AF: mov     eax, [eax+8]
0x4C42B2: mov     [esp+48h+var_30], ebx
0x4C42B6: mov     [esp+48h+var_2C], ecx
0x4C42BA: mov     [esp+48h+var_28], eax
0x4C42BE: jz      loc_4C442A
0x4C42C4: mov     ecx, [esp+48h+arg_8]
0x4C42C8: fstp    st
0x4C42CA: mov     edx, [esp+48h+var_2C]
0x4C42CE: mov     [ecx], ebx
0x4C42D0: mov     [ecx+4], edx
0x4C42D3: mov     [ecx+8], eax
0x4C42D6: mov     eax, [ebp+24h]
0x4C42D9: mov     ecx, [eax+10h]
0x4C42DC: mov     edx, [ecx+esi*4]
0x4C42DF: pop     ebx
0x4C42E0: mov     byte ptr [edi+edx], 1
0x4C42E4: pop     edi
0x4C42E5: pop     esi
0x4C42E6: pop     ebp
0x4C42E7: add     esp, 38h
0x4C42EA: retn    10h
0x4C42ED: lea     eax, [edi+1]
0x4C42F0: cdq
0x4C42F1: mov     ecx, 11h
0x4C42F6: idiv    ecx
0x4C42F8: test    edx, edx
0x4C42FA: jnz     loc_4C4458
0x4C4300: cmp     [esp+48h+var_35], dl
0x4C4304: jnz     loc_4C4458
0x4C430A: mov     edx, [ebp+24h]
0x4C430D: mov     ecx, [edx+8]
0x4C4310: mov     ebx, [ecx+esi*4+4]
0x4C4314: mov     edx, [edx+10h]
0x4C4317: lea     eax, [edi+edi*2-30h]
0x4C431B: lea     eax, [ebx+eax*4]
0x4C431E: mov     ebx, [eax]
0x4C4320: mov     [esp+48h+var_30], ebx
0x4C4324: mov     ebx, [eax+4]
0x4C4327: mov     eax, [eax+8]
0x4C432A: mov     [esp+48h+var_28], eax
0x4C432E: mov     eax, [edx+esi*4+4]
0x4C4332: cmp     byte ptr [eax+edi-10h], 0
0x4C4337: mov     [esp+48h+var_2C], ebx
0x4C433B: jz      short loc_4C436A
0x4C433D: mov     ecx, [esp+48h+arg_8]
0x4C4341: fstp    st
0x4C4343: mov     edx, [esp+48h+var_30]
0x4C4347: mov     eax, [esp+48h+var_28]
0x4C434B: mov     [ecx], edx
0x4C434D: mov     [ecx+4], ebx
0x4C4350: mov     [ecx+8], eax
0x4C4353: mov     ecx, [ebp+24h]
0x4C4356: mov     edx, [ecx+10h]
0x4C4359: mov     eax, [edx+esi*4]
0x4C435C: pop     ebx
0x4C435D: mov     byte ptr [edi+eax], 1
0x4C4361: pop     edi
0x4C4362: pop     esi
0x4C4363: pop     ebp
0x4C4364: add     esp, 38h
0x4C4367: retn    10h
0x4C436A: cmp     [esp+48h+var_38], 0
0x4C436F: fld     [esp+48h+var_24]
0x4C4373: fadd    [esp+48h+var_30]
0x4C4377: fstp    [esp+48h+var_24]
0x4C437B: fld     [esp+48h+var_2C]
0x4C437F: fadd    [esp+48h+var_20]
0x4C4383: fstp    [esp+48h+var_20]
0x4C4387: fld     [esp+48h+var_28]
0x4C438B: fadd    [esp+48h+var_1C]
0x4C438F: fstp    [esp+48h+var_1C]
0x4C4393: fld     [esp+48h+var_34]
0x4C4397: fadd    st, st(1)
0x4C4399: fstp    [esp+48h+var_34]
0x4C439D: jz      short loc_4C43D9
0x4C439F: mov     eax, [ecx+esi*4-4]
0x4C43A3: mov     edx, [edx+esi*4-4]
0x4C43A7: add     eax, 0CC0h
0x4C43AC: cmp     byte ptr [edx+110h], 0
0x4C43B3: jmp     loc_4C42AA
0x4C43B8: cmp     [esp+48h+var_37], 0
0x4C43BD: jz      loc_4C4458
0x4C43C3: mov     eax, [ecx+esi*4+4]
0x4C43C7: mov     edx, [edx+esi*4+4]
0x4C43CB: add     eax, 0C0h ; 'À'
0x4C43D0: cmp     byte ptr [edx+10h], 0
0x4C43D4: jmp     loc_4C42AA
0x4C43D9: cmp     [esp+48h+var_37], 0
0x4C43DE: jz      short loc_4C4458
0x4C43E0: mov     ecx, [ecx+esi*4+0Ch]
0x4C43E4: mov     ebx, [ecx]
0x4C43E6: mov     eax, [ecx+4]
0x4C43E9: mov     edx, [edx+esi*4+0Ch]
0x4C43ED: cmp     byte ptr [edx], 0
0x4C43F0: mov     ecx, [ecx+8]
0x4C43F3: mov     [esp+48h+var_30], ebx
0x4C43F7: mov     [esp+48h+var_2C], eax
0x4C43FB: mov     [esp+48h+var_28], ecx
0x4C43FF: jz      short loc_4C442A
0x4C4401: mov     eax, [esp+48h+arg_8]
0x4C4405: fstp    st
0x4C4407: mov     edx, [esp+48h+var_2C]
0x4C440B: mov     [eax], ebx
0x4C440D: mov     [eax+4], edx
0x4C4410: mov     [eax+8], ecx
0x4C4413: mov     eax, [ebp+24h]
0x4C4416: mov     ecx, [eax+10h]
0x4C4419: mov     edx, [ecx+esi*4]
0x4C441C: pop     ebx
0x4C441D: mov     byte ptr [edi+edx], 1
0x4C4421: pop     edi
0x4C4422: pop     esi
0x4C4423: pop     ebp
0x4C4424: add     esp, 38h
0x4C4427: retn    10h
0x4C442A: fld     [esp+48h+var_24]
0x4C442E: fadd    [esp+48h+var_30]
0x4C4432: fstp    [esp+48h+var_24]
0x4C4436: fld     [esp+48h+var_2C]
0x4C443A: fadd    [esp+48h+var_20]
0x4C443E: fstp    [esp+48h+var_20]
0x4C4442: fld     [esp+48h+var_28]
0x4C4446: fadd    [esp+48h+var_1C]
0x4C444A: fstp    [esp+48h+var_1C]
0x4C444E: fld     [esp+48h+var_34]
0x4C4452: fadd    st, st(1)
0x4C4454: fstp    [esp+48h+var_34]
0x4C4458: fdiv    [esp+48h+var_34]
0x4C445C: mov     eax, [esp+48h+arg_8]
0x4C4460: fstp    [esp+48h+arg_C]
0x4C4464: fld     [esp+48h+var_24]
0x4C4468: fld     [esp+48h+arg_C]
0x4C446C: fld     st
0x4C446E: fmulp   st(2), st
0x4C4470: fxch    st(1)
0x4C4472: fstp    [esp+48h+var_C]
0x4C4476: mov     ecx, [esp+48h+var_C]
0x4C447A: fld     [esp+48h+var_20]
0x4C447E: mov     [eax], ecx
0x4C4480: fmul    st, st(1)
0x4C4482: fstp    [esp+48h+var_8]
0x4C4486: mov     edx, [esp+48h+var_8]
0x4C448A: fmul    [esp+48h+var_1C]
0x4C448E: fstp    [esp+48h+var_4]
0x4C4492: mov     ecx, [esp+48h+var_4]
0x4C4496: mov     [eax+4], edx
0x4C4499: mov     [eax+8], ecx
0x4C449C: mov     edx, [ebp+24h]
0x4C449F: mov     eax, [edx+10h]
0x4C44A2: mov     ecx, [eax+esi*4]
0x4C44A5: mov     byte ptr [edi+ecx], 1
0x4C44A9: pop     ebx
0x4C44AA: pop     edi
0x4C44AB: pop     esi
0x4C44AC: pop     ebp
0x4C44AD: add     esp, 38h
0x4C44B0: retn    10h
