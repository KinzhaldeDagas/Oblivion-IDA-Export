0x7C3C50: push    0FFFFFFFFh
0x7C3C52: push    offset SEH_7C3C50
0x7C3C57: mov     eax, large fs:0
0x7C3C5D: push    eax
0x7C3C5E: sub     esp, 638h
0x7C3C64: mov     eax, ds:0B30AACh
0x7C3C69: xor     eax, esp
0x7C3C6B: mov     [esp+644h+var_10], eax
0x7C3C72: push    ebx
0x7C3C73: push    ebp
0x7C3C74: push    esi
0x7C3C75: push    edi
0x7C3C76: mov     eax, ds:0B30AACh
0x7C3C7B: xor     eax, esp
0x7C3C7D: push    eax
0x7C3C7E: lea     eax, [esp+658h+var_C]
0x7C3C85: mov     large fs:0, eax
0x7C3C8B: mov     ebp, [esp+658h+arg_0]
0x7C3C92: xor     esi, esi
0x7C3C94: cmp     ds:0B42F48h, esi
0x7C3C9A: mov     [esp+658h+var_5D4], ebp
0x7C3CA1: jz      loc_7C3DB9
0x7C3CA7: mov     eax, [ebp+0]
0x7C3CAA: cmp     eax, esi
0x7C3CAC: mov     [esp+658h+var_5EC], esi
0x7C3CB0: jz      loc_7C3DB9
0x7C3CB6: mov     [esp+658h+var_630], esi
0x7C3CBA: lea     ecx, [esp+658h+var_630]
0x7C3CBE: push    ecx
0x7C3CBF: push    eax
0x7C3CC0: mov     ecx, offset off_B2CBD4
0x7C3CC5: mov     [esp+660h+var_4], esi
0x7C3CCC: call    sub_4A1AB0
0x7C3CD1: test    al, al
0x7C3CD3: jnz     loc_7C3DC0
0x7C3CD9: push    38h ; '8'; Size
0x7C3CDB: call    FormHeapAlloc
0x7C3CE0: add     esp, 4
0x7C3CE3: cmp     eax, esi
0x7C3CE5: jz      short loc_7C3CF0
0x7C3CE7: mov     ecx, eax
0x7C3CE9: call    sub_7C3590
0x7C3CEE: jmp     short loc_7C3CF2
0x7C3CF0: xor     eax, eax
0x7C3CF2: push    eax; a2
0x7C3CF3: lea     ecx, [esp+65Ch+var_630]; this
0x7C3CF7: call    NiSmartPointer_Set??
0x7C3CFC: mov     edi, [esp+658h+var_630]
0x7C3D00: lea     ebx, [edi+24h]
0x7C3D03: mov     byte ptr [edi+32h], 1
0x7C3D07: mov     esi, [ebx]
0x7C3D09: test    esi, esi
0x7C3D0B: jz      short loc_7C3D2F
0x7C3D0D: lea     edx, [esi+8]
0x7C3D10: push    edx; lpAddend
0x7C3D11: call    dword ptr ds:0A2807Ch
0x7C3D17: test    eax, eax
0x7C3D19: jnz     short loc_7C3D29
0x7C3D1B: test    esi, esi
0x7C3D1D: jz      short loc_7C3D29
0x7C3D1F: mov     eax, [esi]
0x7C3D21: mov     edx, [eax]
0x7C3D23: push    1
0x7C3D25: mov     ecx, esi
0x7C3D27: call    edx
0x7C3D29: mov     dword ptr [ebx], 0
0x7C3D2F: push    ecx
0x7C3D30: mov     eax, esp
0x7C3D32: mov     [eax], edi
0x7C3D34: lea     eax, [edi+4]
0x7C3D37: mov     [esp+65Ch+var_604], esp
0x7C3D3B: push    eax; lpAddend
0x7C3D3C: call    dword ptr ds:0A28078h
0x7C3D42: mov     ecx, [ebp+0]
0x7C3D45: push    ecx
0x7C3D46: mov     ecx, offset off_B2CBD4
0x7C3D4B: call    sub_7C2FF0
0x7C3D50: cmp     byte ptr ds:0B2CBC0h, 0
0x7C3D57: jz      short loc_7C3DC4
0x7C3D59: push    4B8h; Size
0x7C3D5E: call    FormHeapAlloc
0x7C3D63: add     esp, 4
0x7C3D66: mov     [esp+658h+var_604], eax
0x7C3D6A: test    eax, eax
0x7C3D6C: mov     byte ptr [esp+658h+var_4], 1
0x7C3D74: jz      short loc_7C3D83
0x7C3D76: mov     edx, [ebp+0]
0x7C3D79: push    edx
0x7C3D7A: mov     ecx, eax
0x7C3D7C: call    sub_7C2AF0
0x7C3D81: jmp     short loc_7C3D85
0x7C3D83: xor     eax, eax
0x7C3D85: push    eax
0x7C3D86: mov     ecx, ebx
0x7C3D88: mov     byte ptr [esp+65Ch+var_4], 0
0x7C3D90: call    sub_4BCB70
0x7C3D95: mov     ecx, ds:0B33A10h
0x7C3D9B: mov     ebx, [ebx]
0x7C3D9D: mov     eax, [ecx]
0x7C3D9F: mov     edx, [eax+3Ch]
0x7C3DA2: push    ebx
0x7C3DA3: call    edx
0x7C3DA5: lea     ecx, [esp+658h+var_630]; this
0x7C3DA9: mov     [esp+658h+var_4], 0FFFFFFFFh
0x7C3DB4: call    sub_7016A0
0x7C3DB9: xor     eax, eax
0x7C3DBB: jmp     loc_7C4ABF
0x7C3DC0: mov     edi, [esp+658h+var_630]
0x7C3DC4: cmp     byte ptr [edi+32h], 0
0x7C3DC8: jz      loc_7C4A96
0x7C3DCE: mov     [esp+658h+var_608], 0
0x7C3DD6: cmp     byte ptr ds:0B2CBC0h, 0
0x7C3DDD: mov     edi, [esp+658h+var_630]
0x7C3DE1: mov     byte ptr [esp+658h+var_4], 2
0x7C3DE9: jz      short loc_7C3E5C
0x7C3DEB: cmp     dword ptr [edi+24h], 0
0x7C3DEF: lea     esi, [edi+24h]
0x7C3DF2: jnz     short loc_7C3E5C
0x7C3DF4: push    4B8h; Size
0x7C3DF9: call    FormHeapAlloc
0x7C3DFE: add     esp, 4
0x7C3E01: mov     [esp+658h+var_604], eax
0x7C3E05: test    eax, eax
0x7C3E07: mov     byte ptr [esp+658h+var_4], 3
0x7C3E0F: jz      short loc_7C3E24
0x7C3E11: mov     ecx, [esp+658h+var_5D4]
0x7C3E18: mov     edx, [ecx]
0x7C3E1A: push    edx
0x7C3E1B: mov     ecx, eax
0x7C3E1D: call    sub_7C2AF0
0x7C3E22: jmp     short loc_7C3E26
0x7C3E24: xor     eax, eax
0x7C3E26: push    eax
0x7C3E27: mov     ecx, esi
0x7C3E29: mov     byte ptr [esp+65Ch+var_4], 2
0x7C3E31: call    sub_4BCB70
0x7C3E36: mov     ecx, ds:0B33A10h
0x7C3E3C: mov     esi, [esi]
0x7C3E3E: mov     eax, [ecx]
0x7C3E40: mov     edx, [eax+3Ch]
0x7C3E43: push    esi
0x7C3E44: call    edx
0x7C3E46: lea     ecx, [esp+658h+var_608]; this
0x7C3E4A: mov     byte ptr [esp+658h+var_4], 0
0x7C3E52: call    sub_7016A0
0x7C3E57: jmp     loc_7C3DA5
0x7C3E5C: mov     eax, [edi+24h]
0x7C3E5F: test    eax, eax
0x7C3E61: lea     esi, [edi+24h]
0x7C3E64: jz      short loc_7C3EA6
0x7C3E66: cmp     dword ptr [eax+0Ch], 4
0x7C3E6A: jl      short loc_7C3E46
0x7C3E6C: mov     ecx, eax
0x7C3E6E: lea     eax, [esp+658h+var_640]
0x7C3E72: push    eax
0x7C3E73: call    sub_7C2BF0
0x7C3E78: push    eax
0x7C3E79: lea     ecx, [esp+65Ch+var_608]
0x7C3E7D: mov     byte ptr [esp+65Ch+var_4], 4
0x7C3E85: call    sub_55E2A0
0x7C3E8A: lea     ecx, [esp+658h+var_640]; this
0x7C3E8E: mov     byte ptr [esp+658h+var_4], 2
0x7C3E96: call    sub_7016A0
0x7C3E9B: push    0
0x7C3E9D: mov     ecx, esi
0x7C3E9F: call    sub_4BCB70
0x7C3EA4: jmp     short loc_7C3F1E
0x7C3EA6: mov     edx, [esp+658h+var_5D4]
0x7C3EAD: mov     eax, [edx]
0x7C3EAF: lea     ecx, [esp+658h+var_114]
0x7C3EB6: push    ecx; int
0x7C3EB7: mov     ecx, ds:0B33A1Ch
0x7C3EBD: push    eax; Str1
0x7C3EBE: call    sub_434710
0x7C3EC3: lea     ecx, [esp+658h+var_5A4]
0x7C3ECA: call    sub_4363C0
0x7C3ECF: push    0; int
0x7C3ED1: lea     ecx, [esp+65Ch+var_114]
0x7C3ED8: push    ecx; Src
0x7C3ED9: lea     ecx, [esp+660h+var_5A4]
0x7C3EE0: mov     byte ptr [esp+660h+var_4], 5
0x7C3EE8: call    sub_6F9980
0x7C3EED: cmp     [esp+658h+var_394], 0
0x7C3EF5: jz      short loc_7C3F0A
0x7C3EF7: mov     edx, [esp+658h+var_39C]
0x7C3EFE: mov     eax, [edx]
0x7C3F00: push    eax; a2
0x7C3F01: lea     ecx, [esp+65Ch+var_608]; this
0x7C3F05: call    NiSmartPointer_Set??
0x7C3F0A: lea     ecx, [esp+658h+var_5A4]; this
0x7C3F11: mov     byte ptr [esp+658h+var_4], 2
0x7C3F19: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x7C3F1E: mov     eax, [esp+658h+var_608]
0x7C3F22: test    eax, eax
0x7C3F24: jz      loc_7C3E46
0x7C3F2A: push    eax
0x7C3F2B: push    offset dword_B3FA80
0x7C3F30: mov     byte ptr [edi+32h], 0
0x7C3F34: call    NiRTTI_Cast
0x7C3F39: mov     edx, [eax]
0x7C3F3B: mov     ecx, eax
0x7C3F3D: mov     eax, [edx+8]
0x7C3F40: add     esp, 8
0x7C3F43: call    eax
0x7C3F45: mov     ebx, [esp+658h+var_5EC]
0x7C3F49: mov     edi, eax
0x7C3F4B: mov     [esp+658h+var_604], edi
0x7C3F4F: nop
0x7C3F50: test    edi, edi
0x7C3F52: jz      short loc_7C3F95
0x7C3F54: movzx   eax, word ptr [edi+0B6h]
0x7C3F5B: xor     esi, esi
0x7C3F5D: test    eax, eax
0x7C3F5F: jbe     short loc_7C3F91
0x7C3F61: cmp     eax, esi
0x7C3F63: jbe     short loc_7C3F83
0x7C3F65: mov     ecx, [edi+0B0h]
0x7C3F6B: mov     ecx, [ecx+esi*4]
0x7C3F6E: test    ecx, ecx
0x7C3F70: jz      short loc_7C3F83
0x7C3F72: mov     edx, [ecx]
0x7C3F74: mov     eax, [edx+0Ch]
0x7C3F77: call    eax
0x7C3F79: mov     ebx, eax
0x7C3F7B: test    ebx, ebx
0x7C3F7D: mov     [esp+658h+var_5EC], ebx
0x7C3F81: jnz     short loc_7C3F95
0x7C3F83: movzx   eax, word ptr [edi+0B6h]
0x7C3F8A: add     esi, 1
0x7C3F8D: cmp     eax, esi
0x7C3F8F: ja      short loc_7C3F65
0x7C3F91: test    ebx, ebx
0x7C3F93: jz      short loc_7C3F50
0x7C3F95: push    ebx
0x7C3F96: push    offset dword_B3FD04
0x7C3F9B: call    NiRTTI_Cast
0x7C3FA0: mov     ebx, [ebx+0B4h]
0x7C3FA6: mov     edx, [ebx+1Ch]
0x7C3FA9: xor     ecx, ecx
0x7C3FAB: add     esp, 8
0x7C3FAE: cmp     dword ptr ds:0B42F48h, 2
0x7C3FB5: setl    cl
0x7C3FB8: sub     ecx, 1
0x7C3FBB: and     ecx, 94h
0x7C3FC1: add     ecx, 50h ; 'P'
0x7C3FC4: test    eax, eax
0x7C3FC6: movzx   eax, word ptr [ebx+8]
0x7C3FCA: mov     [esp+658h+var_60C], eax
0x7C3FCE: movzx   esi, ax
0x7C3FD1: mov     [esp+658h+var_620], ecx
0x7C3FD5: mov     eax, 0FFFFh
0x7C3FDA: jnz     loc_7C4384
0x7C3FE0: mov     [esp+658h+var_5DC], edx
0x7C3FE4: mov     edx, [ebx+48h]
0x7C3FE7: mov     [esp+658h+Src], edx
0x7C3FEB: cdq
0x7C3FEC: idiv    esi
0x7C3FEE: mov     edi, [ebx+44h]
0x7C3FF1: mov     [esp+658h+var_639], 0
0x7C3FF6: mov     [esp+658h+var_5B8], esi
0x7C3FFD: cmp     cx, ax
0x7C4000: jb      short loc_7C4009
0x7C4002: movzx   ecx, ax
0x7C4005: mov     [esp+658h+var_620], ecx
0x7C4009: movzx   edi, di
0x7C400C: mov     eax, 0FFFFh
0x7C4011: cdq
0x7C4012: idiv    edi
0x7C4014: mov     [esp+658h+var_62C], edi
0x7C4018: cmp     cx, ax
0x7C401B: jb      short loc_7C4024
0x7C401D: movzx   ecx, ax
0x7C4020: mov     [esp+658h+var_620], ecx
0x7C4024: movzx   edi, cx
0x7C4027: mov     ebp, edi
0x7C4029: imul    ebp, esi
0x7C402C: xor     ecx, ecx
0x7C402E: mov     eax, ebp
0x7C4030: mov     edx, 0Ch
0x7C4035: mul     edx
0x7C4037: seto    cl
0x7C403A: neg     ecx
0x7C403C: or      ecx, eax
0x7C403E: push    ecx; Size
0x7C403F: call    FormHeapAlloc
0x7C4044: mov     [esp+65Ch+var_640], eax
0x7C4048: xor     ecx, ecx
0x7C404A: mov     eax, ebp
0x7C404C: mov     edx, 0Ch
0x7C4051: mul     edx
0x7C4053: seto    cl
0x7C4056: neg     ecx
0x7C4058: or      ecx, eax
0x7C405A: push    ecx; Size
0x7C405B: call    FormHeapAlloc
0x7C4060: mov     [esp+660h+Dst], eax
0x7C4064: xor     ecx, ecx
0x7C4066: mov     eax, ebp
0x7C4068: mov     edx, 10h
0x7C406D: mul     edx
0x7C406F: seto    cl
0x7C4072: neg     ecx
0x7C4074: or      ecx, eax
0x7C4076: push    ecx; Size
0x7C4077: call    FormHeapAlloc
0x7C407C: add     esp, 0Ch
0x7C407F: mov     [esp+658h+var_644], eax
0x7C4083: test    eax, eax
0x7C4085: mov     byte ptr [esp+658h+var_4], 6
0x7C408D: jz      short loc_7C40A7
0x7C408F: push    offset sub_47EA50
0x7C4094: push    ebp
0x7C4095: push    10h
0x7C4097: push    eax
0x7C4098: call    sub_401080
0x7C409D: mov     ecx, [esp+658h+var_644]
0x7C40A1: mov     [esp+658h+var_644], ecx
0x7C40A5: jmp     short loc_7C40AF
0x7C40A7: mov     [esp+658h+var_644], 0
0x7C40AF: xor     ecx, ecx
0x7C40B1: mov     eax, ebp
0x7C40B3: mov     edx, 8
0x7C40B8: mul     edx
0x7C40BA: seto    cl
0x7C40BD: mov     byte ptr [esp+658h+var_4], 2
0x7C40C5: neg     ecx
0x7C40C7: or      ecx, eax
0x7C40C9: push    ecx; Size
0x7C40CA: call    FormHeapAlloc
0x7C40CF: mov     [esp+65Ch+var_600], eax
0x7C40D3: xor     ecx, ecx
0x7C40D5: mov     eax, ebp
0x7C40D7: mov     edx, 4
0x7C40DC: mul     edx
0x7C40DE: seto    cl
0x7C40E1: neg     ecx
0x7C40E3: or      ecx, eax
0x7C40E5: push    ecx; Size
0x7C40E6: call    FormHeapAlloc
0x7C40EB: mov     [esp+660h+var_5E8], eax
0x7C40EF: mov     eax, edi
0x7C40F1: imul    eax, [esp+660h+var_62C]
0x7C40F6: xor     ecx, ecx
0x7C40F8: mov     edx, 2
0x7C40FD: mul     edx
0x7C40FF: seto    cl
0x7C4102: neg     ecx
0x7C4104: or      ecx, eax
0x7C4106: push    ecx; Size
0x7C4107: call    FormHeapAlloc
0x7C410C: mov     ecx, [ebx+24h]
0x7C410F: mov     edx, [ebx+28h]
0x7C4112: xor     ebp, ebp
0x7C4114: mov     [esp+664h+var_5F4], eax
0x7C4118: mov     eax, [ebx+20h]
0x7C411B: add     esp, 0Ch
0x7C411E: cmp     edi, ebp
0x7C4120: mov     [esp+658h+var_5CC], ebp
0x7C4127: mov     [esp+658h+var_5BC], eax
0x7C412E: mov     [esp+658h+var_5F0], ecx
0x7C4132: mov     [esp+658h+var_5E4], edx
0x7C4136: mov     [esp+658h+var_618], ebp
0x7C413A: jle     loc_7C4313
0x7C4140: mov     edi, [esp+658h+var_600]
0x7C4144: lea     edx, [esi+esi*2]
0x7C4147: add     edx, edx
0x7C4149: xor     ecx, ecx
0x7C414B: add     edx, edx
0x7C414D: mov     eax, esi
0x7C414F: shl     eax, 4
0x7C4152: mov     [esp+658h+Size], eax
0x7C4156: mov     eax, [esp+658h+Dst]
0x7C415A: mov     [esp+658h+var_638], eax
0x7C415E: mov     eax, [esp+658h+var_644]
0x7C4162: mov     [esp+658h+var_610], edi
0x7C4166: mov     edi, [esp+658h+var_5E8]
0x7C416A: mov     [esp+658h+var_5C4], ecx
0x7C4171: mov     [esp+658h+var_5FC], edx
0x7C4175: mov     [esp+658h+var_5F8], eax
0x7C4179: mov     [esp+658h+var_614], edi
0x7C417D: test    esi, esi
0x7C417F: jle     loc_7C429E
0x7C4185: mov     ebx, [esp+658h+var_640]
0x7C4189: fild    [esp+658h+var_618]
0x7C418D: sub     ebx, [esp+658h+Dst]
0x7C4191: mov     ecx, [esp+658h+var_5E4]
0x7C4195: mov     edx, [esp+658h+var_614]
0x7C4199: fstp    [esp+658h+var_5D8]
0x7C41A0: mov     ebp, [esp+658h+var_5B8]
0x7C41A7: fld     [esp+658h+var_5D8]
0x7C41AE: mov     esi, [esp+658h+var_5F0]
0x7C41B2: mov     edi, [esp+658h+var_610]
0x7C41B6: mov     [esp+658h+var_5E0], ebx
0x7C41BA: mov     ebx, [esp+658h+var_5DC]
0x7C41BE: mov     [esp+658h+var_5D0], ecx
0x7C41C5: mov     ecx, [esp+658h+var_5BC]
0x7C41CC: mov     [esp+658h+var_5C8], edx
0x7C41D3: sub     ebx, ecx
0x7C41D5: mov     edx, eax
0x7C41D7: mov     eax, [esp+658h+var_638]
0x7C41DB: mov     [esp+658h+var_628], ebx
0x7C41DF: mov     [esp+658h+var_5C0], ebp
0x7C41E6: jmp     short loc_7C41EC
0x7C41E8: mov     ebx, [esp+658h+var_628]
0x7C41EC: mov     ebx, [ebx+ecx]
0x7C41EF: mov     ebp, [esp+658h+var_5E0]
0x7C41F3: mov     [ebp+eax+0], ebx
0x7C41F7: mov     ebx, [esp+658h+var_628]
0x7C41FB: mov     ebx, [ebx+ecx+4]
0x7C41FF: mov     [ebp+eax+4], ebx
0x7C4203: mov     ebx, [esp+658h+var_628]
0x7C4207: mov     ebx, [ebx+ecx+8]
0x7C420B: mov     [ebp+eax+8], ebx
0x7C420F: mov     ebx, [ecx]
0x7C4211: add     ebp, eax
0x7C4213: mov     [eax], ebx
0x7C4215: mov     ebx, [ecx+4]
0x7C4218: mov     [eax+4], ebx
0x7C421B: mov     ebx, [ecx+8]
0x7C421E: mov     [eax+8], ebx
0x7C4221: mov     ebx, [esi]
0x7C4223: mov     [edx], ebx
0x7C4225: mov     ebx, [esi+4]
0x7C4228: mov     [edx+4], ebx
0x7C422B: mov     ebx, [esi+8]
0x7C422E: mov     [edx+8], ebx
0x7C4231: mov     ebx, [esi+0Ch]
0x7C4234: mov     [edx+0Ch], ebx
0x7C4237: mov     ebx, [esp+658h+var_5D0]
0x7C423E: mov     ebp, [ebx]
0x7C4240: mov     [edi], ebp
0x7C4242: mov     ebp, [ebx+4]
0x7C4245: mov     [edi+4], ebp
0x7C4248: mov     ebp, [esp+658h+var_5C8]
0x7C424F: fst     dword ptr [ebp+0]
0x7C4252: add     ebp, 4
0x7C4255: add     ebx, 8
0x7C4258: add     eax, 0Ch
0x7C425B: add     ecx, 0Ch
0x7C425E: add     edx, 10h
0x7C4261: add     esi, 10h
0x7C4264: add     edi, 8
0x7C4267: sub     [esp+658h+var_5C0], 1
0x7C426F: mov     [esp+658h+var_5C8], ebp
0x7C4276: mov     [esp+658h+var_5D0], ebx
0x7C427D: jnz     loc_7C41E8
0x7C4283: mov     ebp, [esp+658h+var_5CC]
0x7C428A: fstp    st
0x7C428C: mov     esi, [esp+658h+var_5B8]
0x7C4293: mov     edx, [esp+658h+var_5FC]
0x7C4297: mov     ecx, [esp+658h+var_5C4]
0x7C429E: xor     eax, eax
0x7C42A0: cmp     [esp+658h+var_62C], eax
0x7C42A4: jle     short loc_7C42CC
0x7C42A6: mov     edi, [esp+658h+var_5F4]
0x7C42AA: mov     ebx, [esp+658h+Src]
0x7C42AE: mov     bx, [ebx+eax*2]
0x7C42B2: add     bx, cx
0x7C42B5: mov     [edi+ebp*2], bx
0x7C42B9: add     eax, 1
0x7C42BC: add     ebp, 1
0x7C42BF: cmp     eax, [esp+658h+var_62C]
0x7C42C3: jl      short loc_7C42AA
0x7C42C5: mov     [esp+658h+var_5CC], ebp
0x7C42CC: mov     ebx, [esp+658h+var_618]
0x7C42D0: movzx   edi, word ptr [esp+658h+var_620]
0x7C42D5: add     [esp+658h+var_638], edx
0x7C42D9: lea     eax, ds:0[esi*4]
0x7C42E0: add     [esp+658h+var_614], eax
0x7C42E4: lea     eax, ds:0[esi*8]
0x7C42EB: add     [esp+658h+var_610], eax
0x7C42EF: mov     eax, [esp+658h+var_5F8]
0x7C42F3: add     eax, [esp+658h+Size]
0x7C42F7: add     ebx, 1
0x7C42FA: add     ecx, esi
0x7C42FC: cmp     ebx, edi
0x7C42FE: mov     [esp+658h+var_618], ebx
0x7C4302: mov     [esp+658h+var_5C4], ecx
0x7C4309: mov     [esp+658h+var_5F8], eax
0x7C430D: jl      loc_7C417D
0x7C4313: mov     eax, 55555556h
0x7C4318: imul    [esp+658h+var_62C]
0x7C431C: mov     ebp, edx
0x7C431E: shr     ebp, 1Fh
0x7C4321: add     ebp, edx
0x7C4323: movzx   eax, bp
0x7C4326: push    5Ch ; '\'; Size
0x7C4328: mov     [esp+65Ch+var_638], eax
0x7C432C: call    FormHeapAlloc
0x7C4331: add     esp, 4
0x7C4334: mov     [esp+658h+Src], eax
0x7C4338: test    eax, eax
0x7C433A: mov     byte ptr [esp+658h+var_4], 7
0x7C4342: jz      loc_7C474A
0x7C4348: mov     ebx, [esp+658h+var_620]
0x7C434C: mov     ecx, [esp+658h+var_5F4]
0x7C4350: imul    ebp, ebx
0x7C4353: mov     edx, ebx
0x7C4355: imul    edx, [esp+658h+var_60C]
0x7C435A: push    0
0x7C435C: push    edx
0x7C435D: push    ecx
0x7C435E: mov     ecx, [esp+664h+var_600]
0x7C4362: push    ebp
0x7C4363: push    0
0x7C4365: push    1
0x7C4367: push    ecx
0x7C4368: mov     ecx, [esp+674h+var_644]
0x7C436C: push    ecx
0x7C436D: mov     ecx, [esp+678h+Dst]
0x7C4371: push    ecx
0x7C4372: mov     ecx, [esp+67Ch+var_640]
0x7C4376: push    ecx
0x7C4377: push    edx
0x7C4378: mov     ecx, eax
0x7C437A: call    sub_72AB00
0x7C437F: jmp     loc_7C474C
0x7C4384: mov     [esp+658h+Src], edx
0x7C4388: mov     edx, [ebx+4Ch]
0x7C438B: mov     [esp+658h+var_600], edx
0x7C438F: cdq
0x7C4390: idiv    esi
0x7C4392: mov     edi, [ebx+48h]
0x7C4395: mov     [esp+658h+var_639], 1
0x7C439A: mov     [esp+658h+var_628], edi
0x7C439E: cmp     cx, ax
0x7C43A1: jb      short loc_7C43AA
0x7C43A3: movzx   ecx, ax
0x7C43A6: mov     [esp+658h+var_620], ecx
0x7C43AA: movzx   eax, word ptr [edi]
0x7C43AD: mov     edi, eax
0x7C43AF: and     edi, 80000001h
0x7C43B5: jns     short loc_7C43BC
0x7C43B7: dec     edi
0x7C43B8: or      edi, 0FFFFFFFEh
0x7C43BB: inc     edi
0x7C43BC: neg     edi
0x7C43BE: sbb     edi, edi
0x7C43C0: neg     edi
0x7C43C2: add     edi, 2
0x7C43C5: add     edi, eax
0x7C43C7: mov     eax, 0FFFFh
0x7C43CC: cdq
0x7C43CD: idiv    edi
0x7C43CF: cmp     cx, ax
0x7C43D2: jb      short loc_7C43DB
0x7C43D4: movzx   eax, ax
0x7C43D7: mov     [esp+658h+var_620], eax
0x7C43DB: movzx   edi, word ptr [esp+658h+var_620]
0x7C43E0: mov     ebp, edi
0x7C43E2: imul    ebp, esi
0x7C43E5: xor     ecx, ecx
0x7C43E7: mov     eax, ebp
0x7C43E9: mov     edx, 0Ch
0x7C43EE: mul     edx
0x7C43F0: seto    cl
0x7C43F3: neg     ecx
0x7C43F5: or      ecx, eax
0x7C43F7: push    ecx; Size
0x7C43F8: call    FormHeapAlloc
0x7C43FD: mov     [esp+65Ch+var_5F8], eax
0x7C4401: xor     ecx, ecx
0x7C4403: mov     eax, ebp
0x7C4405: mov     edx, 0Ch
0x7C440A: mul     edx
0x7C440C: seto    cl
0x7C440F: neg     ecx
0x7C4411: or      ecx, eax
0x7C4413: push    ecx; Size
0x7C4414: call    FormHeapAlloc
0x7C4419: mov     [esp+660h+var_5F4], eax
0x7C441D: xor     ecx, ecx
0x7C441F: mov     eax, ebp
0x7C4421: mov     edx, 10h
0x7C4426: mul     edx
0x7C4428: seto    cl
0x7C442B: neg     ecx
0x7C442D: or      ecx, eax
0x7C442F: push    ecx; Size
0x7C4430: call    FormHeapAlloc
0x7C4435: add     esp, 0Ch
0x7C4438: mov     [esp+658h+var_640], eax
0x7C443C: test    eax, eax
0x7C443E: mov     byte ptr [esp+658h+var_4], 8
0x7C4446: jz      short loc_7C4460
0x7C4448: push    offset sub_47EA50
0x7C444D: push    ebp
0x7C444E: push    10h
0x7C4450: push    eax
0x7C4451: call    sub_401080
0x7C4456: mov     ecx, [esp+658h+var_640]
0x7C445A: mov     [esp+658h+var_618], ecx
0x7C445E: jmp     short loc_7C4468
0x7C4460: mov     [esp+658h+var_618], 0
0x7C4468: xor     ecx, ecx
0x7C446A: mov     eax, ebp
0x7C446C: mov     edx, 8
0x7C4471: mul     edx
0x7C4473: seto    cl
0x7C4476: mov     byte ptr [esp+658h+var_4], 2
0x7C447E: neg     ecx
0x7C4480: or      ecx, eax
0x7C4482: push    ecx; Size
0x7C4483: call    FormHeapAlloc
0x7C4488: mov     [esp+65Ch+var_640], eax
0x7C448C: xor     ecx, ecx
0x7C448E: mov     eax, ebp
0x7C4490: mov     edx, 4
0x7C4495: mul     edx
0x7C4497: seto    cl
0x7C449A: neg     ecx
0x7C449C: or      ecx, eax
0x7C449E: push    ecx; Size
0x7C449F: call    FormHeapAlloc
0x7C44A4: mov     [esp+660h+var_5E8], eax
0x7C44A8: mov     eax, [esp+660h+var_628]
0x7C44AC: movzx   eax, word ptr [eax]
0x7C44AF: movzx   ecx, ax
0x7C44B2: mov     edx, ecx
0x7C44B4: and     edx, 80000001h
0x7C44BA: jns     short loc_7C44C1
0x7C44BC: dec     edx
0x7C44BD: or      edx, 0FFFFFFFEh
0x7C44C0: inc     edx
0x7C44C1: neg     edx
0x7C44C3: sbb     edx, edx
0x7C44C5: neg     edx
0x7C44C7: add     edx, 2
0x7C44CA: add     dx, ax
0x7C44CD: movzx   edx, dx
0x7C44D0: movzx   edx, dx
0x7C44D3: lea     eax, [edi-1]
0x7C44D6: imul    eax, edx
0x7C44D9: add     eax, ecx
0x7C44DB: xor     ecx, ecx
0x7C44DD: mov     edx, 2
0x7C44E2: mul     edx
0x7C44E4: seto    cl
0x7C44E7: neg     ecx
0x7C44E9: or      ecx, eax
0x7C44EB: push    ecx; Size
0x7C44EC: call    FormHeapAlloc
0x7C44F1: mov     ecx, [ebx+24h]
0x7C44F4: mov     edx, [ebx+28h]
0x7C44F7: xor     ebp, ebp
0x7C44F9: mov     [esp+664h+var_614], eax
0x7C44FD: mov     eax, [ebx+20h]
0x7C4500: add     esp, 0Ch
0x7C4503: cmp     edi, ebp
0x7C4505: mov     [esp+658h+var_5E0], eax
0x7C4509: mov     [esp+658h+var_5D8], ecx
0x7C4510: mov     [esp+658h+var_5DC], edx
0x7C4514: mov     [esp+658h+var_62C], ebp
0x7C4518: jle     loc_7C46B0
0x7C451E: mov     ecx, [esp+658h+var_640]
0x7C4522: mov     edx, [esp+658h+var_618]
0x7C4526: mov     eax, esi
0x7C4528: shl     eax, 4
0x7C452B: mov     [esp+658h+Size], eax
0x7C452F: mov     eax, [esp+658h+var_5E8]
0x7C4533: lea     ebx, [esi+esi*2]
0x7C4536: add     ebx, ebx
0x7C4538: mov     [esp+658h+var_610], eax
0x7C453C: mov     eax, [esp+658h+var_5F8]
0x7C4540: mov     [esp+658h+var_638], ecx
0x7C4544: mov     ecx, [esp+658h+var_5F4]
0x7C4548: add     edi, 0FFFFFFFFh
0x7C454B: add     ebx, ebx
0x7C454D: sub     eax, ecx
0x7C454F: mov     [esp+658h+var_5E4], edi
0x7C4553: mov     [esp+658h+var_644], edx
0x7C4557: mov     [esp+658h+Dst], ecx
0x7C455B: mov     [esp+658h+var_5FC], eax
0x7C455F: nop
0x7C4560: mov     eax, [esp+658h+Src]
0x7C4564: mov     ecx, [esp+658h+var_5FC]
0x7C4568: mov     edi, [esp+658h+Dst]
0x7C456C: push    ebx; Size
0x7C456D: push    eax; Src
0x7C456E: add     ecx, edi
0x7C4570: push    ecx; Dst
0x7C4571: call    _memcpy
0x7C4576: mov     edx, [esp+664h+var_5E0]
0x7C457D: push    ebx; Size
0x7C457E: push    edx; Src
0x7C457F: push    edi; Dst
0x7C4580: call    _memcpy
0x7C4585: mov     eax, [esp+670h+Size]
0x7C4589: mov     ecx, [esp+670h+var_5D8]
0x7C4590: mov     edx, [esp+670h+var_644]
0x7C4594: push    eax; Size
0x7C4595: push    ecx; Src
0x7C4596: push    edx; Dst
0x7C4597: call    _memcpy
0x7C459C: mov     ecx, [esp+67Ch+var_638]
0x7C45A0: lea     eax, ds:0[esi*8]
0x7C45A7: push    eax; Size
0x7C45A8: mov     eax, [esp+680h+var_5DC]
0x7C45AF: push    eax; Src
0x7C45B0: push    ecx; Dst
0x7C45B1: call    _memcpy
0x7C45B6: add     esp, 30h
0x7C45B9: test    esi, esi
0x7C45BB: jle     short loc_7C45D1
0x7C45BD: fild    [esp+658h+var_62C]
0x7C45C1: mov     edi, [esp+658h+var_610]
0x7C45C5: mov     ecx, esi
0x7C45C7: fstp    [esp+658h+var_5F0]
0x7C45CB: mov     eax, [esp+658h+var_5F0]
0x7C45CF: rep stosd
0x7C45D1: mov     edx, [esp+658h+var_628]
0x7C45D5: mov     ecx, [esp+658h+var_614]
0x7C45D9: xor     eax, eax
0x7C45DB: cmp     [edx], ax
0x7C45DE: jbe     short loc_7C4609
0x7C45E0: mov     edx, [esp+658h+var_62C]
0x7C45E4: imul    edx, [esp+658h+var_60C]
0x7C45E9: mov     edi, [esp+658h+var_600]
0x7C45ED: mov     di, [edi+eax*2]
0x7C45F1: add     di, dx
0x7C45F4: mov     [ecx+ebp*2], di
0x7C45F8: mov     edi, [esp+658h+var_628]
0x7C45FC: movzx   edi, word ptr [edi]
0x7C45FF: add     eax, 1
0x7C4602: add     ebp, 1
0x7C4605: cmp     eax, edi
0x7C4607: jl      short loc_7C45E9
0x7C4609: mov     eax, [esp+658h+var_62C]
0x7C460D: cmp     eax, [esp+658h+var_5E4]
0x7C4611: jge     short loc_7C4676
0x7C4613: mov     edx, [esp+658h+var_628]
0x7C4617: movzx   edi, word ptr [edx]
0x7C461A: mov     edx, [esp+658h+var_600]
0x7C461E: movzx   eax, ax
0x7C4621: mov     [esp+658h+var_5F0], eax
0x7C4625: imul    eax, [esp+658h+var_60C]
0x7C462A: add     ax, [edx+edi*2-2]
0x7C462F: add     ebp, 1
0x7C4632: mov     [ecx+ebp*2-2], ax
0x7C4637: mov     eax, [esp+658h+var_5F0]
0x7C463B: mov     di, [edx]
0x7C463E: add     eax, 1
0x7C4641: imul    eax, [esp+658h+var_60C]
0x7C4646: add     di, ax
0x7C4649: mov     [ecx+ebp*2], di
0x7C464D: mov     edi, [esp+658h+var_628]
0x7C4651: movzx   edi, word ptr [edi]
0x7C4654: add     ebp, 1
0x7C4657: and     edi, 80000001h
0x7C465D: jns     short loc_7C4664
0x7C465F: dec     edi
0x7C4660: or      edi, 0FFFFFFFEh
0x7C4663: inc     edi
0x7C4664: cmp     edi, 1
0x7C4667: jnz     short loc_7C4676
0x7C4669: mov     dx, [edx]
0x7C466C: add     dx, ax
0x7C466F: mov     [ecx+ebp*2], dx
0x7C4673: add     ebp, 1
0x7C4676: mov     ecx, [esp+658h+Size]
0x7C467A: add     [esp+658h+var_644], ecx
0x7C467E: mov     eax, [esp+658h+var_62C]
0x7C4682: movzx   edi, word ptr [esp+658h+var_620]
0x7C4687: add     [esp+658h+Dst], ebx
0x7C468B: lea     ecx, ds:0[esi*8]
0x7C4692: add     [esp+658h+var_638], ecx
0x7C4696: add     eax, 1
0x7C4699: lea     ecx, ds:0[esi*4]
0x7C46A0: add     [esp+658h+var_610], ecx
0x7C46A4: cmp     eax, edi
0x7C46A6: mov     [esp+658h+var_62C], eax
0x7C46AA: jl      loc_7C4560
0x7C46B0: push    2; Size
0x7C46B2: call    FormHeapAlloc
0x7C46B7: mov     edx, [esp+65Ch+var_628]
0x7C46BB: mov     ebx, eax
0x7C46BD: mov     [ebx], bp
0x7C46C0: movzx   eax, word ptr [edx]
0x7C46C3: mov     ecx, eax
0x7C46C5: add     esp, 4
0x7C46C8: and     ecx, 80000001h
0x7C46CE: jns     short loc_7C46D5
0x7C46D0: dec     ecx
0x7C46D1: or      ecx, 0FFFFFFFEh
0x7C46D4: inc     ecx
0x7C46D5: cmp     ecx, 1
0x7C46D8: jnz     short loc_7C46E6
0x7C46DA: add     eax, 3
0x7C46DD: movzx   edx, ax
0x7C46E0: mov     [esp+658h+var_638], edx
0x7C46E4: jmp     short loc_7C46F0
0x7C46E6: add     eax, 2
0x7C46E9: movzx   eax, ax
0x7C46EC: mov     [esp+658h+var_638], eax
0x7C46F0: push    54h ; 'T'; Size
0x7C46F2: call    FormHeapAlloc
0x7C46F7: add     esp, 4
0x7C46FA: mov     [esp+658h+Src], eax
0x7C46FE: test    eax, eax
0x7C4700: mov     byte ptr [esp+658h+var_4], 9
0x7C4708: jz      short loc_7C474A
0x7C470A: mov     edx, [esp+658h+var_620]
0x7C470E: imul    edx, [esp+658h+var_60C]
0x7C4713: mov     ecx, [esp+658h+var_614]
0x7C4717: push    0
0x7C4719: push    edx
0x7C471A: push    ecx
0x7C471B: mov     ecx, [esp+664h+var_640]
0x7C471F: push    ebx
0x7C4720: push    1
0x7C4722: add     ebp, 0FFFFFFFEh
0x7C4725: push    ebp
0x7C4726: push    0
0x7C4728: push    1
0x7C472A: push    ecx
0x7C472B: mov     ecx, [esp+67Ch+var_618]
0x7C472F: push    ecx
0x7C4730: mov     ecx, [esp+680h+var_5F4]
0x7C4737: push    ecx
0x7C4738: mov     ecx, [esp+684h+var_5F8]
0x7C473F: push    ecx
0x7C4740: push    edx
0x7C4741: mov     ecx, eax
0x7C4743: call    sub_73B430
0x7C4748: jmp     short loc_7C474C
0x7C474A: xor     eax, eax
0x7C474C: mov     [esp+658h+Size], eax
0x7C4750: mov     [esp+658h+var_644], 0
0x7C4758: mov     ecx, [esp+658h+var_5EC]
0x7C475C: push    6
0x7C475E: mov     byte ptr [esp+65Ch+var_4], 0Ah
0x7C4766: call    NiNode_GetNiPropertyByID
0x7C476B: test    eax, eax
0x7C476D: jz      short loc_7C478D
0x7C476F: mov     edx, [eax+20h]
0x7C4772: mov     eax, [edx]
0x7C4774: test    eax, eax
0x7C4776: jz      short loc_7C478D
0x7C4778: mov     eax, [eax+8]
0x7C477B: test    eax, eax
0x7C477D: jz      short loc_7C478D
0x7C477F: mov     [esp+658h+var_644], eax
0x7C4783: add     eax, 4
0x7C4786: push    eax; lpAddend
0x7C4787: call    dword ptr ds:0A28078h
0x7C478D: mov     ecx, [esp+658h+var_5EC]
0x7C4791: push    0
0x7C4793: call    NiNode_GetNiPropertyByID
0x7C4798: xor     ebx, ebx
0x7C479A: test    eax, eax
0x7C479C: mov     [esp+658h+var_640], eax
0x7C47A0: jz      short loc_7C47A8
0x7C47A2: movzx   ebx, byte ptr [eax+1Ah]
0x7C47A6: jmp     short loc_7C47EE
0x7C47A8: push    1Ch; Size
0x7C47AA: call    FormHeapAlloc
0x7C47AF: mov     ebp, eax
0x7C47B1: add     esp, 4
0x7C47B4: mov     [esp+658h+Src], ebp
0x7C47B8: test    ebp, ebp
0x7C47BA: mov     byte ptr [esp+658h+var_4], 0Bh
0x7C47C2: jz      short loc_7C47DE
0x7C47C4: mov     ecx, ebp; this
0x7C47C6: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7C47CB: mov     dword ptr [ebp+0], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7C47D2: mov     word ptr [ebp+18h], 0ECh ; 'ì'
0x7C47D8: mov     byte ptr [ebp+1Ah], 0
0x7C47DC: jmp     short loc_7C47E0
0x7C47DE: xor     ebp, ebp
0x7C47E0: mov     byte ptr [esp+658h+var_4], 0Ah
0x7C47E8: mov     eax, ebp
0x7C47EA: mov     [esp+658h+var_640], ebp
0x7C47EE: mov     cx, [eax+18h]
0x7C47F2: and     cx, 0F3FFh
0x7C47F7: or      cx, 1201h
0x7C47FC: push    1Ch; Size
0x7C47FE: mov     [eax+1Ah], bl
0x7C4801: mov     [eax+18h], cx
0x7C4805: call    FormHeapAlloc
0x7C480A: mov     ebp, eax
0x7C480C: add     esp, 4
0x7C480F: mov     [esp+658h+Src], ebp
0x7C4813: test    ebp, ebp
0x7C4815: mov     byte ptr [esp+658h+var_4], 0Ch
0x7C481D: jz      short loc_7C483D
0x7C481F: mov     ecx, ebp; this
0x7C4821: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7C4826: mov     dword ptr [ebp+0], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7C482D: mov     word ptr [ebp+18h], 0ECh ; 'ì'
0x7C4833: mov     byte ptr [ebp+1Ah], 0
0x7C4837: mov     [esp+658h+Dst], ebp
0x7C483B: jmp     short loc_7C4845
0x7C483D: mov     [esp+658h+Dst], 0
0x7C4845: mov     eax, [esp+658h+Dst]
0x7C4849: mov     dx, [eax+18h]
0x7C484D: mov     [eax+1Ah], bl
0x7C4850: mov     ebx, [esp+658h+var_5EC]
0x7C4854: and     dx, 0F3FEh
0x7C4859: or      dx, 1200h
0x7C485E: push    5
0x7C4860: mov     ecx, ebx
0x7C4862: mov     byte ptr [esp+65Ch+var_4], 0Ah
0x7C486A: mov     [eax+18h], dx
0x7C486E: call    NiNode_GetNiPropertyByID
0x7C4873: mov     ebp, [esp+658h+var_630]
0x7C4877: mov     [esp+658h+Src], eax
0x7C487B: mov     eax, [ebx+0B4h]
0x7C4881: mov     ecx, [eax+0Ch]
0x7C4884: mov     edx, [eax+10h]
0x7C4887: mov     [esp+658h+var_5B4], ecx
0x7C488E: mov     ecx, [eax+14h]
0x7C4891: mov     [esp+658h+var_5B0], edx
0x7C4898: mov     edx, [eax+18h]
0x7C489B: mov     al, [esp+658h+var_639]
0x7C489F: mov     [ebp+30h], al
0x7C48A2: mov     ebx, [ebp+8]
0x7C48A5: cmp     ebx, [esp+658h+Size]
0x7C48A9: mov     [esp+658h+var_5AC], ecx
0x7C48B0: mov     [esp+658h+var_5A8], edx
0x7C48B7: jz      short loc_7C48F0
0x7C48B9: test    ebx, ebx
0x7C48BB: jz      short loc_7C48D9
0x7C48BD: lea     ecx, [ebx+4]
0x7C48C0: push    ecx; lpAddend
0x7C48C1: call    dword ptr ds:0A2807Ch
0x7C48C7: test    eax, eax
0x7C48C9: jnz     short loc_7C48D9
0x7C48CB: test    ebx, ebx
0x7C48CD: jz      short loc_7C48D9
0x7C48CF: mov     edx, [ebx]
0x7C48D1: mov     eax, [edx]
0x7C48D3: push    1
0x7C48D5: mov     ecx, ebx
0x7C48D7: call    eax
0x7C48D9: mov     eax, [esp+658h+Size]
0x7C48DD: test    eax, eax
0x7C48DF: mov     [ebp+8], eax
0x7C48E2: jz      short loc_7C48F0
0x7C48E4: mov     ecx, eax
0x7C48E6: add     ecx, 4
0x7C48E9: push    ecx; lpAddend
0x7C48EA: call    dword ptr ds:0A28078h
0x7C48F0: mov     edx, [esp+658h+var_5E8]
0x7C48F4: mov     ebx, [esp+658h+var_644]
0x7C48F8: mov     [ebp+0Ch], edx
0x7C48FB: mov     [ebp+10h], esi
0x7C48FE: mov     esi, [ebp+14h]
0x7C4901: cmp     esi, ebx
0x7C4903: jz      short loc_7C4936
0x7C4905: test    esi, esi
0x7C4907: jz      short loc_7C4925
0x7C4909: lea     eax, [esi+4]
0x7C490C: push    eax; lpAddend
0x7C490D: call    dword ptr ds:0A2807Ch
0x7C4913: test    eax, eax
0x7C4915: jnz     short loc_7C4925
0x7C4917: test    esi, esi
0x7C4919: jz      short loc_7C4925
0x7C491B: mov     edx, [esi]
0x7C491D: mov     eax, [edx]
0x7C491F: push    1
0x7C4921: mov     ecx, esi
0x7C4923: call    eax
0x7C4925: test    ebx, ebx
0x7C4927: mov     [ebp+14h], ebx
0x7C492A: jz      short loc_7C4936
0x7C492C: add     ebx, 4
0x7C492F: push    ebx; lpAddend
0x7C4930: call    dword ptr ds:0A28078h
0x7C4936: mov     esi, [ebp+1Ch]
0x7C4939: mov     ebx, [esp+658h+Dst]
0x7C493D: cmp     esi, ebx
0x7C493F: jz      short loc_7C496E
0x7C4941: test    esi, esi
0x7C4943: jz      short loc_7C4961
0x7C4945: lea     ecx, [esi+4]
0x7C4948: push    ecx; lpAddend
0x7C4949: call    dword ptr ds:0A2807Ch
0x7C494F: test    eax, eax
0x7C4951: jnz     short loc_7C4961
0x7C4953: test    esi, esi
0x7C4955: jz      short loc_7C4961
0x7C4957: mov     edx, [esi]
0x7C4959: mov     eax, [edx]
0x7C495B: push    1
0x7C495D: mov     ecx, esi
0x7C495F: call    eax
0x7C4961: mov     [ebp+1Ch], ebx
0x7C4964: add     ebx, 4
0x7C4967: push    ebx; lpAddend
0x7C4968: call    dword ptr ds:0A28078h
0x7C496E: mov     esi, [ebp+18h]
0x7C4971: mov     ebx, [esp+658h+var_640]
0x7C4975: cmp     esi, ebx
0x7C4977: jz      short loc_7C49A6
0x7C4979: test    esi, esi
0x7C497B: jz      short loc_7C4999
0x7C497D: lea     ecx, [esi+4]
0x7C4980: push    ecx; lpAddend
0x7C4981: call    dword ptr ds:0A2807Ch
0x7C4987: test    eax, eax
0x7C4989: jnz     short loc_7C4999
0x7C498B: test    esi, esi
0x7C498D: jz      short loc_7C4999
0x7C498F: mov     edx, [esi]
0x7C4991: mov     eax, [edx]
0x7C4993: push    1
0x7C4995: mov     ecx, esi
0x7C4997: call    eax
0x7C4999: mov     [ebp+18h], ebx
0x7C499C: add     ebx, 4
0x7C499F: push    ebx; lpAddend
0x7C49A0: call    dword ptr ds:0A28078h
0x7C49A6: mov     esi, [ebp+20h]
0x7C49A9: mov     ebx, [esp+658h+Src]
0x7C49AD: cmp     esi, ebx
0x7C49AF: jz      short loc_7C49E2
0x7C49B1: test    esi, esi
0x7C49B3: jz      short loc_7C49D1
0x7C49B5: lea     ecx, [esi+4]
0x7C49B8: push    ecx; lpAddend
0x7C49B9: call    dword ptr ds:0A2807Ch
0x7C49BF: test    eax, eax
0x7C49C1: jnz     short loc_7C49D1
0x7C49C3: test    esi, esi
0x7C49C5: jz      short loc_7C49D1
0x7C49C7: mov     edx, [esi]
0x7C49C9: mov     eax, [edx]
0x7C49CB: push    1
0x7C49CD: mov     ecx, esi
0x7C49CF: call    eax
0x7C49D1: test    ebx, ebx
0x7C49D3: mov     [ebp+20h], ebx
0x7C49D6: jz      short loc_7C49E2
0x7C49D8: add     ebx, 4
0x7C49DB: push    ebx; lpAddend
0x7C49DC: call    dword ptr ds:0A28078h
0x7C49E2: fld     [esp+658h+var_5A8]
0x7C49E9: mov     cx, word ptr [esp+658h+var_638]
0x7C49EE: mov     esi, [esp+658h+var_604]
0x7C49F2: fstp    dword ptr [ebp+28h]
0x7C49F5: test    esi, esi
0x7C49F7: mov     [ebp+2Ch], edi
0x7C49FA: mov     [ebp+34h], cx
0x7C49FE: mov     byte ptr [ebp+31h], 0
0x7C4A02: jz      short loc_7C4A31
0x7C4A04: mov     edx, [esi]
0x7C4A06: mov     eax, [edx+4]
0x7C4A09: mov     ecx, esi
0x7C4A0B: call    eax
0x7C4A0D: test    eax, eax
0x7C4A0F: jz      short loc_7C4A23
0x7C4A11: cmp     eax, offset dword_B3FD4C
0x7C4A16: jz      loc_7C4AE7
0x7C4A1C: mov     eax, [eax+4]
0x7C4A1F: test    eax, eax
0x7C4A21: jnz     short loc_7C4A11
0x7C4A23: xor     al, al
0x7C4A25: neg     al
0x7C4A27: sbb     eax, eax
0x7C4A29: and     eax, esi
0x7C4A2B: jz      short loc_7C4A31
0x7C4A2D: mov     byte ptr [ebp+31h], 1
0x7C4A31: mov     ecx, [esp+658h+var_5D4]
0x7C4A38: mov     eax, [ecx]
0x7C4A3A: mov     ecx, ds:0B33A1Ch
0x7C4A40: push    1
0x7C4A42: push    1
0x7C4A44: push    eax
0x7C4A45: call    QueuedModelLoader_RemoveModel
0x7C4A4A: mov     esi, [esp+658h+var_644]
0x7C4A4E: test    esi, esi
0x7C4A50: mov     byte ptr [esp+658h+var_4], 2
0x7C4A58: jz      short loc_7C4A72
0x7C4A5A: lea     edx, [esi+4]
0x7C4A5D: push    edx; lpAddend
0x7C4A5E: call    dword ptr ds:0A2807Ch
0x7C4A64: test    eax, eax
0x7C4A66: jnz     short loc_7C4A72
0x7C4A68: mov     eax, [esi]
0x7C4A6A: mov     edx, [eax]
0x7C4A6C: push    1
0x7C4A6E: mov     ecx, esi
0x7C4A70: call    edx
0x7C4A72: mov     esi, [esp+658h+var_608]
0x7C4A76: lea     eax, [esi+4]
0x7C4A79: push    eax; lpAddend
0x7C4A7A: mov     byte ptr [esp+65Ch+var_4], 0
0x7C4A82: call    dword ptr ds:0A2807Ch
0x7C4A88: test    eax, eax
0x7C4A8A: jnz     short loc_7C4A96
0x7C4A8C: mov     edx, [esi]
0x7C4A8E: mov     eax, [edx]
0x7C4A90: push    1
0x7C4A92: mov     ecx, esi
0x7C4A94: call    eax
0x7C4A96: mov     esi, [esp+658h+var_630]
0x7C4A9A: lea     ecx, [esi+4]
0x7C4A9D: push    ecx; lpAddend
0x7C4A9E: mov     [esp+65Ch+var_4], 0FFFFFFFFh
0x7C4AA9: call    dword ptr ds:0A2807Ch
0x7C4AAF: test    eax, eax
0x7C4AB1: jnz     short loc_7C4ABD
0x7C4AB3: mov     edx, [esi]
0x7C4AB5: mov     eax, [edx]
0x7C4AB7: push    1
0x7C4AB9: mov     ecx, esi
0x7C4ABB: call    eax
0x7C4ABD: mov     eax, esi
0x7C4ABF: mov     ecx, [esp+658h+var_C]
0x7C4AC6: mov     large fs:0, ecx
0x7C4ACD: pop     ecx
0x7C4ACE: pop     edi
0x7C4ACF: pop     esi
0x7C4AD0: pop     ebp
0x7C4AD1: pop     ebx
0x7C4AD2: mov     ecx, [esp+644h+var_10]
0x7C4AD9: xor     ecx, esp
0x7C4ADB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7C4AE0: add     esp, 644h
0x7C4AE6: retn
0x7C4AE7: mov     al, 1
0x7C4AE9: jmp     loc_7C4A25
