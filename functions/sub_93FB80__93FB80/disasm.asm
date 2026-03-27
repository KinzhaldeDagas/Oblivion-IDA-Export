0x93FB80: push    ebp
0x93FB81: mov     ebp, esp
0x93FB83: and     esp, 0FFFFFFF0h
0x93FB86: sub     esp, 304h
0x93FB8C: push    ebx
0x93FB8D: mov     ebx, [ebp+arg_0]
0x93FB90: push    esi
0x93FB91: mov     esi, [ebp+arg_4]
0x93FB94: push    edi
0x93FB95: mov     edi, [ebp+arg_8]
0x93FB98: mov     [esp+310h+var_2E8], ecx
0x93FB9C: jmp     short loc_93FBA2
0x93FB9E: fstp    st
0x93FBA0: fstp    st
0x93FBA2: movzx   ecx, byte ptr [esi]
0x93FBA5: cmp     ecx, 6Bh; switch 108 cases
0x93FBA8: mov     [esp+310h+var_2EC], 3E7h
0x93FBB0: ja      def_93FBBD; jumptable 0093FBBD default case, cases 8,12-15,29-31,44-47,84-95
0x93FBB6: movzx   eax, ds:byte_9409BC[ecx]
0x93FBBD: jmp     ds:jpt_93FBBD[eax*4]; switch jump
0x93FBC4: fld     dword ptr [ebx+18h]; jumptable 0093FBBD case 19
0x93FBC7: movzx   ecx, byte ptr [esi+2]
0x93FBCB: fadd    dword ptr [ebx+14h]
0x93FBCE: movzx   edx, byte ptr [esi+1]
0x93FBD2: shl     ecx, 1
0x93FBD4: mov     [esp+310h+var_300], ecx
0x93FBD8: shl     edx, 1
0x93FBDA: fadd    st, st
0x93FBDC: fild    [esp+310h+var_300]
0x93FBE0: mov     [esp+310h+var_300], edx
0x93FBE4: fsub    st, st(1)
0x93FBE6: fstp    [esp+310h+var_2F8]
0x93FBEA: fild    [esp+310h+var_300]
0x93FBEE: fadd    st, st(1)
0x93FBF0: fstp    [esp+310h+var_2F4]
0x93FBF4: fstp    st
0x93FBF6: fld     dword ptr [edi+8]
0x93FBF9: fadd    dword ptr [edi+4]
0x93FBFC: fld     dword ptr [edi+18h]
0x93FBFF: fadd    dword ptr [edi+14h]
0x93FC02: jmp     loc_93FF73
0x93FC07: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 20
0x93FC0B: fld     dword ptr [ebx+18h]
0x93FC0E: fadd    dword ptr [ebx+14h]
0x93FC11: movzx   edx, byte ptr [esi+1]
0x93FC15: lea     ecx, [eax+eax-0FFh]
0x93FC1C: mov     [esp+310h+var_300], ecx
0x93FC20: lea     eax, [edx+edx-0FFh]
0x93FC27: fadd    st, st
0x93FC29: fild    [esp+310h+var_300]
0x93FC2D: mov     [esp+310h+var_300], eax
0x93FC31: fsub    st, st(1)
0x93FC33: fstp    [esp+310h+var_2F8]
0x93FC37: fild    [esp+310h+var_300]
0x93FC3B: fadd    st, st(1)
0x93FC3D: fstp    [esp+310h+var_2F4]
0x93FC41: fstp    st
0x93FC43: fld     dword ptr [edi+4]
0x93FC46: fsub    dword ptr [edi+8]
0x93FC49: fld     dword ptr [edi+14h]
0x93FC4C: fsub    dword ptr [edi+18h]
0x93FC4F: jmp     loc_93FF73
0x93FC54: fld     dword ptr [ebx+18h]; jumptable 0093FBBD case 21
0x93FC57: movzx   ecx, byte ptr [esi+2]
0x93FC5B: fadd    dword ptr [ebx+10h]
0x93FC5E: movzx   edx, byte ptr [esi+1]
0x93FC62: shl     ecx, 1
0x93FC64: mov     [esp+310h+var_300], ecx
0x93FC68: shl     edx, 1
0x93FC6A: fadd    st, st
0x93FC6C: fild    [esp+310h+var_300]
0x93FC70: mov     [esp+310h+var_300], edx
0x93FC74: fsub    st, st(1)
0x93FC76: fstp    [esp+310h+var_2F8]
0x93FC7A: fild    [esp+310h+var_300]
0x93FC7E: fadd    st, st(1)
0x93FC80: fstp    [esp+310h+var_2F4]
0x93FC84: fstp    st
0x93FC86: fld     dword ptr [edi+8]
0x93FC89: fadd    dword ptr [edi]
0x93FC8B: fld     dword ptr [edi+18h]
0x93FC8E: fadd    dword ptr [edi+10h]
0x93FC91: jmp     loc_93FF73
0x93FC96: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 22
0x93FC9A: fld     dword ptr [ebx+18h]
0x93FC9D: fadd    dword ptr [ebx+10h]
0x93FCA0: movzx   edx, byte ptr [esi+1]
0x93FCA4: lea     ecx, [eax+eax-0FFh]
0x93FCAB: mov     [esp+310h+var_300], ecx
0x93FCAF: lea     eax, [edx+edx-0FFh]
0x93FCB6: fadd    st, st
0x93FCB8: fild    [esp+310h+var_300]
0x93FCBC: mov     [esp+310h+var_300], eax
0x93FCC0: fsub    st, st(1)
0x93FCC2: fstp    [esp+310h+var_2F8]
0x93FCC6: fild    [esp+310h+var_300]
0x93FCCA: fadd    st, st(1)
0x93FCCC: fstp    [esp+310h+var_2F4]
0x93FCD0: fstp    st
0x93FCD2: fld     dword ptr [edi]
0x93FCD4: fsub    dword ptr [edi+8]
0x93FCD7: fld     dword ptr [edi+10h]
0x93FCDA: fsub    dword ptr [edi+18h]
0x93FCDD: jmp     loc_93FF73
0x93FCE2: fld     dword ptr [ebx+14h]; jumptable 0093FBBD case 23
0x93FCE5: movzx   ecx, byte ptr [esi+2]
0x93FCE9: fadd    dword ptr [ebx+10h]
0x93FCEC: movzx   edx, byte ptr [esi+1]
0x93FCF0: shl     ecx, 1
0x93FCF2: mov     [esp+310h+var_300], ecx
0x93FCF6: shl     edx, 1
0x93FCF8: fadd    st, st
0x93FCFA: fild    [esp+310h+var_300]
0x93FCFE: mov     [esp+310h+var_300], edx
0x93FD02: fsub    st, st(1)
0x93FD04: fstp    [esp+310h+var_2F8]
0x93FD08: fild    [esp+310h+var_300]
0x93FD0C: fadd    st, st(1)
0x93FD0E: fstp    [esp+310h+var_2F4]
0x93FD12: fstp    st
0x93FD14: fld     dword ptr [edi+4]
0x93FD17: fadd    dword ptr [edi]
0x93FD19: fld     dword ptr [edi+14h]
0x93FD1C: fadd    dword ptr [edi+10h]
0x93FD1F: jmp     loc_93FF73
0x93FD24: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 24
0x93FD28: fld     dword ptr [ebx+14h]
0x93FD2B: fadd    dword ptr [ebx+10h]
0x93FD2E: movzx   edx, byte ptr [esi+1]
0x93FD32: lea     ecx, [eax+eax-0FFh]
0x93FD39: mov     [esp+310h+var_300], ecx
0x93FD3D: lea     eax, [edx+edx-0FFh]
0x93FD44: fadd    st, st
0x93FD46: fild    [esp+310h+var_300]
0x93FD4A: mov     [esp+310h+var_300], eax
0x93FD4E: fsub    st, st(1)
0x93FD50: fstp    [esp+310h+var_2F8]
0x93FD54: fild    [esp+310h+var_300]
0x93FD58: fadd    st, st(1)
0x93FD5A: fstp    [esp+310h+var_2F4]
0x93FD5E: fstp    st
0x93FD60: fld     dword ptr [edi]
0x93FD62: fsub    dword ptr [edi+4]
0x93FD65: fld     dword ptr [edi+10h]
0x93FD68: fsub    dword ptr [edi+14h]
0x93FD6B: jmp     loc_93FF73
0x93FD70: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 25
0x93FD74: fld     dword ptr [ebx+20h]
0x93FD77: lea     ecx, [eax+eax*2]
0x93FD7A: movzx   eax, byte ptr [esi+1]
0x93FD7E: mov     [esp+310h+var_300], ecx
0x93FD82: lea     edx, [eax+eax*2]
0x93FD85: fild    [esp+310h+var_300]
0x93FD89: mov     [esp+310h+var_300], edx
0x93FD8D: fsub    st, st(1)
0x93FD8F: fstp    [esp+310h+var_2F8]
0x93FD93: fild    [esp+310h+var_300]
0x93FD97: fadd    st, st(1)
0x93FD99: fstp    [esp+310h+var_2F4]
0x93FD9D: fstp    st
0x93FD9F: fld     dword ptr [edi+8]
0x93FDA2: fadd    dword ptr [edi+4]
0x93FDA5: fadd    dword ptr [edi]
0x93FDA7: fld     dword ptr [edi+18h]
0x93FDAA: fadd    dword ptr [edi+14h]
0x93FDAD: fadd    dword ptr [edi+10h]
0x93FDB0: jmp     loc_93FF73
0x93FDB5: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 26
0x93FDB9: fld     dword ptr [ebx+20h]
0x93FDBC: sub     eax, 55h ; 'U'
0x93FDBF: lea     eax, [eax+eax*2]
0x93FDC2: mov     [esp+310h+var_300], eax
0x93FDC6: movzx   eax, byte ptr [esi+1]
0x93FDCA: fild    [esp+310h+var_300]
0x93FDCE: sub     eax, 55h ; 'U'
0x93FDD1: fsub    st, st(1)
0x93FDD3: lea     ecx, [eax+eax*2]
0x93FDD6: mov     [esp+310h+var_300], ecx
0x93FDDA: fstp    [esp+310h+var_2F8]
0x93FDDE: fild    [esp+310h+var_300]
0x93FDE2: fadd    st, st(1)
0x93FDE4: fstp    [esp+310h+var_2F4]
0x93FDE8: fstp    st
0x93FDEA: fld     dword ptr [edi+4]
0x93FDED: fadd    dword ptr [edi]
0x93FDEF: fsub    dword ptr [edi+8]
0x93FDF2: fld     dword ptr [edi+14h]
0x93FDF5: fadd    dword ptr [edi+10h]
0x93FDF8: fsub    dword ptr [edi+18h]
0x93FDFB: jmp     loc_93FF73
0x93FE00: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 27
0x93FE04: fld     dword ptr [ebx+20h]
0x93FE07: sub     eax, 55h ; 'U'
0x93FE0A: lea     edx, [eax+eax*2]
0x93FE0D: movzx   eax, byte ptr [esi+1]
0x93FE11: mov     [esp+310h+var_300], edx
0x93FE15: sub     eax, 55h ; 'U'
0x93FE18: lea     eax, [eax+eax*2]
0x93FE1B: fild    [esp+310h+var_300]
0x93FE1F: mov     [esp+310h+var_300], eax
0x93FE23: fsub    st, st(1)
0x93FE25: fstp    [esp+310h+var_2F8]
0x93FE29: fild    [esp+310h+var_300]
0x93FE2D: fadd    st, st(1)
0x93FE2F: fstp    [esp+310h+var_2F4]
0x93FE33: fstp    st
0x93FE35: fld     dword ptr [edi]
0x93FE37: fsub    dword ptr [edi+4]
0x93FE3A: fadd    dword ptr [edi+8]
0x93FE3D: fld     dword ptr [edi+10h]
0x93FE40: fsub    dword ptr [edi+14h]
0x93FE43: fadd    dword ptr [edi+18h]
0x93FE46: jmp     loc_93FF73
0x93FE4B: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD case 28
0x93FE4F: fld     dword ptr [ebx+20h]
0x93FE52: sub     eax, 0AAh ; 'ª'
0x93FE57: lea     ecx, [eax+eax*2]
0x93FE5A: movzx   eax, byte ptr [esi+1]
0x93FE5E: mov     [esp+310h+var_300], ecx
0x93FE62: sub     eax, 0AAh ; 'ª'
0x93FE67: lea     edx, [eax+eax*2]
0x93FE6A: fild    [esp+310h+var_300]
0x93FE6E: mov     [esp+310h+var_300], edx
0x93FE72: fsub    st, st(1)
0x93FE74: fstp    [esp+310h+var_2F8]
0x93FE78: fild    [esp+310h+var_300]
0x93FE7C: fadd    st, st(1)
0x93FE7E: fstp    [esp+310h+var_2F4]
0x93FE82: fstp    st
0x93FE84: fld     dword ptr [edi]
0x93FE86: fsub    dword ptr [edi+4]
0x93FE89: fsub    dword ptr [edi+8]
0x93FE8C: fld     dword ptr [edi+10h]
0x93FE8F: fsub    dword ptr [edi+14h]
0x93FE92: fsub    dword ptr [edi+18h]
0x93FE95: jmp     loc_93FF73
0x93FE9A: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD cases 32-34
0x93FE9E: movzx   edx, byte ptr [esi+2]
0x93FEA2: mov     [esp+310h+var_300], eax
0x93FEA6: add     ecx, 0FFFFFFE0h
0x93FEA9: add     esi, 3
0x93FEAC: fild    [esp+310h+var_300]
0x93FEB0: mov     [esp+310h+var_2EC], ecx
0x93FEB4: fld     dword ptr ds:0A2F948h
0x93FEBA: mov     [esp+310h+var_300], edx
0x93FEBE: fadd    st, st(1)
0x93FEC0: fxch    st(1)
0x93FEC2: fsub    dword ptr [ebx+ecx*4+10h]
0x93FEC6: fstp    [esp+310h+var_2F8]
0x93FECA: fadd    dword ptr [ebx+ecx*4+10h]
0x93FECE: fstp    [esp+310h+var_2F4]
0x93FED2: fld     dword ptr [edi+ecx*4]
0x93FED5: fld     dword ptr [edi+ecx*4+10h]
0x93FED9: xor     ecx, ecx
0x93FEDB: mov     [esp+310h+var_2F0], ecx
0x93FEDF: jmp     loc_93FF8A
0x93FEE4: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD cases 35-37
0x93FEE8: movzx   edx, byte ptr [esi+1]
0x93FEEC: mov     [esp+310h+var_300], eax
0x93FEF0: movzx   eax, byte ptr [esi+3]
0x93FEF4: fild    [esp+310h+var_300]
0x93FEF8: add     ecx, 0FFFFFFDDh
0x93FEFB: mov     [esp+310h+var_300], edx
0x93FEFF: fsub    dword ptr [ebx+ecx*4+10h]
0x93FF03: movzx   edx, byte ptr [esi+6]
0x93FF07: mov     [esp+310h+var_2EC], ecx
0x93FF0B: fstp    [esp+310h+var_2F8]
0x93FF0F: shl     eax, 8
0x93FF12: fild    [esp+310h+var_300]
0x93FF16: add     esi, 7
0x93FF19: fadd    dword ptr [ebx+ecx*4+10h]
0x93FF1D: fstp    [esp+310h+var_2F4]
0x93FF21: fld     dword ptr [edi+ecx*4]
0x93FF24: fld     dword ptr [edi+ecx*4+10h]
0x93FF28: movzx   ecx, byte ptr [esi-3]
0x93FF2C: add     eax, ecx
0x93FF2E: mov     [esp+310h+var_2F0], eax
0x93FF32: movzx   eax, byte ptr [esi-2]
0x93FF36: shl     eax, 8
0x93FF39: add     eax, edx
0x93FF3B: jmp     short loc_93FF82
0x93FF3D: movzx   eax, byte ptr [esi+2]; jumptable 0093FBBD cases 16-18
0x93FF41: movzx   edx, byte ptr [esi+1]
0x93FF45: mov     [esp+310h+var_300], eax
0x93FF49: add     ecx, 0FFFFFFF0h
0x93FF4C: mov     [esp+310h+var_2EC], ecx
0x93FF50: fild    [esp+310h+var_300]
0x93FF54: mov     [esp+310h+var_300], edx
0x93FF58: fsub    dword ptr [ebx+ecx*4+10h]
0x93FF5C: fstp    [esp+310h+var_2F8]
0x93FF60: fild    [esp+310h+var_300]
0x93FF64: fadd    dword ptr [ebx+ecx*4+10h]
0x93FF68: fstp    [esp+310h+var_2F4]
0x93FF6C: fld     dword ptr [edi+ecx*4]
0x93FF6F: fld     dword ptr [edi+ecx*4+10h]
0x93FF73: movzx   eax, byte ptr [esi+3]
0x93FF77: add     esi, 4
0x93FF7A: mov     [esp+310h+var_2F0], 0
0x93FF82: mov     ecx, [esp+310h+var_2F0]
0x93FF86: mov     [esp+310h+var_300], eax
0x93FF8A: fstp    [esp+310h+var_2FC]
0x93FF8E: fld     [esp+310h+var_2FC]
0x93FF92: fcomp   [esp+310h+var_2F8]
0x93FF96: fnstsw  ax
0x93FF98: test    ah, 5
0x93FF9B: jp      short loc_93FFAF
0x93FF9D: fcom    [esp+310h+var_2F8]
0x93FFA1: fnstsw  ax
0x93FFA3: test    ah, 5
0x93FFA6: jp      short loc_93FFAF
0x93FFA8: add     esi, ecx
0x93FFAA: jmp     loc_93FBA0
0x93FFAF: fcom    [esp+310h+var_2F4]
0x93FFB3: mov     edx, [esp+310h+var_300]
0x93FFB7: add     esi, edx
0x93FFB9: fnstsw  ax
0x93FFBB: test    ah, 41h
0x93FFBE: jnz     short loc_93FFD3
0x93FFC0: fld     [esp+310h+var_2FC]
0x93FFC4: fcomp   [esp+310h+var_2F4]
0x93FFC8: fnstsw  ax
0x93FFCA: test    ah, 41h
0x93FFCD: jz      loc_93FBA0
0x93FFD3: fld     [esp+310h+var_2F4]
0x93FFD7: movaps  xmm1, xmmword ptr [edi]
0x93FFDA: fsubr   st, st(1)
0x93FFDC: movaps  xmm2, xmmword ptr [edi+10h]
0x93FFE0: movaps  [esp+310h+var_240], xmm1
0x93FFE8: movaps  [esp+310h+var_230], xmm2
0x93FFF0: fstp    [esp+310h+var_2DC]
0x93FFF4: fsub    [esp+310h+var_2F8]
0x93FFF8: fstp    [esp+310h+var_2E4]
0x93FFFC: fld     [esp+310h+var_2FC]
0x940000: fsub    [esp+310h+var_2F4]
0x940004: fstp    [esp+310h+var_2E0]
0x940008: fld     [esp+310h+var_2FC]
0x94000C: fsub    [esp+310h+var_2F8]
0x940010: fstp    [esp+310h+var_2FC]
0x940014: fld     [esp+310h+var_2DC]
0x940018: fcomp   [esp+310h+var_2E0]
0x94001C: fnstsw  ax
0x94001E: test    ah, 5
0x940021: jp      loc_940199
0x940027: fld     [esp+310h+var_2E0]
0x94002B: fmul    [esp+310h+var_2DC]
0x94002F: fcomp   dword ptr ds:0A2FAA8h
0x940035: fnstsw  ax
0x940037: test    ah, 5
0x94003A: jp      short loc_940074
0x94003C: fld     [esp+310h+var_2DC]
0x940040: fsub    [esp+310h+var_2E0]
0x940044: fdivr   [esp+310h+var_2DC]
0x940048: fstp    [esp+310h+var_300]
0x94004C: movss   xmm0, [esp+310h+var_300]
0x940052: shufps  xmm0, xmm0, 0
0x940056: movaps  xmm3, xmm0
0x940059: mulps   xmm3, xmm2
0x94005C: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x940063: subps   xmm2, xmm0
0x940066: mulps   xmm2, xmm1
0x940069: addps   xmm2, xmm3
0x94006C: movaps  [esp+310h+var_230], xmm2
0x940074: sub     ecx, edx
0x940076: lea     eax, [esp+310h+var_240]
0x94007D: push    eax
0x94007E: add     ecx, esi
0x940080: push    ecx
0x940081: mov     ecx, [esp+318h+var_2E8]
0x940085: push    ebx
0x940086: call    sub_93FB80
0x94008B: fld     [esp+310h+var_2FC]
0x94008F: fmul    [esp+310h+var_2E4]
0x940093: fcomp   dword ptr ds:0A2FAA8h
0x940099: fnstsw  ax
0x94009B: test    ah, 5
0x94009E: jp      short loc_9400DA
0x9400A0: fld     [esp+310h+var_2E4]
0x9400A4: movaps  xmm1, xmmword ptr [edi+10h]
0x9400A8: fsub    [esp+310h+var_2FC]
0x9400AC: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x9400B3: fdivr   [esp+310h+var_2E4]
0x9400B7: fstp    [esp+310h+var_300]
0x9400BB: movss   xmm0, [esp+310h+var_300]
0x9400C1: shufps  xmm0, xmm0, 0
0x9400C5: movaps  xmm2, xmm0
0x9400C8: mulps   xmm2, xmm1
0x9400CB: movaps  xmm1, xmmword ptr [edi]
0x9400CE: subps   xmm3, xmm0
0x9400D1: mulps   xmm3, xmm1
0x9400D4: addps   xmm3, xmm2
0x9400D7: movaps  xmmword ptr [edi], xmm3
0x9400DA: mov     eax, [esp+310h+var_2E8]
0x9400DE: fld     dword ptr [eax+1Ch]
0x9400E1: fcomp   dword ptr [eax+20h]
0x9400E4: fnstsw  ax
0x9400E6: test    ah, 5
0x9400E9: jp      loc_93FBA2
0x9400EF: mov     eax, [esp+310h+var_2E8]
0x9400F3: mov     ecx, [eax+1Ch]
0x9400F6: mov     [eax+20h], ecx
0x9400F9: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x940100: mov     edx, ecx
0x940102: mov     ecx, [eax+2Ch]
0x940105: movaps  xmm2, xmmword ptr [ecx+10h]
0x940109: mov     eax, [eax+10h]
0x94010C: movaps  xmm1, xmmword ptr [eax+10h]
0x940110: mov     eax, [esp+310h+var_2EC]
0x940114: cmp     eax, 3
0x940117: mov     [esp+310h+var_27C], edx
0x94011E: movss   xmm0, [esp+310h+var_27C]
0x940127: shufps  xmm0, xmm0, 0
0x94012B: movaps  xmm3, xmm0
0x94012E: mulps   xmm3, xmm2
0x940131: movaps  xmm2, xmmword ptr [ecx]
0x940134: subps   xmm4, xmm0
0x940137: mulps   xmm4, xmm2
0x94013A: addps   xmm4, xmm3
0x94013D: subps   xmm4, xmm1
0x940140: movaps  xmmword ptr [edi+10h], xmm4
0x940144: mov     ecx, [ebx+28h]
0x940147: movaps  xmm1, xmmword ptr [edi+10h]
0x94014B: mov     [esp+310h+var_274], ecx
0x940152: movss   xmm0, [esp+310h+var_274]
0x94015B: movaps  xmm2, xmm0
0x94015E: shufps  xmm2, xmm0, 0
0x940162: mulps   xmm2, xmm1
0x940165: movaps  xmmword ptr [edi+10h], xmm2
0x940169: movaps  xmm0, xmmword ptr [ebx]
0x94016C: movaps  xmm1, xmmword ptr [edi+10h]
0x940170: subps   xmm1, xmm0
0x940173: movaps  xmmword ptr [edi+10h], xmm1
0x940177: jge     loc_93FBA2
0x94017D: fld     dword ptr [edi+eax*4+10h]
0x940181: fcomp   [esp+310h+var_2F8]
0x940185: fnstsw  ax
0x940187: test    ah, 5
0x94018A: jp      loc_93FBA2
0x940190: pop     edi
0x940191: pop     esi
0x940192: pop     ebx
0x940193: mov     esp, ebp
0x940195: pop     ebp
0x940196: retn    0Ch
0x940199: fld     [esp+310h+var_2FC]
0x94019D: fmul    [esp+310h+var_2E4]
0x9401A1: fcomp   dword ptr ds:0A2FAA8h
0x9401A7: fnstsw  ax
0x9401A9: test    ah, 5
0x9401AC: jp      short loc_9401E6
0x9401AE: fld     [esp+310h+var_2E4]
0x9401B2: fsub    [esp+310h+var_2FC]
0x9401B6: fdivr   [esp+310h+var_2E4]
0x9401BA: fstp    [esp+310h+var_2E4]
0x9401BE: movss   xmm0, [esp+310h+var_2E4]
0x9401C4: shufps  xmm0, xmm0, 0
0x9401C8: movaps  xmm3, xmm0
0x9401CB: mulps   xmm3, xmm2
0x9401CE: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x9401D5: subps   xmm2, xmm0
0x9401D8: mulps   xmm2, xmm1
0x9401DB: addps   xmm2, xmm3
0x9401DE: movaps  [esp+310h+var_230], xmm2
0x9401E6: mov     ecx, [esp+310h+var_2E8]
0x9401EA: lea     edx, [esp+310h+var_240]
0x9401F1: push    edx
0x9401F2: push    esi
0x9401F3: push    ebx
0x9401F4: call    sub_93FB80
0x9401F9: fld     [esp+310h+var_2E0]
0x9401FD: fmul    [esp+310h+var_2DC]
0x940201: fcomp   dword ptr ds:0A2FAA8h
0x940207: fnstsw  ax
0x940209: test    ah, 5
0x94020C: jp      short loc_940248
0x94020E: fld     [esp+310h+var_2DC]
0x940212: movaps  xmm1, xmmword ptr [edi+10h]
0x940216: fsub    [esp+310h+var_2E0]
0x94021A: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x940221: fdivr   [esp+310h+var_2DC]
0x940225: fstp    [esp+310h+var_2E0]
0x940229: movss   xmm0, [esp+310h+var_2E0]
0x94022F: shufps  xmm0, xmm0, 0
0x940233: movaps  xmm2, xmm0
0x940236: mulps   xmm2, xmm1
0x940239: movaps  xmm1, xmmword ptr [edi]
0x94023C: subps   xmm3, xmm0
0x94023F: mulps   xmm3, xmm1
0x940242: addps   xmm3, xmm2
0x940245: movaps  xmmword ptr [edi], xmm3
0x940248: mov     ecx, [esp+310h+var_2E8]
0x94024C: fld     dword ptr [ecx+1Ch]
0x94024F: fcomp   dword ptr [ecx+20h]
0x940252: fnstsw  ax
0x940254: test    ah, 5
0x940257: jp      loc_9402F0
0x94025D: mov     eax, [ecx+1Ch]
0x940260: mov     [ecx+20h], eax
0x940263: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x94026A: mov     edx, eax
0x94026C: mov     eax, [ecx+2Ch]
0x94026F: movaps  xmm2, xmmword ptr [eax+10h]
0x940273: mov     ecx, [ecx+10h]
0x940276: movaps  xmm1, xmmword ptr [ecx+10h]
0x94027A: mov     [esp+310h+var_278], edx
0x940281: movss   xmm0, [esp+310h+var_278]
0x94028A: shufps  xmm0, xmm0, 0
0x94028E: movaps  xmm3, xmm0
0x940291: mulps   xmm3, xmm2
0x940294: movaps  xmm2, xmmword ptr [eax]
0x940297: mov     eax, [esp+310h+var_2EC]
0x94029B: cmp     eax, 3
0x94029E: subps   xmm4, xmm0
0x9402A1: mulps   xmm4, xmm2
0x9402A4: addps   xmm4, xmm3
0x9402A7: subps   xmm4, xmm1
0x9402AA: movaps  xmmword ptr [edi+10h], xmm4
0x9402AE: mov     edx, [ebx+28h]
0x9402B1: movaps  xmm1, xmmword ptr [edi+10h]
0x9402B5: mov     [esp+310h+var_2D4], edx
0x9402B9: movss   xmm0, [esp+310h+var_2D4]
0x9402BF: movaps  xmm2, xmm0
0x9402C2: shufps  xmm2, xmm0, 0
0x9402C6: mulps   xmm2, xmm1
0x9402C9: movaps  xmmword ptr [edi+10h], xmm2
0x9402CD: movaps  xmm0, xmmword ptr [ebx]
0x9402D0: movaps  xmm1, xmmword ptr [edi+10h]
0x9402D4: subps   xmm1, xmm0
0x9402D7: movaps  xmmword ptr [edi+10h], xmm1
0x9402DB: jge     short loc_9402F0
0x9402DD: fld     dword ptr [edi+eax*4+10h]
0x9402E1: fcomp   [esp+310h+var_2F4]
0x9402E5: fnstsw  ax
0x9402E7: test    ah, 41h
0x9402EA: jz      loc_940930; jumptable 0093FBBD case 0
0x9402F0: mov     eax, [esp+310h+var_2F0]
0x9402F4: sub     eax, [esp+310h+var_300]
0x9402F8: add     esi, eax
0x9402FA: jmp     loc_93FBA2
0x9402FF: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD cases 41-43
0x940303: movzx   eax, byte ptr [esi+2]
0x940307: shl     edx, 8
0x94030A: add     eax, edx
0x94030C: movzx   edx, byte ptr [esi+3]
0x940310: shl     eax, 8
0x940313: add     eax, edx
0x940315: movzx   edx, byte ptr [esi+4]
0x940319: mov     [esp+310h+var_300], eax
0x94031D: mov     eax, [esp+310h+var_2E8]
0x940321: add     ecx, 0FFFFFFD7h
0x940324: fild    [esp+310h+var_300]
0x940328: shl     edx, 8
0x94032B: fmul    dword ptr [eax+14h]
0x94032E: movzx   eax, byte ptr [esi+5]
0x940332: add     edx, eax
0x940334: fmul    dword ptr [ebx+28h]
0x940337: movzx   eax, byte ptr [esi+6]
0x94033B: shl     edx, 8
0x94033E: fsub    dword ptr [ebx+ecx*4]
0x940341: add     edx, eax
0x940343: mov     [esp+310h+var_300], edx
0x940347: mov     edx, [esp+310h+var_2E8]
0x94034B: fsub    dword ptr [ebx+ecx*4+10h]
0x94034F: lea     eax, ds:10h[ecx*4]
0x940356: add     esi, 7
0x940359: fstp    [esp+310h+var_2F8]
0x94035D: fild    [esp+310h+var_300]
0x940361: fmul    dword ptr [edx+14h]
0x940364: fmul    dword ptr [ebx+28h]
0x940367: fsub    dword ptr [ebx+ecx*4]
0x94036A: jmp     short loc_940398
0x94036C: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD cases 38-40
0x940370: mov     [esp+310h+var_300], edx
0x940374: movzx   edx, byte ptr [esi+2]
0x940378: fild    [esp+310h+var_300]
0x94037C: add     ecx, 0FFFFFFDAh
0x94037F: lea     eax, ds:10h[ecx*4]
0x940386: mov     [esp+310h+var_300], edx
0x94038A: fsub    dword ptr [eax+ebx]
0x94038D: add     esi, 3
0x940390: fstp    [esp+310h+var_2F8]
0x940394: fild    [esp+310h+var_300]
0x940398: fadd    dword ptr [eax+ebx]
0x94039B: fld     dword ptr [edi+ecx*4]
0x94039E: fstp    [esp+310h+var_2F0]
0x9403A2: fld     dword ptr [eax+edi]
0x9403A5: fstp    [esp+310h+var_2FC]
0x9403A9: fld     [esp+310h+var_2F0]
0x9403AD: fcomp   [esp+310h+var_2FC]
0x9403B1: fnstsw  ax
0x9403B3: test    ah, 5
0x9403B6: jp      short loc_9403E6
0x9403B8: fld     [esp+310h+var_2FC]
0x9403BC: fcomp   [esp+310h+var_2F8]
0x9403C0: fnstsw  ax
0x9403C2: test    ah, 5
0x9403C5: jnp     loc_94092E
0x9403CB: fld     [esp+310h+var_2F0]
0x9403CF: fcomp   st(1)
0x9403D1: fnstsw  ax
0x9403D3: test    ah, 41h
0x9403D6: jz      loc_94092E
0x9403DC: mov     [esp+310h+var_2EC], 0
0x9403E4: jmp     short loc_940412
0x9403E6: fld     [esp+310h+var_2F0]
0x9403EA: fcomp   [esp+310h+var_2F8]
0x9403EE: fnstsw  ax
0x9403F0: test    ah, 5
0x9403F3: jnp     loc_94092E
0x9403F9: fld     [esp+310h+var_2FC]
0x9403FD: fcomp   st(1)
0x9403FF: fnstsw  ax
0x940401: test    ah, 41h
0x940404: jz      loc_94092E
0x94040A: mov     [esp+310h+var_2EC], 1
0x940412: fld     [esp+310h+var_2F0]
0x940416: mov     eax, edi
0x940418: mov     ecx, [eax]
0x94041A: fsub    st, st(1)
0x94041C: mov     edx, [eax+4]
0x94041F: mov     dword ptr [esp+310h+var_270], ecx
0x940426: mov     ecx, [eax+8]
0x940429: fstp    [esp+310h+var_300]
0x94042D: mov     dword ptr [esp+310h+var_270+4], edx
0x940434: mov     edx, [eax+0Ch]
0x940437: fsubr   [esp+310h+var_2FC]
0x94043B: fld     [esp+310h+var_300]
0x94043F: lea     eax, [edi+10h]
0x940442: mov     dword ptr [esp+310h+var_270+8], ecx
0x940449: fmul    st, st(1)
0x94044B: mov     ecx, [eax]
0x94044D: mov     dword ptr [esp+310h+var_270+0Ch], edx
0x940454: mov     edx, [eax+4]
0x940457: fcomp   dword ptr ds:0A2FAA8h
0x94045D: mov     dword ptr [esp+310h+var_260], ecx
0x940464: mov     ecx, [eax+8]
0x940467: mov     dword ptr [esp+310h+var_260+4], edx
0x94046E: mov     edx, [eax+0Ch]
0x940471: fnstsw  ax
0x940473: mov     dword ptr [esp+310h+var_260+8], ecx
0x94047A: test    ah, 5
0x94047D: mov     dword ptr [esp+310h+var_260+0Ch], edx
0x940484: jp      short loc_9404DF
0x940486: fld     [esp+310h+var_300]
0x94048A: push    ecx
0x94048B: fsub    st, st(1)
0x94048D: lea     ecx, [esp+314h+var_220]
0x940494: fdivr   [esp+314h+var_300]
0x940498: fstp    [esp+314h+var_314]
0x94049B: fstp    st
0x94049D: call    sub_535AA0
0x9404A2: mov     eax, [esp+310h+var_2EC]
0x9404A6: movaps  xmm0, [esp+310h+var_220]
0x9404AE: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x9404B5: shufps  xmm0, xmm0, 0
0x9404B9: subps   xmm2, xmm0
0x9404BC: mulps   xmm2, [esp+310h+var_270]
0x9404C4: shl     eax, 4
0x9404C7: mov     ecx, edi
0x9404C9: movaps  xmm1, xmm0
0x9404CC: mulps   xmm1, [esp+310h+var_260]
0x9404D4: sub     ecx, eax
0x9404D6: addps   xmm2, xmm1
0x9404D9: movaps  xmmword ptr [ecx+10h], xmm2
0x9404DD: jmp     short loc_9404E1
0x9404DF: fstp    st
0x9404E1: fld     [esp+310h+var_2F0]
0x9404E5: fsub    [esp+310h+var_2F8]
0x9404E9: fld     [esp+310h+var_2FC]
0x9404ED: fsub    [esp+310h+var_2F8]
0x9404F1: fld     st
0x9404F3: fmul    st, st(2)
0x9404F5: fcomp   dword ptr ds:0A2FAA8h
0x9404FB: fnstsw  ax
0x9404FD: test    ah, 5
0x940500: jp      loc_93FB9E
0x940506: fld     st(1)
0x940508: push    ecx
0x940509: fsub    st, st(1)
0x94050B: lea     ecx, [esp+314h+var_210]
0x940512: fdivr   st, st(2)
0x940514: fstp    [esp+314h+var_314]
0x940517: fstp    st
0x940519: fstp    st
0x94051B: call    sub_535AA0
0x940520: movaps  xmm0, [esp+310h+var_210]
0x940528: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x94052F: mov     eax, [esp+310h+var_2EC]
0x940533: shufps  xmm0, xmm0, 0
0x940537: subps   xmm2, xmm0
0x94053A: mulps   xmm2, [esp+310h+var_270]
0x940542: movaps  xmm1, xmm0
0x940545: mulps   xmm1, [esp+310h+var_260]
0x94054D: shl     eax, 4
0x940550: addps   xmm2, xmm1
0x940553: movaps  xmmword ptr [eax+edi], xmm2
0x940557: jmp     loc_93FBA2
0x94055C: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD case 5
0x940560: lea     esi, [esi+edx+2]
0x940564: jmp     loc_93FBA2
0x940569: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD case 6
0x94056D: movzx   ecx, byte ptr [esi+2]
0x940571: shl     eax, 8
0x940574: add     ecx, esi
0x940576: lea     esi, [ecx+eax+3]
0x94057A: jmp     loc_93FBA2
0x94057F: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD case 7
0x940583: movzx   eax, byte ptr [esi+2]
0x940587: movzx   ecx, byte ptr [esi+3]
0x94058B: shl     edx, 8
0x94058E: add     edx, eax
0x940590: shl     edx, 8
0x940593: add     ecx, esi
0x940595: lea     esi, [ecx+edx+4]
0x940599: jmp     loc_93FBA2
0x94059E: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD cases 1-4
0x9405A2: movzx   eax, byte ptr [esi+2]
0x9405A6: movaps  xmm2, xmmword ptr [edi]
0x9405A9: mov     [esp+310h+var_300], edx
0x9405AD: movzx   edx, byte ptr [esi+3]
0x9405B1: fild    [esp+310h+var_300]
0x9405B5: mov     [esp+310h+var_300], eax
0x9405B9: mov     eax, 1
0x9405BE: fstp    dword ptr [esp+310h+var_2D0]
0x9405C2: shl     eax, cl
0x9405C4: fild    [esp+310h+var_300]
0x9405C8: mov     [esp+310h+var_300], edx
0x9405CC: mov     dword ptr [esp+310h+var_2D0+0Ch], 0
0x9405D4: fstp    dword ptr [esp+310h+var_2D0+4]
0x9405D8: fild    [esp+310h+var_300]
0x9405DC: mov     [esp+310h+var_300], eax
0x9405E0: fstp    dword ptr [esp+310h+var_2D0+8]
0x9405E4: movaps  xmm1, [esp+310h+var_2D0]
0x9405E9: fild    [esp+310h+var_300]
0x9405ED: subps   xmm2, xmm1
0x9405F0: movaps  xmmword ptr [edi], xmm2
0x9405F3: movaps  xmm2, xmmword ptr [edi+10h]
0x9405F7: subps   xmm2, xmm1
0x9405FA: fst     [esp+310h+var_300]
0x9405FE: movss   xmm0, [esp+310h+var_300]
0x940604: fld     st
0x940606: movaps  xmmword ptr [edi+10h], xmm2
0x94060A: movaps  xmm2, xmmword ptr [edi]
0x94060D: shufps  xmm0, xmm0, 0
0x940611: mulps   xmm2, xmm0
0x940614: movaps  xmmword ptr [edi], xmm2
0x940617: movaps  xmm2, xmmword ptr [edi+10h]
0x94061B: mulps   xmm2, xmm0
0x94061E: movaps  xmmword ptr [edi+10h], xmm2
0x940622: movaps  xmm2, xmmword ptr [ebx]
0x940625: addps   xmm2, xmm1
0x940628: mulps   xmm2, xmm0
0x94062B: movaps  [esp+310h+var_2C0], xmm2
0x940630: mov     edx, [ebx+24h]
0x940633: add     edx, ecx
0x940635: mov     [esp+310h+var_29C], edx
0x940639: fmul    dword ptr [ebx+28h]
0x94063C: add     esi, 4
0x94063F: fstp    [esp+310h+var_298]
0x940643: movaps  xmm1, xmmword ptr [ebx+10h]
0x940647: mulps   xmm0, xmm1
0x94064A: movaps  [esp+310h+var_2B0], xmm0
0x94064F: fmul    dword ptr [ebx+20h]
0x940652: fstp    [esp+310h+var_2A0]
0x940656: mov     eax, [ebx+30h]
0x940659: mov     [esp+310h+var_290], eax
0x940660: mov     ecx, [ebx+2Ch]
0x940663: mov     [esp+310h+var_294], ecx
0x940667: lea     ebx, [esp+310h+var_2C0]
0x94066B: jmp     loc_93FBA2
0x940670: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD case 9
0x940674: lea     eax, [esp+310h+var_2C0]
0x940678: cmp     ebx, eax
0x94067A: mov     [esp+310h+var_300], edx
0x94067E: jz      short loc_94068E
0x940680: push    ebx
0x940681: lea     ecx, [esp+314h+var_2C0]
0x940685: call    sub_93FB40
0x94068A: lea     ebx, [esp+310h+var_2C0]
0x94068E: mov     edx, [esp+310h+var_294]
0x940692: mov     ecx, [esp+310h+var_300]
0x940696: add     edx, ecx
0x940698: mov     [esp+310h+var_294], edx
0x94069C: add     esi, 2
0x94069F: jmp     loc_93FBA2
0x9406A4: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD case 10
0x9406A8: movzx   edx, byte ptr [esi+2]
0x9406AC: shl     eax, 8
0x9406AF: add     eax, edx
0x9406B1: lea     ecx, [esp+310h+var_2C0]
0x9406B5: cmp     ebx, ecx
0x9406B7: mov     [esp+310h+var_300], eax
0x9406BB: jz      short loc_9406CF
0x9406BD: push    ebx
0x9406BE: lea     ecx, [esp+314h+var_2C0]
0x9406C2: call    sub_93FB40
0x9406C7: mov     eax, [esp+310h+var_300]
0x9406CB: lea     ebx, [esp+310h+var_2C0]
0x9406CF: add     [esp+310h+var_294], eax
0x9406D3: add     esi, 3
0x9406D6: jmp     loc_93FBA2
0x9406DB: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD case 11
0x9406DF: movzx   edx, byte ptr [esi+2]
0x9406E3: movzx   ecx, byte ptr [esi+3]
0x9406E7: shl     eax, 8
0x9406EA: add     eax, edx
0x9406EC: movzx   edx, byte ptr [esi+4]
0x9406F0: shl     eax, 8
0x9406F3: add     eax, ecx
0x9406F5: shl     eax, 8
0x9406F8: add     eax, edx
0x9406FA: lea     ecx, [esp+310h+var_2C0]
0x9406FE: cmp     ebx, ecx
0x940700: mov     [esp+310h+var_300], eax
0x940704: jz      short loc_940718
0x940706: push    ebx
0x940707: lea     ecx, [esp+314h+var_2C0]
0x94070B: call    sub_93FB40
0x940710: mov     eax, [esp+310h+var_300]
0x940714: lea     ebx, [esp+310h+var_2C0]
0x940718: mov     [esp+310h+var_294], eax
0x94071C: add     esi, 5
0x94071F: jmp     loc_93FBA2
0x940724: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD cases 96-99
0x940728: add     esi, 2
0x94072B: mov     [esp+ecx*4+310h+var_410], eax
0x940732: jmp     short loc_940776
0x940734: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD cases 100-103
0x940738: movzx   eax, byte ptr [esi+2]
0x94073C: shl     edx, 8
0x94073F: add     edx, eax
0x940741: mov     [esp+ecx*4+310h+var_420], edx
0x940748: add     esi, 3
0x94074B: jmp     short loc_940776
0x94074D: movzx   edx, byte ptr [esi+1]; jumptable 0093FBBD cases 104-107
0x940751: movzx   eax, byte ptr [esi+2]
0x940755: shl     edx, 8
0x940758: add     edx, eax
0x94075A: movzx   eax, byte ptr [esi+3]
0x94075E: shl     edx, 8
0x940761: add     edx, eax
0x940763: movzx   eax, byte ptr [esi+4]
0x940767: shl     edx, 8
0x94076A: add     edx, eax
0x94076C: mov     [esp+ecx*4+310h+var_430], edx
0x940773: add     esi, 5
0x940776: mov     eax, [esp+310h+var_290]
0x94077D: lea     ecx, [esp+310h+var_2C0]
0x940781: cmp     ebx, ecx
0x940783: jz      short loc_9407B6
0x940785: movaps  xmm0, xmmword ptr [ebx]
0x940788: movaps  [esp+310h+var_2C0], xmm0
0x94078D: movaps  xmm0, xmmword ptr [ebx+10h]
0x940791: movaps  [esp+310h+var_2B0], xmm0
0x940796: mov     edx, [ebx+20h]
0x940799: mov     [esp+310h+var_2A0], edx
0x94079D: mov     ecx, [ebx+24h]
0x9407A0: mov     [esp+310h+var_29C], ecx
0x9407A4: mov     edx, [ebx+28h]
0x9407A7: mov     [esp+310h+var_298], edx
0x9407AB: mov     ecx, [ebx+2Ch]
0x9407AE: mov     [esp+310h+var_294], ecx
0x9407B2: lea     ebx, [esp+310h+var_2C0]
0x9407B6: mov     [esp+310h+var_290], eax
0x9407BD: jmp     loc_93FBA2
0x9407C2: push    ecx; jumptable 0093FBBD default case, cases 8,12-15,29-31,44-47,84-95
0x9407C3: mov     eax, esp
0x9407C5: push    200h
0x9407CA: lea     edx, [esp+318h+var_200]
0x9407D1: push    edx
0x9407D2: lea     ecx, [esp+31Ch+var_24C]
0x9407D9: mov     byte ptr [eax], 1
0x9407DC: call    sub_8BBFB0
0x9407E1: push    offset aUnknownCommand; "Unknown command.\n"
0x9407E6: lea     ecx, [esp+314h+var_24C]
0x9407ED: call    sub_8BBDB0
0x9407F2: mov     ecx, ds:0BA7FB0h
0x9407F8: mov     eax, [ecx]
0x9407FA: push    1C7h
0x9407FF: push    offset a_CollideMoppMa; ".\\collide\\mopp\\machine\\hkMoppAabbCa"...
0x940804: lea     edx, [esp+318h+var_200]
0x94080B: push    edx
0x94080C: push    1298FEDDh
0x940811: push    3
0x940813: call    dword ptr [eax+8]
0x940816: lea     ecx, [esp+310h+var_24C]
0x94081D: call    sub_8BC000
0x940822: jmp     loc_93FBA2
0x940827: movzx   edi, byte ptr [esi+1]; jumptable 0093FBBD case 80
0x94082B: jmp     short loc_940879
0x94082D: movzx   edi, byte ptr [esi+1]; jumptable 0093FBBD case 81
0x940831: movzx   eax, byte ptr [esi+2]
0x940835: shl     edi, 8
0x940838: add     edi, eax
0x94083A: jmp     short loc_940879
0x94083C: movzx   edi, byte ptr [esi+1]; jumptable 0093FBBD case 82
0x940840: movzx   ecx, byte ptr [esi+2]
0x940844: movzx   edx, byte ptr [esi+3]
0x940848: shl     edi, 8
0x94084B: add     edi, ecx
0x94084D: shl     edi, 8
0x940850: add     edi, edx
0x940852: jmp     short loc_940879
0x940854: movzx   eax, byte ptr [esi+1]; jumptable 0093FBBD case 83
0x940858: movzx   ecx, byte ptr [esi+2]
0x94085C: movzx   edx, byte ptr [esi+3]
0x940860: shl     eax, 8
0x940863: add     eax, ecx
0x940865: movzx   ecx, byte ptr [esi+4]
0x940869: shl     eax, 10h
0x94086C: shl     edx, 8
0x94086F: add     ecx, eax
0x940871: lea     edi, [ecx+edx]
0x940874: jmp     short loc_940879
0x940876: lea     edi, [ecx-30h]; jumptable 0093FBBD cases 48-79
0x940879: add     edi, [ebx+2Ch]
0x94087C: mov     edx, [esp+310h+var_2E8]
0x940880: mov     eax, [edx+2Ch]
0x940883: mov     ecx, [eax+38h]
0x940886: mov     edx, [ecx]
0x940888: mov     esi, [edx+0Ch]
0x94088B: mov     edx, [eax+30h]
0x94088E: mov     ecx, [edx+4]
0x940891: mov     ebx, [ecx]
0x940893: push    edi
0x940894: mov     [esp+314h+var_2D4], ecx
0x940898: mov     ecx, [eax+38h]
0x94089B: mov     eax, [eax+34h]
0x94089E: push    esi
0x94089F: push    ecx
0x9408A0: push    eax
0x9408A1: push    edx
0x9408A2: lea     ecx, [esp+324h+var_2D5]
0x9408A6: push    ecx
0x9408A7: mov     ecx, [esp+328h+var_2D4]
0x9408AB: call    dword ptr [ebx]
0x9408AD: cmp     byte ptr [eax], 0
0x9408B0: jz      short loc_940930; jumptable 0093FBBD case 0
0x9408B2: mov     edx, [esi]
0x9408B4: lea     eax, [esp+310h+var_200]
0x9408BB: push    eax
0x9408BC: push    edi
0x9408BD: mov     ecx, esi
0x9408BF: call    dword ptr [edx+28h]
0x9408C2: mov     esi, [esp+310h+var_2E8]
0x9408C6: mov     ecx, [esi+2Ch]
0x9408C9: mov     ecx, [ecx+38h]
0x9408CC: mov     dword ptr [esp+310h+var_2D0+0Ch], ecx
0x9408D0: mov     edx, [ecx+8]
0x9408D3: mov     dword ptr [esp+310h+var_2D0+8], edx
0x9408D7: mov     dword ptr [esp+310h+var_2D0], eax
0x9408DB: mov     dword ptr [esp+310h+var_2D0+4], edi
0x9408DF: mov     edx, [eax]
0x9408E1: mov     ecx, eax
0x9408E3: call    dword ptr [edx+8]
0x9408E6: mov     ecx, [esi+2Ch]
0x9408E9: mov     edx, [ecx+30h]
0x9408EC: mov     ebx, [esi+18h]
0x9408EF: mov     edi, [edx]
0x9408F1: mov     ecx, [ecx+34h]
0x9408F4: shl     ebx, 5
0x9408F7: add     ebx, edi
0x9408F9: movzx   eax, byte ptr [ebx+eax+190h]
0x940901: mov     ebx, [esi+28h]
0x940904: push    ebx
0x940905: mov     ebx, [esi+24h]
0x940908: push    ebx
0x940909: push    edx
0x94090A: lea     edx, [esp+31Ch+var_2D0]
0x94090E: add     eax, 7Bh ; '{'
0x940911: push    edx
0x940912: lea     eax, [eax+eax*4]
0x940915: push    ecx
0x940916: call    dword ptr [edi+eax*4]
0x940919: mov     edx, [esi+24h]
0x94091C: mov     eax, [edx+4]
0x94091F: add     esp, 14h
0x940922: mov     [esi+1Ch], eax
0x940925: pop     edi
0x940926: pop     esi
0x940927: pop     ebx
0x940928: mov     esp, ebp
0x94092A: pop     ebp
0x94092B: retn    0Ch
0x94092E: fstp    st
0x940930: pop     edi; jumptable 0093FBBD case 0
0x940931: pop     esi
0x940932: pop     ebx
0x940933: mov     esp, ebp
0x940935: pop     ebp
0x940936: retn    0Ch
