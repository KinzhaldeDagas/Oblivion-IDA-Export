0x7A3C80: push    ebp
0x7A3C81: mov     ebp, esp
0x7A3C83: and     esp, 0FFFFFFF8h
0x7A3C86: push    0FFFFFFFFh
0x7A3C88: push    offset SEH_7A3C80
0x7A3C8D: mov     eax, large fs:0
0x7A3C93: push    eax
0x7A3C94: sub     esp, 4Ch
0x7A3C97: push    ebx
0x7A3C98: push    ebp
0x7A3C99: push    esi
0x7A3C9A: push    edi
0x7A3C9B: mov     eax, ds:0B30AACh
0x7A3CA0: xor     eax, esp
0x7A3CA2: push    eax; MaxCount
0x7A3CA3: lea     eax, [esp+6Ch+var_C]
0x7A3CA7: mov     large fs:0, eax
0x7A3CAD: mov     ebx, ecx
0x7A3CAF: mov     [esp+6Ch+var_4C], ebx
0x7A3CB3: xor     ebp, ebp
0x7A3CB5: xor     edi, edi
0x7A3CB7: mov     [esp+6Ch+var_2C], edi
0x7A3CBB: mov     [esp+6Ch+var_28], ebp
0x7A3CBF: mov     [esp+6Ch+var_24], ebp
0x7A3CC3: mov     ecx, [ebx+58h]
0x7A3CC6: cmp     ecx, ebp
0x7A3CC8: mov     [esp+6Ch+var_4], ebp
0x7A3CCC: jz      short loc_7A3D03
0x7A3CCE: mov     eax, [ebx+5Ch]
0x7A3CD1: mov     esi, [eax+6Ch]
0x7A3CD4: add     eax, 68h ; 'h'
0x7A3CD7: cmp     esi, ebp
0x7A3CD9: jnz     short loc_7A3CDF
0x7A3CDB: xor     edx, edx
0x7A3CDD: jmp     short loc_7A3CE7
0x7A3CDF: mov     edx, [eax+8]
0x7A3CE2: sub     edx, esi
0x7A3CE4: sar     edx, 2
0x7A3CE7: mov     eax, 0AAAAAAABh
0x7A3CEC: mul     edx
0x7A3CEE: shr     edx, 1
0x7A3CF0: test    dx, dx
0x7A3CF3: jbe     short loc_7A3D03
0x7A3CF5: lea     eax, [esp+6Ch+var_30]
0x7A3CF9: push    eax
0x7A3CFA: call    sub_7917E0
0x7A3CFF: mov     edi, [esp+6Ch+var_2C]
0x7A3D03: fldz
0x7A3D05: lea     ecx, [esp+6Ch+var_30]
0x7A3D09: fst     [esp+6Ch+var_44]
0x7A3D0D: xor     esi, esi
0x7A3D0F: fstp    [esp+6Ch+var_48]
0x7A3D13: call    sub_78FA80
0x7A3D18: test    eax, eax
0x7A3D1A: jbe     short loc_7A3D73
0x7A3D1C: cmp     edi, ebp
0x7A3D1E: jz      short loc_7A3D2D
0x7A3D20: mov     eax, [esp+6Ch+var_28]
0x7A3D24: sub     eax, edi
0x7A3D26: sar     eax, 2
0x7A3D29: cmp     esi, eax
0x7A3D2B: jb      short loc_7A3D36
0x7A3D2D: call    __invalid_parameter_noinfo
0x7A3D32: mov     edi, [esp+6Ch+var_2C]
0x7A3D36: mov     ecx, [edi+esi*4]
0x7A3D39: fld     dword ptr [ecx+28h]
0x7A3D3C: fstp    [esp+6Ch+var_50]
0x7A3D40: fld     [esp+6Ch+var_50]
0x7A3D44: fld     st
0x7A3D46: fadd    [esp+6Ch+var_44]
0x7A3D4A: fstp    [esp+6Ch+var_44]
0x7A3D4E: fld     [esp+6Ch+var_48]
0x7A3D52: fcomp   st(1)
0x7A3D54: fnstsw  ax
0x7A3D56: test    ah, 5
0x7A3D59: jp      short loc_7A3D61
0x7A3D5B: fstp    [esp+6Ch+var_48]
0x7A3D5F: jmp     short loc_7A3D63
0x7A3D61: fstp    st
0x7A3D63: lea     ecx, [esp+6Ch+var_30]
0x7A3D67: add     esi, 1
0x7A3D6A: call    sub_78FA80
0x7A3D6F: cmp     esi, eax
0x7A3D71: jb      short loc_7A3D1C
0x7A3D73: lea     ecx, [esp+6Ch+var_51]
0x7A3D77: call    sub_78EAF0
0x7A3D7C: fld     dword ptr [ebx+0ECh]
0x7A3D82: fld1
0x7A3D84: xor     esi, esi
0x7A3D86: fsubrp  st(1), st
0x7A3D88: xor     edi, edi
0x7A3D8A: mov     [esp+6Ch+var_1C], esi
0x7A3D8E: mov     [esp+6Ch+Src], ebp
0x7A3D92: mov     [esp+6Ch+var_14], edi
0x7A3D96: fstp    [esp+6Ch+var_40]
0x7A3D9A: mov     ecx, [esp+6Ch+var_28]
0x7A3D9E: mov     edx, [esp+6Ch+var_2C]
0x7A3DA2: mov     byte ptr [esp+6Ch+var_4], 2
0x7A3DA7: test    edx, edx
0x7A3DA9: jz      loc_7A3F56
0x7A3DAF: mov     eax, ecx
0x7A3DB1: sub     eax, edx
0x7A3DB3: sar     eax, 2
0x7A3DB6: cmp     ebp, eax
0x7A3DB8: jnb     loc_7A3F56
0x7A3DBE: mov     eax, [edx+ebp*4]
0x7A3DC1: fld     dword ptr [eax+28h]
0x7A3DC4: fstp    [esp+6Ch+var_50]
0x7A3DC8: fld     [esp+6Ch+var_50]
0x7A3DCC: fld     [esp+6Ch+var_40]
0x7A3DD0: fmul    [esp+6Ch+var_48]
0x7A3DD4: fcompp
0x7A3DD6: fnstsw  ax
0x7A3DD8: test    ah, 5
0x7A3DDB: jp      loc_7A3EC0
0x7A3DE1: test    edx, edx
0x7A3DE3: jz      short loc_7A3DEE
0x7A3DE5: sub     ecx, edx
0x7A3DE7: sar     ecx, 2
0x7A3DEA: cmp     ebp, ecx
0x7A3DEC: jb      short loc_7A3DFF
0x7A3DEE: call    __invalid_parameter_noinfo
0x7A3DF3: mov     edx, [esp+6Ch+var_2C]
0x7A3DF7: mov     edi, [esp+6Ch+var_14]
0x7A3DFB: mov     esi, [esp+6Ch+var_1C]
0x7A3DFF: test    esi, esi
0x7A3E01: mov     ecx, [esp+6Ch+Src]
0x7A3E05: lea     ebx, [edx+ebp*4]
0x7A3E08: jz      short loc_7A3E29
0x7A3E0A: mov     eax, ecx
0x7A3E0C: sub     eax, esi
0x7A3E0E: sub     edi, esi
0x7A3E10: sar     eax, 2
0x7A3E13: sar     edi, 2
0x7A3E16: cmp     eax, edi
0x7A3E18: jnb     short loc_7A3E29
0x7A3E1A: mov     edx, [ebx]
0x7A3E1C: mov     eax, ecx
0x7A3E1E: add     eax, 4
0x7A3E21: mov     [ecx], edx
0x7A3E23: mov     [esp+6Ch+Src], eax
0x7A3E27: jmp     short loc_7A3E49
0x7A3E29: cmp     esi, ecx
0x7A3E2B: mov     edi, ecx
0x7A3E2D: jbe     short loc_7A3E34
0x7A3E2F: call    __invalid_parameter_noinfo
0x7A3E34: push    ebx; int
0x7A3E35: push    edi; Src
0x7A3E36: lea     eax, [esp+74h+var_20]
0x7A3E3A: push    eax; int
0x7A3E3B: lea     eax, [esp+78h+var_38]
0x7A3E3F: push    eax; int
0x7A3E40: lea     ecx, [esp+7Ch+var_20]
0x7A3E44: call    sub_7A3620
0x7A3E49: mov     edx, [esp+6Ch+var_2C]
0x7A3E4D: mov     ecx, [esp+6Ch+var_28]
0x7A3E51: cmp     edx, ecx
0x7A3E53: mov     esi, edx
0x7A3E55: jbe     short loc_7A3E64
0x7A3E57: call    __invalid_parameter_noinfo
0x7A3E5C: mov     ecx, [esp+6Ch+var_28]
0x7A3E60: mov     edx, [esp+6Ch+var_2C]
0x7A3E64: lea     esi, [esi+ebp*4]
0x7A3E67: cmp     esi, ecx
0x7A3E69: ja      short loc_7A3E6F
0x7A3E6B: cmp     esi, edx
0x7A3E6D: jnb     short loc_7A3E7C
0x7A3E6F: call    __invalid_parameter_noinfo
0x7A3E74: mov     ecx, [esp+6Ch+var_28]
0x7A3E78: mov     edx, [esp+6Ch+var_2C]
0x7A3E7C: lea     edi, [esi+4]
0x7A3E7F: mov     eax, ecx
0x7A3E81: sub     eax, edi
0x7A3E83: sar     eax, 2
0x7A3E86: test    eax, eax
0x7A3E88: jle     short loc_7A3EA2
0x7A3E8A: add     eax, eax
0x7A3E8C: add     eax, eax
0x7A3E8E: push    eax; Src
0x7A3E8F: push    edi; Src
0x7A3E90: push    eax; DstSize
0x7A3E91: push    esi; Dst
0x7A3E92: call    _memmove_s
0x7A3E97: mov     ecx, [esp+7Ch+var_28]
0x7A3E9B: mov     edx, [esp+7Ch+var_2C]
0x7A3E9F: add     esp, 10h
0x7A3EA2: mov     ebx, [esp+6Ch+var_4C]
0x7A3EA6: mov     edi, [esp+6Ch+var_14]
0x7A3EAA: mov     esi, [esp+6Ch+var_1C]
0x7A3EAE: sub     ecx, 4
0x7A3EB1: sub     ebp, 1
0x7A3EB4: mov     [esp+6Ch+var_28], ecx
0x7A3EB8: add     ebp, 1
0x7A3EBB: jmp     loc_7A3DA7
0x7A3EC0: fld     dword ptr [ebx+0E8h]
0x7A3EC6: sub     esp, 8
0x7A3EC9: fstp    [esp+74h+var_70]; float
0x7A3ECD: lea     ecx, [esp+74h+var_51]
0x7A3ED1: fldz
0x7A3ED3: fstp    [esp+74h+var_74]; float
0x7A3ED6: call    sub_78EA00
0x7A3EDB: fstp    [esp+6Ch+var_3C]
0x7A3EDF: fld     [esp+6Ch+var_3C]
0x7A3EE3: fld     st
0x7A3EE5: fld1
0x7A3EE7: fsubrp  st(1), st
0x7A3EE9: fstp    [esp+6Ch+var_3C]
0x7A3EED: fld     [esp+6Ch+var_3C]
0x7A3EF1: fmul    [esp+6Ch+var_50]
0x7A3EF5: fld     [esp+6Ch+var_48]
0x7A3EF9: fmulp   st(2), st
0x7A3EFB: faddp   st(1), st
0x7A3EFD: fstp    [esp+6Ch+var_50]
0x7A3F01: fldz
0x7A3F03: fcom    [esp+6Ch+var_50]
0x7A3F07: fnstsw  ax
0x7A3F09: test    ah, 5
0x7A3F0C: jnp     short loc_7A3F14
0x7A3F0E: fstp    [esp+6Ch+var_50]
0x7A3F12: jmp     short loc_7A3F16
0x7A3F14: fstp    st
0x7A3F16: mov     ecx, [esp+6Ch+var_2C]
0x7A3F1A: test    ecx, ecx
0x7A3F1C: jz      short loc_7A3F2B
0x7A3F1E: mov     eax, [esp+6Ch+var_28]
0x7A3F22: sub     eax, ecx
0x7A3F24: sar     eax, 2
0x7A3F27: cmp     ebp, eax
0x7A3F29: jb      short loc_7A3F34
0x7A3F2B: call    __invalid_parameter_noinfo
0x7A3F30: mov     ecx, [esp+6Ch+var_2C]
0x7A3F34: mov     ecx, [ecx+ebp*4]
0x7A3F37: fld     [esp+6Ch+var_50]
0x7A3F3B: fstp    dword ptr [ecx+2Ch]
0x7A3F3E: mov     ecx, [esp+6Ch+var_28]
0x7A3F42: mov     edx, [esp+6Ch+var_2C]
0x7A3F46: mov     edi, [esp+6Ch+var_14]
0x7A3F4A: mov     esi, [esp+6Ch+var_1C]
0x7A3F4E: add     ebp, 1
0x7A3F51: jmp     loc_7A3DA7
0x7A3F56: lea     edx, [esp+6Ch+var_30]
0x7A3F5A: push    edx
0x7A3F5B: call    sub_791410
0x7A3F60: lea     eax, [esp+70h+var_20]
0x7A3F64: push    eax
0x7A3F65: call    sub_791410
0x7A3F6A: add     esp, 8
0x7A3F6D: lea     ecx, [esp+6Ch+var_20]
0x7A3F71: xor     esi, esi
0x7A3F73: call    sub_78FA80
0x7A3F78: test    eax, eax
0x7A3F7A: jbe     short loc_7A3FD7
0x7A3F7C: lea     ebx, [esp+6Ch+var_30]
0x7A3F80: mov     ecx, [esp+6Ch+var_1C]
0x7A3F84: test    ecx, ecx
0x7A3F86: jz      short loc_7A3F95
0x7A3F88: mov     eax, [esp+6Ch+Src]
0x7A3F8C: sub     eax, ecx
0x7A3F8E: sar     eax, 2
0x7A3F91: cmp     esi, eax
0x7A3F93: jb      short loc_7A3F9E
0x7A3F95: call    __invalid_parameter_noinfo
0x7A3F9A: mov     ecx, [esp+6Ch+var_1C]
0x7A3F9E: mov     eax, [esp+6Ch+var_2C]
0x7A3FA2: cmp     eax, [esp+6Ch+var_28]
0x7A3FA6: lea     edi, [ecx+esi*4]
0x7A3FA9: mov     ebp, eax
0x7A3FAB: jbe     short loc_7A3FB2
0x7A3FAD: call    __invalid_parameter_noinfo
0x7A3FB2: push    edi; int
0x7A3FB3: push    ebp; Src
0x7A3FB4: push    ebx; int
0x7A3FB5: lea     ecx, [esp+78h+var_38]
0x7A3FB9: push    ecx; int
0x7A3FBA: lea     ecx, [esp+7Ch+var_30]
0x7A3FBE: call    sub_7A3620
0x7A3FC3: lea     ecx, [esp+6Ch+var_20]
0x7A3FC7: add     esi, 1
0x7A3FCA: call    sub_78FA80
0x7A3FCF: cmp     esi, eax
0x7A3FD1: jb      short loc_7A3F80
0x7A3FD3: mov     ebx, [esp+6Ch+var_4C]
0x7A3FD7: mov     esi, [ebx+70h]
0x7A3FDA: xor     ebx, ebx
0x7A3FDC: test    esi, esi
0x7A3FDE: mov     [esp+6Ch+var_50], esi
0x7A3FE2: jbe     loc_7A4137
0x7A3FE8: jmp     short loc_7A3FF4
0x7A3FEA: align 10h
0x7A3FF0: mov     esi, [esp+6Ch+var_50]
0x7A3FF4: test    ebx, ebx
0x7A3FF6: mov     edi, [esp+6Ch+var_4C]
0x7A3FFA: jnz     short loc_7A4005
0x7A3FFC: mov     ecx, [edi+5Ch]
0x7A3FFF: push    ebx
0x7A4000: call    sub_794630
0x7A4005: cmp     esi, 2
0x7A4008: jge     short loc_7A400E
0x7A400A: fld1
0x7A400C: jmp     short loc_7A4051
0x7A400E: fld     dword ptr [edi+0E0h]
0x7A4014: mov     edx, ebx
0x7A4016: test    edx, edx
0x7A4018: fstp    [esp+6Ch+var_40]
0x7A401C: mov     [esp+6Ch+var_3C], edx
0x7A4020: fild    [esp+6Ch+var_3C]
0x7A4024: jge     short loc_7A402C
0x7A4026: fadd    dword ptr ds:0A2FC78h
0x7A402C: add     esi, 0FFFFFFFFh
0x7A402F: mov     [esp+6Ch+var_3C], esi
0x7A4033: fidiv   [esp+6Ch+var_3C]
0x7A4037: fstp    [esp+6Ch+var_3C]
0x7A403B: fld     dword ptr [edi+0DCh]
0x7A4041: fld     [esp+6Ch+var_40]
0x7A4045: fld     st
0x7A4047: fsubp   st(2), st
0x7A4049: fxch    st(1)
0x7A404B: fmul    [esp+6Ch+var_3C]
0x7A404F: faddp   st(1), st
0x7A4051: fstp    [esp+6Ch+var_48]
0x7A4055: lea     ecx, [esp+6Ch+var_30]
0x7A4059: fld     [esp+6Ch+var_48]
0x7A405D: xor     ebp, ebp
0x7A405F: fmul    [esp+6Ch+var_44]
0x7A4063: xor     esi, esi
0x7A4065: fstp    [esp+6Ch+var_3C]
0x7A4069: fldz
0x7A406B: fstp    [esp+6Ch+var_48]
0x7A406F: call    sub_78FA80
0x7A4074: test    eax, eax
0x7A4076: jbe     short loc_7A40D4
0x7A4078: mov     edi, [esp+6Ch+var_2C]
0x7A407C: fld     [esp+6Ch+var_48]
0x7A4080: fld     [esp+6Ch+var_3C]
0x7A4084: fcompp
0x7A4086: fnstsw  ax
0x7A4088: test    ah, 41h
0x7A408B: jnz     short loc_7A40D0
0x7A408D: test    edi, edi
0x7A408F: jz      short loc_7A409E
0x7A4091: mov     eax, [esp+6Ch+var_28]
0x7A4095: sub     eax, edi
0x7A4097: sar     eax, 2
0x7A409A: cmp     esi, eax
0x7A409C: jb      short loc_7A40A7
0x7A409E: call    __invalid_parameter_noinfo
0x7A40A3: mov     edi, [esp+6Ch+var_2C]
0x7A40A7: mov     eax, [edi+esi*4]
0x7A40AA: fld     dword ptr [eax+28h]
0x7A40AD: lea     ecx, [esp+6Ch+var_30]
0x7A40B1: fstp    [esp+6Ch+var_40]
0x7A40B5: add     ebp, 1
0x7A40B8: fld     [esp+6Ch+var_40]
0x7A40BC: add     esi, 1
0x7A40BF: fadd    [esp+6Ch+var_48]
0x7A40C3: fstp    [esp+6Ch+var_48]
0x7A40C7: call    sub_78FA80
0x7A40CC: cmp     esi, eax
0x7A40CE: jb      short loc_7A407C
0x7A40D0: mov     edi, [esp+6Ch+var_4C]
0x7A40D4: mov     ecx, [edi+5Ch]
0x7A40D7: push    ebx
0x7A40D8: call    sub_794A90
0x7A40DD: test    ebx, ebx
0x7A40DF: jnz     short loc_7A40F2
0x7A40E1: test    ebp, ebp
0x7A40E3: jnz     short loc_7A40F2
0x7A40E5: mov     ecx, [edi+5Ch]
0x7A40E8: push    ebp
0x7A40E9: push    ebp
0x7A40EA: push    ebp
0x7A40EB: call    sub_796100
0x7A40F0: jmp     short loc_7A412A
0x7A40F2: xor     esi, esi
0x7A40F4: test    ebp, ebp
0x7A40F6: jle     short loc_7A412A
0x7A40F8: mov     ecx, [esp+6Ch+var_2C]
0x7A40FC: test    ecx, ecx
0x7A40FE: jz      short loc_7A410D
0x7A4100: mov     eax, [esp+6Ch+var_28]
0x7A4104: sub     eax, ecx
0x7A4106: sar     eax, 2
0x7A4109: cmp     esi, eax
0x7A410B: jb      short loc_7A4116
0x7A410D: call    __invalid_parameter_noinfo
0x7A4112: mov     ecx, [esp+6Ch+var_2C]
0x7A4116: mov     edx, [edi+5Ch]
0x7A4119: mov     ecx, [ecx+esi*4]
0x7A411C: push    edx
0x7A411D: push    ebx
0x7A411E: call    sub_78F420
0x7A4123: add     esi, 1
0x7A4126: cmp     esi, ebp
0x7A4128: jl      short loc_7A40F8
0x7A412A: add     ebx, 1
0x7A412D: cmp     ebx, [esp+6Ch+var_50]
0x7A4131: jb      loc_7A3FF0
0x7A4137: mov     eax, [esp+6Ch+var_1C]
0x7A413B: xor     esi, esi
0x7A413D: cmp     eax, esi
0x7A413F: jz      short loc_7A414A
0x7A4141: push    eax
0x7A4142: call    FormHeapFree
0x7A4147: add     esp, 4
0x7A414A: lea     ecx, [esp+6Ch+var_51]; void *
0x7A414E: mov     [esp+6Ch+var_1C], esi
0x7A4152: mov     [esp+6Ch+Src], esi
0x7A4156: mov     [esp+6Ch+var_14], esi
0x7A415A: mov     byte ptr [esp+6Ch+var_4], 0
0x7A415F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7A4164: mov     eax, [esp+6Ch+var_2C]
0x7A4168: cmp     eax, esi
0x7A416A: jz      short loc_7A4175
0x7A416C: push    eax
0x7A416D: call    FormHeapFree
0x7A4172: add     esp, 4
0x7A4175: mov     ecx, [esp+6Ch+var_C]
0x7A4179: mov     large fs:0, ecx
0x7A4180: pop     ecx
0x7A4181: pop     edi
0x7A4182: pop     esi
0x7A4183: pop     ebp
0x7A4184: pop     ebx
0x7A4185: mov     esp, ebp
0x7A4187: pop     ebp
0x7A4188: retn
