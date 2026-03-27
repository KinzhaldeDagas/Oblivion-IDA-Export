0x8B3E60: push    ebp
0x8B3E61: mov     ebp, esp
0x8B3E63: and     esp, 0FFFFFFF0h
0x8B3E66: sub     esp, 74h
0x8B3E69: push    ebx
0x8B3E6A: push    esi
0x8B3E6B: mov     esi, [ebp+arg_0]
0x8B3E6E: mov     eax, [esi+4]
0x8B3E71: xorps   xmm0, xmm0
0x8B3E74: xor     ebx, ebx
0x8B3E76: test    eax, eax
0x8B3E78: push    edi
0x8B3E79: movaps  [esp+80h+var_40], xmm0
0x8B3E7E: movaps  [esp+80h+var_60], xmm0
0x8B3E83: mov     [esp+80h+var_6C], 0
0x8B3E8B: mov     [esp+80h+var_68], 0
0x8B3E93: jle     loc_8B3F15
0x8B3E99: mov     eax, [esi]
0x8B3E9B: xor     edi, edi
0x8B3E9D: lea     ecx, [ecx+0]
0x8B3EA0: lea     ecx, [edi+eax+10h]
0x8B3EA4: push    ecx
0x8B3EA5: lea     edx, [edi+eax+50h]
0x8B3EA9: push    edx
0x8B3EAA: lea     ecx, [esp+88h+var_50]
0x8B3EAE: call    sub_88FCC0
0x8B3EB3: fld     [esp+80h+var_6C]
0x8B3EB7: mov     eax, [esi]
0x8B3EB9: fadd    dword ptr [edi+eax+4]
0x8B3EBD: mov     ecx, [edi+eax+4]
0x8B3EC1: movaps  xmm1, [esp+80h+var_50]
0x8B3EC6: mov     [esp+80h+var_64], ecx
0x8B3ECA: movss   xmm0, [esp+80h+var_64]
0x8B3ED0: fstp    [esp+80h+var_6C]
0x8B3ED4: fld     [esp+80h+var_68]
0x8B3ED8: mov     ecx, [esi+4]
0x8B3EDB: fadd    dword ptr [edi+eax]
0x8B3EDE: movaps  xmm2, xmm0
0x8B3EE1: shufps  xmm2, xmm0, 0
0x8B3EE5: movaps  xmm0, [esp+80h+var_60]
0x8B3EEA: inc     ebx
0x8B3EEB: fstp    [esp+80h+var_68]
0x8B3EEF: mulps   xmm2, xmm1
0x8B3EF2: add     edi, 90h
0x8B3EF8: cmp     ebx, ecx
0x8B3EFA: addps   xmm0, xmm2
0x8B3EFD: movaps  [esp+80h+var_60], xmm0
0x8B3F02: jl      short loc_8B3EA0
0x8B3F04: fld     [esp+80h+var_6C]
0x8B3F08: fcomp   dword ptr ds:0A2FAA8h
0x8B3F0E: fnstsw  ax
0x8B3F10: test    ah, 41h
0x8B3F13: jp      short loc_8B3F21
0x8B3F15: mov     eax, 1
0x8B3F1A: pop     edi
0x8B3F1B: pop     esi
0x8B3F1C: pop     ebx
0x8B3F1D: mov     esp, ebp
0x8B3F1F: pop     ebp
0x8B3F20: retn
0x8B3F21: fld     dword ptr ds:0A2F948h
0x8B3F27: mov     ebx, [ebp+arg_4]
0x8B3F2A: fdiv    [esp+80h+var_6C]
0x8B3F2E: mov     eax, [esp+80h+var_68]
0x8B3F32: mov     edx, [esp+80h+var_6C]
0x8B3F36: mov     [ebx+4], edx
0x8B3F39: mov     [ebx], eax
0x8B3F3B: add     ebx, 20h ; ' '
0x8B3F3E: xor     edi, edi
0x8B3F40: mov     [esp+80h+var_68], edi
0x8B3F44: fstp    [esp+80h+var_64]
0x8B3F48: movss   xmm0, [esp+80h+var_64]
0x8B3F4E: movaps  xmm1, xmm0
0x8B3F51: shufps  xmm1, xmm0, 0
0x8B3F55: movaps  xmm0, xmm1
0x8B3F58: mulps   xmm0, [esp+80h+var_60]
0x8B3F5D: movaps  xmmword ptr [ebx-10h], xmm0
0x8B3F61: movaps  [esp+80h+var_60], xmm0
0x8B3F66: movaps  xmm0, [esp+80h+var_40]
0x8B3F6B: movaps  xmmword ptr [ebx], xmm0
0x8B3F6E: movaps  xmmword ptr [ebx+10h], xmm0
0x8B3F72: movaps  xmmword ptr [ebx+20h], xmm0
0x8B3F76: cmp     [esi+4], edi
0x8B3F79: jle     loc_8B4012
0x8B3F7F: nop
0x8B3F80: mov     ecx, [esi]
0x8B3F82: movaps  xmm0, xmmword ptr [edi+ecx+20h]
0x8B3F87: lea     eax, [edi+ecx]
0x8B3F8A: movaps  [esp+80h+var_30], xmm0
0x8B3F8F: movaps  xmm0, xmmword ptr [eax+30h]
0x8B3F93: movaps  [esp+80h+var_20], xmm0
0x8B3F98: movaps  xmm0, xmmword ptr [eax+40h]
0x8B3F9C: add     eax, 50h ; 'P'
0x8B3F9F: push    eax
0x8B3FA0: lea     ecx, [esp+84h+var_30]
0x8B3FA4: movaps  [esp+84h+var_10], xmm0
0x8B3FA9: call    sub_8D2C60
0x8B3FAE: mov     edx, [esi]
0x8B3FB0: lea     eax, [edi+edx]
0x8B3FB3: lea     ecx, [eax+10h]
0x8B3FB6: push    ecx
0x8B3FB7: add     eax, 50h ; 'P'
0x8B3FBA: push    eax
0x8B3FBB: lea     ecx, [esp+88h+var_50]
0x8B3FBF: call    sub_88FCC0
0x8B3FC4: movaps  xmm0, [esp+80h+var_50]
0x8B3FC9: mov     eax, [esi]
0x8B3FCB: subps   xmm0, [esp+80h+var_60]
0x8B3FD0: lea     edx, [esp+80h+var_30]
0x8B3FD4: movaps  [esp+80h+var_50], xmm0
0x8B3FD9: mov     ecx, [edi+eax+4]
0x8B3FDD: push    edx; int
0x8B3FDE: push    ecx; float
0x8B3FDF: lea     edx, [esp+88h+var_50]
0x8B3FE3: push    edx; int
0x8B3FE4: call    sub_8B3770
0x8B3FE9: add     esp, 0Ch
0x8B3FEC: lea     eax, [esp+80h+var_30]
0x8B3FF0: push    eax
0x8B3FF1: mov     ecx, ebx
0x8B3FF3: call    sub_8D29E0
0x8B3FF8: mov     eax, [esp+80h+var_68]
0x8B3FFC: mov     ecx, [esi+4]
0x8B3FFF: inc     eax
0x8B4000: add     edi, 90h
0x8B4006: cmp     eax, ecx
0x8B4008: mov     [esp+80h+var_68], eax
0x8B400C: jl      loc_8B3F80
0x8B4012: pop     edi
0x8B4013: pop     esi
0x8B4014: xor     eax, eax
0x8B4016: pop     ebx
0x8B4017: mov     esp, ebp
0x8B4019: pop     ebp
0x8B401A: retn
