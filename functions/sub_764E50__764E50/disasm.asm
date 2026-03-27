0x764E50: sub     esp, 40h
0x764E53: push    edi
0x764E54: mov     edi, ecx
0x764E56: cmp     byte ptr [edi+6F0h], 0
0x764E5D: jz      short loc_764E68
0x764E5F: xor     eax, eax
0x764E61: pop     edi
0x764E62: add     esp, 40h
0x764E65: retn    4
0x764E68: mov     ecx, [edi+880h]
0x764E6E: mov     eax, [ecx]
0x764E70: mov     edx, [eax+4Ch]
0x764E73: push    ebx
0x764E74: push    ebp
0x764E75: push    esi
0x764E76: xor     ebp, ebp
0x764E78: push    ebp
0x764E79: call    edx
0x764E7B: mov     ecx, [edi+880h]
0x764E81: mov     ebx, eax
0x764E83: mov     eax, [ecx]
0x764E85: mov     edx, [eax+50h]
0x764E88: push    ebp
0x764E89: mov     [esp+54h+var_3C], ebx
0x764E8D: call    edx
0x764E8F: mov     ecx, eax
0x764E91: mov     eax, [esp+50h+arg_0]
0x764E95: test    eax, eax
0x764E97: mov     [esp+50h+var_40], ecx
0x764E9B: jz      short loc_764EF8
0x764E9D: mov     esi, [eax]
0x764E9F: cmp     esi, ebx
0x764EA1: jnb     loc_764F7F
0x764EA7: mov     edx, [eax+8]
0x764EAA: cmp     edx, ecx
0x764EAC: jnb     loc_764F7F
0x764EB2: mov     ecx, [eax+4]
0x764EB5: sub     ecx, esi
0x764EB7: add     ecx, 1
0x764EBA: lea     ebp, [ecx+esi]
0x764EBD: cmp     ebp, ebx
0x764EBF: jbe     short loc_764EC5
0x764EC1: mov     ecx, ebx
0x764EC3: sub     ecx, esi
0x764EC5: mov     eax, [eax+0Ch]
0x764EC8: mov     ebx, [esp+50h+var_40]
0x764ECC: sub     eax, edx
0x764ECE: add     eax, 1
0x764ED1: lea     ebp, [eax+edx]
0x764ED4: cmp     ebp, ebx
0x764ED6: jbe     short loc_764EDC
0x764ED8: mov     eax, ebx
0x764EDA: sub     eax, edx
0x764EDC: mov     ebx, [esp+50h+var_3C]
0x764EE0: add     ecx, esi
0x764EE2: add     eax, edx
0x764EE4: mov     [esp+50h+var_30], esi
0x764EE8: mov     [esp+50h+var_28], ecx
0x764EEC: mov     [esp+50h+var_2C], edx
0x764EF0: mov     [esp+50h+var_24], eax
0x764EF4: lea     ebp, [esp+50h+var_30]
0x764EF8: mov     ecx, [edi+880h]
0x764EFE: mov     eax, [ecx]
0x764F00: mov     edx, [eax+80h]
0x764F06: push    0
0x764F08: call    edx
0x764F0A: push    eax
0x764F0B: push    offset unk_B42654
0x764F10: call    sub_497DD0
0x764F15: mov     esi, [eax+0Ch]
0x764F18: mov     eax, [esi]
0x764F1A: mov     edx, [eax+30h]
0x764F1D: add     esp, 8
0x764F20: lea     ecx, [esp+50h+var_20]
0x764F24: push    ecx
0x764F25: push    esi
0x764F26: mov     [esp+58h+var_3C], esi
0x764F2A: call    edx
0x764F2C: mov     eax, [esi]
0x764F2E: mov     edx, [eax+34h]
0x764F31: push    10h
0x764F33: push    ebp
0x764F34: lea     ecx, [esp+58h+var_38]
0x764F38: push    ecx
0x764F39: push    esi
0x764F3A: call    edx
0x764F3C: test    eax, eax
0x764F3E: jl      short loc_764F7F
0x764F40: push    70h ; 'p'; Size
0x764F42: call    FormHeapAlloc
0x764F47: mov     ebp, eax
0x764F49: add     esp, 4
0x764F4C: test    ebp, ebp
0x764F4E: jz      short loc_764F77
0x764F50: mov     ecx, [edi+880h]
0x764F56: mov     eax, [ecx]
0x764F58: mov     edx, [eax+5Ch]
0x764F5B: push    1
0x764F5D: push    1
0x764F5F: push    0
0x764F61: call    edx
0x764F63: push    eax
0x764F64: mov     eax, [esp+5Ch+var_40]
0x764F68: push    eax
0x764F69: push    ebx
0x764F6A: mov     ecx, ebp
0x764F6C: call    NiPixelData__NiPixelData
0x764F71: mov     ebx, eax
0x764F73: test    ebx, ebx
0x764F75: jnz     short loc_764F8B
0x764F77: mov     ecx, [esi]
0x764F79: mov     edx, [ecx+38h]
0x764F7C: push    esi
0x764F7D: call    edx
0x764F7F: pop     esi
0x764F80: pop     ebp
0x764F81: pop     ebx
0x764F82: xor     eax, eax
0x764F84: pop     edi
0x764F85: add     esp, 40h
0x764F88: retn    4
0x764F8B: mov     eax, [ebx+54h]
0x764F8E: mov     ecx, [ebx+5Ch]
0x764F91: mov     edi, [eax]
0x764F93: mov     esi, [ecx]
0x764F95: imul    edi, [ebx+64h]
0x764F99: mov     eax, [esp+50h+var_40]
0x764F9D: add     esi, [ebx+50h]
0x764FA0: test    eax, eax
0x764FA2: mov     ebp, [esp+50h+Src]
0x764FA6: jbe     short loc_764FC8
0x764FA8: mov     [esp+50h+arg_0], eax
0x764FAC: lea     esp, [esp+0]
0x764FB0: push    edi; Size
0x764FB1: push    ebp; Src
0x764FB2: push    esi; Dst
0x764FB3: call    _memcpy
0x764FB8: add     ebp, [esp+5Ch+var_38]
0x764FBC: add     esp, 0Ch
0x764FBF: add     esi, edi
0x764FC1: sub     [esp+50h+arg_0], 1
0x764FC6: jnz     short loc_764FB0
0x764FC8: mov     eax, [esp+50h+var_3C]
0x764FCC: mov     edx, [eax]
0x764FCE: push    eax
0x764FCF: mov     eax, [edx+38h]
0x764FD2: call    eax
0x764FD4: pop     esi
0x764FD5: pop     ebp
0x764FD6: mov     eax, ebx
0x764FD8: pop     ebx
0x764FD9: pop     edi
0x764FDA: add     esp, 40h
0x764FDD: retn    4
