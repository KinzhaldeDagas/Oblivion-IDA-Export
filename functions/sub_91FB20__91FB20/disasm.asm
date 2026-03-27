0x91FB20: push    ebp
0x91FB21: mov     ebp, esp
0x91FB23: and     esp, 0FFFFFFF0h
0x91FB26: sub     esp, 2D4h
0x91FB2C: mov     eax, [ebp+arg_10]
0x91FB2F: push    ebx
0x91FB30: push    esi
0x91FB31: push    edi
0x91FB32: mov     edi, [ebp+arg_0]
0x91FB35: lea     ebx, [esp+2E0h+var_270]
0x91FB39: lea     esi, [esp+2E0h+var_1E0]
0x91FB40: mov     [esp+2E0h+var_2C4], 2
0x91FB48: jmp     short loc_91FB50
0x91FB4A: align 10h
0x91FB50: mov     ecx, [eax+3Ch]
0x91FB53: movaps  xmm0, xmmword ptr [eax+40h]
0x91FB57: movaps  xmm1, xmmword ptr [edi]
0x91FB5A: mov     [esi+10h], ecx
0x91FB5D: mov     cl, [eax+0Ch]
0x91FB60: test    cl, cl
0x91FB62: subps   xmm1, xmm0
0x91FB65: movaps  xmm0, xmmword ptr [eax+10h]
0x91FB69: movaps  xmmword ptr [esi-30h], xmm1
0x91FB6D: movaps  xmmword ptr [ebx-10h], xmm0
0x91FB71: jz      short loc_91FB9F
0x91FB73: movaps  xmm0, xmmword ptr [eax+20h]
0x91FB77: mov     edx, [eax+30h]
0x91FB7A: mov     ecx, [eax+34h]
0x91FB7D: movaps  xmmword ptr [ebx], xmm0
0x91FB80: xorps   xmm0, xmm0
0x91FB83: movaps  xmmword ptr [esi-20h], xmm0
0x91FB87: movaps  xmmword ptr [esi-10h], xmm0
0x91FB8B: movaps  xmmword ptr [esi], xmm0
0x91FB8E: mov     [esi-20h], edx
0x91FB91: mov     edx, [eax+38h]
0x91FB94: mov     [esi-0Ch], ecx
0x91FB97: mov     [esi+8], edx
0x91FB9A: jmp     loc_91FC5D
0x91FB9F: movaps  xmm2, xmmword ptr [eax+70h]
0x91FBA3: movaps  xmm1, xmmword ptr [eax+20h]
0x91FBA7: movaps  xmm4, xmmword ptr [eax+50h]
0x91FBAB: movaps  xmm5, xmmword ptr [eax+60h]
0x91FBAF: lea     ecx, [eax+50h]
0x91FBB2: movaps  xmm3, xmm2
0x91FBB5: shufps  xmm3, xmm2, 44h ; 'D'
0x91FBB9: movaps  xmm7, xmm2
0x91FBBC: shufps  xmm7, xmm2, 0EEh ; 'î'
0x91FBC0: movaps  xmm6, xmm1
0x91FBC3: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x91FBC7: movaps  xmm2, xmm4
0x91FBCA: shufps  xmm2, xmm5, 0EEh ; 'î'
0x91FBCE: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x91FBD2: mulps   xmm2, xmm6
0x91FBD5: movaps  xmm6, xmm1
0x91FBD8: shufps  xmm6, xmm1, 55h ; 'U'
0x91FBDC: movaps  xmm0, xmm4
0x91FBDF: shufps  xmm0, xmm5, 44h ; 'D'
0x91FBE3: movaps  xmm7, xmm0
0x91FBE6: shufps  xmm7, xmm3, 0DDh ; 'Ý'
0x91FBEA: mulps   xmm7, xmm6
0x91FBED: movaps  xmm6, xmm1
0x91FBF0: shufps  xmm6, xmm1, 0
0x91FBF4: shufps  xmm0, xmm3, 88h ; 'ˆ'
0x91FBF8: mulps   xmm0, xmm6
0x91FBFB: addps   xmm0, xmm7
0x91FBFE: addps   xmm0, xmm2
0x91FC01: movaps  xmmword ptr [ebx], xmm0
0x91FC04: movaps  xmm0, xmmword ptr [eax+30h]
0x91FC08: movaps  xmm1, xmm0
0x91FC0B: shufps  xmm1, xmm0, 0
0x91FC0F: mulps   xmm1, xmm4
0x91FC12: movaps  [esp+2E0h+var_240], xmm1
0x91FC1A: movaps  xmm1, xmm0
0x91FC1D: shufps  xmm1, xmm0, 55h ; 'U'
0x91FC21: mulps   xmm1, xmm5
0x91FC24: push    ecx
0x91FC25: movaps  [esp+2E4h+var_230], xmm1
0x91FC2D: movaps  xmm1, xmmword ptr [ecx+20h]
0x91FC31: lea     ecx, [esp+2E4h+var_240]
0x91FC38: movaps  xmm2, xmm0
0x91FC3B: lea     eax, [esi-20h]
0x91FC3E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91FC42: push    ecx
0x91FC43: mulps   xmm2, xmm1
0x91FC46: mov     ecx, eax
0x91FC48: movaps  [esp+2E8h+var_220], xmm2
0x91FC50: call    sub_8D2B10
0x91FC55: lea     ecx, [esi-20h]
0x91FC58: call    sub_8D2830
0x91FC5D: mov     ecx, [esp+2E0h+var_2C4]
0x91FC61: mov     eax, [ebp+arg_14]
0x91FC64: add     esi, 50h ; 'P'
0x91FC67: add     ebx, 20h ; ' '
0x91FC6A: dec     ecx
0x91FC6B: mov     [esp+2E0h+var_2C4], ecx
0x91FC6F: jnz     loc_91FB50
0x91FC75: fld     dword ptr [edi+10h]
0x91FC78: movaps  xmm0, xmmword ptr [edi+10h]
0x91FC7C: fabs
0x91FC7E: xor     ecx, ecx
0x91FC80: fld     dword ptr [edi+14h]
0x91FC83: fabs
0x91FC85: movaps  [esp+2E0h+var_2C0], xmm0
0x91FC8A: fst     [esp+2E0h+var_2C4]
0x91FC8E: fld     dword ptr [edi+18h]
0x91FC91: mov     edx, 1
0x91FC96: fabs
0x91FC98: mov     esi, 2
0x91FC9D: fstp    [esp+2E0h+var_2C8]
0x91FCA1: fcomp   st(1)
0x91FCA3: fnstsw  ax
0x91FCA5: test    ah, 5
0x91FCA8: jp      short loc_91FCB7
0x91FCAA: fstp    st
0x91FCAC: xor     edx, edx
0x91FCAE: fld     [esp+2E0h+var_2C4]
0x91FCB2: mov     ecx, 1
0x91FCB7: fld     [esp+2E0h+var_2C8]
0x91FCBB: fcomp   st(1)
0x91FCBD: fnstsw  ax
0x91FCBF: fstp    st
0x91FCC1: test    ah, 5
0x91FCC4: jp      short loc_91FCCD
0x91FCC6: mov     esi, ecx
0x91FCC8: mov     ecx, 2
0x91FCCD: mov     dword ptr [esp+ecx*4+2E0h+var_2B0], 0
0x91FCD5: mov     dword ptr [esp+2E0h+var_2B0+0Ch], 0
0x91FCDD: lea     ecx, ds:0[edx*4]
0x91FCE4: lea     eax, ds:0[esi*4]
0x91FCEB: mov     edx, [eax+edi+10h]
0x91FCEF: mov     dword ptr [esp+ecx+2E0h+var_2B0], edx
0x91FCF3: fld     dword ptr [ecx+edi+10h]
0x91FCF7: fchs
0x91FCF9: mov     [esp+2E0h+var_2C8], 40400000h
0x91FD01: fstp    dword ptr [esp+eax+2E0h+var_2B0]
0x91FD05: movaps  xmm2, [esp+2E0h+var_2B0]
0x91FD0A: movaps  xmm0, xmm2
0x91FD0D: mulps   xmm0, xmm2
0x91FD10: movaps  xmm1, xmm0
0x91FD13: shufps  xmm1, xmm0, 55h ; 'U'
0x91FD17: addss   xmm1, xmm0
0x91FD1B: movaps  xmm3, xmm0
0x91FD1E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x91FD22: movaps  xmm0, xmm3
0x91FD25: movss   xmm3, [esp+2E0h+var_2C8]
0x91FD2B: addss   xmm0, xmm1
0x91FD2F: movaps  [esp+2E0h+var_290], xmm0
0x91FD34: rsqrtss xmm1, xmm0
0x91FD38: movss   dword ptr [esp+2E0h+var_290], xmm1
0x91FD3E: movaps  xmm1, [esp+2E0h+var_290]
0x91FD43: mulss   xmm0, xmm1
0x91FD47: mulss   xmm0, xmm1
0x91FD4B: subss   xmm3, xmm0
0x91FD4F: mov     [esp+2E0h+var_2C8], 3F000000h
0x91FD57: movss   xmm0, [esp+2E0h+var_2C8]
0x91FD5D: mulss   xmm0, xmm1
0x91FD61: mulss   xmm0, xmm3
0x91FD65: movaps  xmm1, xmm0
0x91FD68: shufps  xmm1, xmm0, 0
0x91FD6C: movaps  xmm0, xmm1
0x91FD6F: movaps  xmm1, xmmword ptr [edi+10h]
0x91FD73: mulps   xmm0, xmm2
0x91FD76: movaps  xmm2, xmm0
0x91FD79: shufps  xmm2, xmm0, 0C9h ; 'É'
0x91FD7D: movaps  xmm3, xmm1
0x91FD80: lea     eax, [esp+2E0h+var_170]
0x91FD87: push    eax
0x91FD88: movaps  [esp+2E4h+var_2B0], xmm0
0x91FD8D: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x91FD91: mulps   xmm3, xmm2
0x91FD94: movaps  xmm2, xmm0
0x91FD97: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x91FD9B: lea     ecx, [esp+2E4h+var_2C0]
0x91FD9F: push    ecx
0x91FDA0: lea     edx, [esp+2E8h+var_1C0]
0x91FDA7: movaps  xmm0, xmm1
0x91FDAA: shufps  xmm0, xmm1, 0C9h ; 'É'
0x91FDAE: push    edx
0x91FDAF: lea     eax, [esp+2ECh+var_210]
0x91FDB6: mulps   xmm0, xmm2
0x91FDB9: subps   xmm0, xmm3
0x91FDBC: push    eax
0x91FDBD: movaps  [esp+2F0h+var_2A0], xmm0
0x91FDC2: call    sub_94F6B0
0x91FDC7: mov     eax, [ebp+arg_4]
0x91FDCA: lea     ecx, [esp+2F0h+var_260]
0x91FDD1: push    ecx
0x91FDD2: lea     edx, [esp+2F4h+var_280]
0x91FDD6: push    edx
0x91FDD7: push    eax
0x91FDD8: lea     ecx, [esp+2FCh+var_170]
0x91FDDF: push    ecx
0x91FDE0: call    sub_94FC90
0x91FDE5: mov     edx, [ebp+arg_18]
0x91FDE8: movaps  xmm0, [esp+300h+var_280]
0x91FDF0: fstp    dword ptr [edx]
0x91FDF2: mov     eax, [ebp+arg_10]
0x91FDF5: mov     ecx, [ebp+arg_8]
0x91FDF8: movaps  xmmword ptr [eax+10h], xmm0
0x91FDFC: mov     edx, [ecx+50h]
0x91FDFF: movaps  xmmword ptr [edx+0D0h], xmm0
0x91FE06: mov     ecx, [ecx+50h]
0x91FE09: movaps  xmm0, [esp+300h+var_270]
0x91FE11: movaps  xmmword ptr [ecx+0E0h], xmm0
0x91FE18: movaps  xmm0, [esp+300h+var_260]
0x91FE20: add     esp, 20h
0x91FE23: mov     esi, [ebp+arg_14]
0x91FE26: mov     ecx, [ebp+arg_C]
0x91FE29: movaps  xmmword ptr [esi+10h], xmm0
0x91FE2D: mov     edx, [ecx+50h]
0x91FE30: movaps  xmmword ptr [edx+0D0h], xmm0
0x91FE37: mov     ecx, [ecx+50h]
0x91FE3A: movaps  xmm0, [esp+2E0h+var_250]
0x91FE42: movaps  xmmword ptr [ecx+0E0h], xmm0
0x91FE49: lea     ecx, [esp+2E0h+var_270]
0x91FE4D: mov     edx, 2
0x91FE52: mov     bl, [eax+0Ch]
0x91FE55: test    bl, bl
0x91FE57: movaps  xmm0, xmmword ptr [ecx]
0x91FE5A: jnz     short loc_91FE8C
0x91FE5C: movaps  xmm2, xmmword ptr [eax+70h]
0x91FE60: movaps  xmm3, xmmword ptr [eax+60h]
0x91FE64: movaps  xmm1, xmm0
0x91FE67: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91FE6B: mulps   xmm2, xmm1
0x91FE6E: movaps  xmm1, xmm0
0x91FE71: shufps  xmm1, xmm0, 55h ; 'U'
0x91FE75: mulps   xmm3, xmm1
0x91FE78: movaps  xmm1, xmm0
0x91FE7B: shufps  xmm1, xmm0, 0
0x91FE7F: movaps  xmm0, xmmword ptr [eax+50h]
0x91FE83: mulps   xmm0, xmm1
0x91FE86: addps   xmm0, xmm3
0x91FE89: addps   xmm0, xmm2
0x91FE8C: add     ecx, 20h ; ' '
0x91FE8F: dec     edx
0x91FE90: movaps  xmmword ptr [eax+20h], xmm0
0x91FE94: mov     eax, esi
0x91FE96: jnz     short loc_91FE52
0x91FE98: pop     edi
0x91FE99: pop     esi
0x91FE9A: pop     ebx
0x91FE9B: mov     esp, ebp
0x91FE9D: pop     ebp
0x91FE9E: retn
