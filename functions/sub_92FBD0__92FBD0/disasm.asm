0x92FBD0: push    ebp
0x92FBD1: mov     ebp, esp
0x92FBD3: and     esp, 0FFFFFFF0h
0x92FBD6: sub     esp, 84h
0x92FBDC: push    ebx
0x92FBDD: push    esi
0x92FBDE: mov     esi, [ebp+arg_0]
0x92FBE1: mov     ecx, [esi+4]
0x92FBE4: xor     edx, edx
0x92FBE6: xor     eax, eax
0x92FBE8: cmp     ecx, edx
0x92FBEA: push    edi
0x92FBEB: jle     short loc_92FC01
0x92FBED: xor     ecx, ecx
0x92FBEF: nop
0x92FBF0: mov     edi, [esi]
0x92FBF2: mov     [ecx+edi+0Ch], edx
0x92FBF6: mov     edi, [esi+4]
0x92FBF9: inc     eax
0x92FBFA: add     ecx, 10h
0x92FBFD: cmp     eax, edi
0x92FBFF: jl      short loc_92FBF0
0x92FC01: mov     eax, [esi+4]
0x92FC04: cmp     eax, edx
0x92FC06: jle     loc_93002F
0x92FC0C: xor     ebx, ebx
0x92FC0E: mov     edx, 1
0x92FC13: mov     [esp+90h+var_64], ebx
0x92FC17: mov     [esp+90h+var_68], edx
0x92FC1B: jmp     short loc_92FC20
0x92FC1D: align 10h
0x92FC20: cmp     edx, eax
0x92FC22: mov     [esp+90h+var_70], edx
0x92FC26: jge     loc_930015
0x92FC2C: lea     ecx, [ebx+10h]
0x92FC2F: mov     [esp+90h+var_78], ecx
0x92FC33: lea     ecx, [edx+1]
0x92FC36: mov     [esp+90h+var_6C], ecx
0x92FC3A: lea     ebx, [ebx+0]
0x92FC40: cmp     ecx, eax
0x92FC42: mov     [esp+90h+var_74], ecx
0x92FC46: jge     loc_92FFF1
0x92FC4C: mov     edi, [esp+90h+var_78]
0x92FC50: add     edi, 10h
0x92FC53: mov     eax, [esi]
0x92FC55: mov     ecx, [eax+ebx+0Ch]
0x92FC59: cmp     ecx, 3F800000h
0x92FC5F: lea     esi, [eax+ebx+0Ch]
0x92FC63: jz      loc_92FFCD
0x92FC69: mov     edx, [esp+90h+var_78]
0x92FC6D: mov     ecx, [edx+eax+0Ch]
0x92FC71: cmp     ecx, 3F800000h
0x92FC77: lea     edx, [edx+eax+0Ch]
0x92FC7B: jz      loc_92FFCD
0x92FC81: cmp     dword ptr [edi+eax+0Ch], 3F800000h
0x92FC89: lea     ecx, [edi+eax+0Ch]
0x92FC8D: jz      loc_92FFCD
0x92FC93: mov     ebx, [esp+90h+var_78]
0x92FC97: movaps  xmm0, xmmword ptr [ebx+eax]
0x92FC9B: mov     ebx, [esp+90h+var_64]
0x92FC9F: movaps  xmm2, xmmword ptr [eax+ebx]
0x92FCA3: movaps  [esp+90h+var_30], xmm0
0x92FCA8: movaps  xmm1, xmm2
0x92FCAB: subps   xmm1, xmm0
0x92FCAE: movaps  xmm0, xmm1
0x92FCB1: mulps   xmm0, xmm1
0x92FCB4: movaps  xmm3, xmm0
0x92FCB7: shufps  xmm3, xmm0, 55h ; 'U'
0x92FCBB: addss   xmm3, xmm0
0x92FCBF: movaps  xmm4, xmm0
0x92FCC2: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x92FCC6: movaps  xmm0, xmm4
0x92FCC9: addss   xmm0, xmm3
0x92FCCD: movaps  [esp+90h+var_40], xmm0
0x92FCD2: rsqrtss xmm3, xmm0
0x92FCD6: movss   dword ptr [esp+90h+var_40], xmm3
0x92FCDC: movaps  xmm5, [esp+90h+var_40]
0x92FCE1: mulss   xmm0, xmm5
0x92FCE5: mulss   xmm0, xmm5
0x92FCE9: mov     [esp+90h+var_60], 40400000h
0x92FCF1: movss   xmm3, [esp+90h+var_60]
0x92FCF7: mov     [esp+90h+var_5C], 3F000000h
0x92FCFF: movss   xmm4, [esp+90h+var_5C]
0x92FD05: movaps  xmm6, xmm3
0x92FD08: subss   xmm6, xmm0
0x92FD0C: movaps  xmm0, xmm4
0x92FD0F: mulss   xmm0, xmm5
0x92FD13: mulss   xmm0, xmm6
0x92FD17: movaps  xmm5, xmm0
0x92FD1A: shufps  xmm5, xmm0, 0
0x92FD1E: movaps  xmm0, xmm5
0x92FD21: movaps  xmm5, xmmword ptr [edi+eax]
0x92FD25: mulps   xmm0, xmm1
0x92FD28: subps   xmm2, xmm5
0x92FD2B: subps   xmm5, [esp+90h+var_30]
0x92FD30: movaps  xmm1, xmm0
0x92FD33: xorps   xmm1, xmmword ptr ds:0A965C0h
0x92FD3A: movaps  [esp+90h+var_10], xmm1
0x92FD42: movaps  xmm1, xmm2
0x92FD45: mulps   xmm1, xmm2
0x92FD48: movaps  xmm6, xmm1
0x92FD4B: shufps  xmm6, xmm1, 55h ; 'U'
0x92FD4F: addss   xmm6, xmm1
0x92FD53: movaps  xmm7, xmm1
0x92FD56: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x92FD5A: movaps  xmm1, xmm7
0x92FD5D: addss   xmm1, xmm6
0x92FD61: movaps  [esp+90h+var_40], xmm1
0x92FD66: rsqrtss xmm6, xmm1
0x92FD6A: movss   dword ptr [esp+90h+var_40], xmm6
0x92FD70: movaps  xmm6, [esp+90h+var_40]
0x92FD75: mulss   xmm1, xmm6
0x92FD79: mulss   xmm1, xmm6
0x92FD7D: movaps  xmm7, xmm3
0x92FD80: subss   xmm7, xmm1
0x92FD84: movaps  xmm1, xmm4
0x92FD87: mulss   xmm1, xmm6
0x92FD8B: mulss   xmm1, xmm7
0x92FD8F: movaps  xmm6, xmm1
0x92FD92: shufps  xmm6, xmm1, 0
0x92FD96: movaps  xmm1, xmm6
0x92FD99: mulps   xmm1, xmm2
0x92FD9C: movaps  xmm2, xmm1
0x92FD9F: xorps   xmm2, xmmword ptr ds:0A965C0h
0x92FDA6: movaps  [esp+90h+var_20], xmm2
0x92FDAB: movaps  xmm2, xmm5
0x92FDAE: mulps   xmm2, xmm5
0x92FDB1: movaps  xmm6, xmm2
0x92FDB4: shufps  xmm6, xmm2, 55h ; 'U'
0x92FDB8: addss   xmm6, xmm2
0x92FDBC: movaps  xmm7, xmm2
0x92FDBF: shufps  xmm7, xmm2, 0AAh ; 'ª'
0x92FDC3: movaps  xmm2, xmm7
0x92FDC6: addss   xmm2, xmm6
0x92FDCA: movaps  [esp+90h+var_40], xmm2
0x92FDCF: rsqrtss xmm6, xmm2
0x92FDD3: movss   dword ptr [esp+90h+var_40], xmm6
0x92FDD9: movaps  xmm6, [esp+90h+var_40]
0x92FDDE: mulss   xmm2, xmm6
0x92FDE2: mulss   xmm2, xmm6
0x92FDE6: subss   xmm3, xmm2
0x92FDEA: mulss   xmm4, xmm6
0x92FDEE: mulss   xmm4, xmm3
0x92FDF2: movaps  xmm2, xmm4
0x92FDF5: shufps  xmm2, xmm4, 0
0x92FDF9: movaps  xmm3, xmm2
0x92FDFC: mulps   xmm3, xmm5
0x92FDFF: movaps  xmm2, xmm1
0x92FE02: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92FE06: movaps  xmm5, xmm0
0x92FE09: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x92FE0D: mulps   xmm5, xmm2
0x92FE10: movaps  xmm2, xmm1
0x92FE13: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92FE17: movaps  xmm6, xmm0
0x92FE1A: shufps  xmm6, xmm0, 0C9h ; 'É'
0x92FE1E: mulps   xmm6, xmm2
0x92FE21: movaps  xmm2, xmm6
0x92FE24: subps   xmm2, xmm5
0x92FE27: mulps   xmm2, xmm2
0x92FE2A: movaps  xmm5, xmm2
0x92FE2D: shufps  xmm5, xmm2, 55h ; 'U'
0x92FE31: movaps  xmm6, xmm2
0x92FE34: lea     eax, [esp+90h+var_58]
0x92FE38: addss   xmm5, xmm2
0x92FE3C: shufps  xmm6, xmm2, 0AAh ; 'ª'
0x92FE40: addss   xmm6, xmm5
0x92FE44: movss   dword ptr [eax], xmm6
0x92FE48: fld     [esp+90h+var_58]
0x92FE4C: fcomp   [ebp+arg_4]
0x92FE4F: movaps  xmm4, xmm3
0x92FE52: xorps   xmm4, xmmword ptr ds:0A965C0h
0x92FE59: fnstsw  ax
0x92FE5B: test    ah, 5
0x92FE5E: jp      short loc_92FE9D
0x92FE60: mulps   xmm0, xmm1
0x92FE63: movaps  xmm1, xmm0
0x92FE66: shufps  xmm1, xmm0, 55h ; 'U'
0x92FE6A: movaps  xmm2, xmm0
0x92FE6D: lea     eax, [esp+90h+var_54]
0x92FE71: addss   xmm1, xmm0
0x92FE75: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92FE79: addss   xmm2, xmm1
0x92FE7D: movss   dword ptr [eax], xmm2
0x92FE81: fld     [esp+90h+var_54]
0x92FE85: fcomp   dword ptr ds:0A2FAA8h
0x92FE8B: fnstsw  ax
0x92FE8D: test    ah, 5
0x92FE90: jp      short loc_92FE9D
0x92FE92: mov     dword ptr [esi], 3F800000h
0x92FE98: jmp     loc_92FFCD
0x92FE9D: movaps  xmm1, [esp+90h+var_20]
0x92FEA2: movaps  xmm0, xmm1
0x92FEA5: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92FEA9: movaps  xmm2, xmm3
0x92FEAC: shufps  xmm2, xmm3, 0D2h ; 'Ò'
0x92FEB0: mulps   xmm2, xmm0
0x92FEB3: movaps  xmm0, xmm1
0x92FEB6: shufps  xmm0, xmm1, 0D2h ; 'Ò'
0x92FEBA: movaps  xmm5, xmm3
0x92FEBD: shufps  xmm5, xmm3, 0C9h ; 'É'
0x92FEC1: mulps   xmm5, xmm0
0x92FEC4: movaps  xmm0, xmm5
0x92FEC7: subps   xmm0, xmm2
0x92FECA: mulps   xmm0, xmm0
0x92FECD: movaps  xmm2, xmm0
0x92FED0: shufps  xmm2, xmm0, 55h ; 'U'
0x92FED4: movaps  xmm5, xmm0
0x92FED7: lea     eax, [esp+90h+var_50]
0x92FEDB: addss   xmm2, xmm0
0x92FEDF: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92FEE3: addss   xmm5, xmm2
0x92FEE7: movss   dword ptr [eax], xmm5
0x92FEEB: fld     [esp+90h+var_50]
0x92FEEF: fcomp   [ebp+arg_4]
0x92FEF2: fnstsw  ax
0x92FEF4: test    ah, 5
0x92FEF7: jp      short loc_92FF36
0x92FEF9: mulps   xmm3, xmm1
0x92FEFC: movaps  xmm0, xmm3
0x92FEFF: shufps  xmm0, xmm3, 55h ; 'U'
0x92FF03: movaps  xmm1, xmm3
0x92FF06: lea     eax, [esp+90h+var_4C]
0x92FF0A: addss   xmm0, xmm3
0x92FF0E: shufps  xmm1, xmm3, 0AAh ; 'ª'
0x92FF12: addss   xmm1, xmm0
0x92FF16: movss   dword ptr [eax], xmm1
0x92FF1A: fld     [esp+90h+var_4C]
0x92FF1E: fcomp   dword ptr ds:0A2FAA8h
0x92FF24: fnstsw  ax
0x92FF26: test    ah, 5
0x92FF29: jp      short loc_92FF36
0x92FF2B: mov     dword ptr [ecx], 3F800000h
0x92FF31: jmp     loc_92FFCD
0x92FF36: movaps  xmm1, [esp+90h+var_10]
0x92FF3E: movaps  xmm0, xmm4
0x92FF41: shufps  xmm0, xmm4, 0C9h ; 'É'
0x92FF45: movaps  xmm2, xmm1
0x92FF48: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92FF4C: mulps   xmm2, xmm0
0x92FF4F: movaps  xmm0, xmm4
0x92FF52: shufps  xmm0, xmm4, 0D2h ; 'Ò'
0x92FF56: movaps  xmm3, xmm1
0x92FF59: shufps  xmm3, xmm1, 0C9h ; 'É'
0x92FF5D: mulps   xmm3, xmm0
0x92FF60: movaps  xmm0, xmm3
0x92FF63: subps   xmm0, xmm2
0x92FF66: mulps   xmm0, xmm0
0x92FF69: movaps  xmm2, xmm0
0x92FF6C: shufps  xmm2, xmm0, 55h ; 'U'
0x92FF70: movaps  xmm3, xmm0
0x92FF73: addss   xmm2, xmm0
0x92FF77: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92FF7B: lea     ecx, [esp+90h+var_48]
0x92FF7F: addss   xmm3, xmm2
0x92FF83: movss   dword ptr [ecx], xmm3
0x92FF87: fld     [esp+90h+var_48]
0x92FF8B: fcomp   [ebp+arg_4]
0x92FF8E: fnstsw  ax
0x92FF90: test    ah, 5
0x92FF93: jp      short loc_92FFCD
0x92FF95: mulps   xmm1, xmm4
0x92FF98: movaps  xmm0, xmm1
0x92FF9B: shufps  xmm0, xmm1, 55h ; 'U'
0x92FF9F: movaps  xmm2, xmm1
0x92FFA2: lea     eax, [esp+90h+var_44]
0x92FFA6: addss   xmm0, xmm1
0x92FFAA: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x92FFAE: addss   xmm2, xmm0
0x92FFB2: movss   dword ptr [eax], xmm2
0x92FFB6: fld     [esp+90h+var_44]
0x92FFBA: fcomp   dword ptr ds:0A2FAA8h
0x92FFC0: fnstsw  ax
0x92FFC2: test    ah, 5
0x92FFC5: jp      short loc_92FFCD
0x92FFC7: mov     dword ptr [edx], 3F800000h
0x92FFCD: mov     eax, [esp+90h+var_74]
0x92FFD1: mov     ecx, [ebp+arg_0]
0x92FFD4: mov     edx, [ecx+4]
0x92FFD7: inc     eax
0x92FFD8: add     edi, 10h
0x92FFDB: cmp     eax, edx
0x92FFDD: mov     [esp+90h+var_74], eax
0x92FFE1: mov     esi, ecx
0x92FFE3: jl      loc_92FC53
0x92FFE9: mov     edx, [esp+90h+var_68]
0x92FFED: mov     ecx, [esp+90h+var_6C]
0x92FFF1: mov     eax, [esp+90h+var_78]
0x92FFF5: mov     edi, [esp+90h+var_70]
0x92FFF9: add     eax, 10h
0x92FFFC: inc     edi
0x92FFFD: mov     [esp+90h+var_78], eax
0x930001: mov     eax, [esi+4]
0x930004: inc     ecx
0x930005: cmp     edi, eax
0x930007: mov     [esp+90h+var_70], edi
0x93000B: mov     [esp+90h+var_6C], ecx
0x93000F: jl      loc_92FC40
0x930015: mov     eax, [esi+4]
0x930018: inc     edx
0x930019: add     ebx, 10h
0x93001C: lea     ecx, [edx-1]
0x93001F: cmp     ecx, eax
0x930021: mov     [esp+90h+var_68], edx
0x930025: mov     [esp+90h+var_64], ebx
0x930029: jl      loc_92FC20
0x93002F: push    esi
0x930030: call    sub_92EB50
0x930035: add     esp, 4
0x930038: pop     edi
0x930039: pop     esi
0x93003A: pop     ebx
0x93003B: mov     esp, ebp
0x93003D: pop     ebp
0x93003E: retn
