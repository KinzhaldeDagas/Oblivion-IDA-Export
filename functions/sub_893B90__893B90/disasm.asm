0x893B90: push    ebp
0x893B91: mov     ebp, esp
0x893B93: and     esp, 0FFFFFFF0h
0x893B96: push    0FFFFFFFFh
0x893B98: push    offset SEH_893B90
0x893B9D: mov     eax, large fs:0
0x893BA3: push    eax
0x893BA4: sub     esp, 1A8h
0x893BAA: mov     eax, ds:0B30AACh
0x893BAF: xor     eax, esp
0x893BB1: mov     [esp+1B4h+var_14], eax
0x893BB8: push    ebx
0x893BB9: push    esi
0x893BBA: push    edi
0x893BBB: mov     eax, ds:0B30AACh
0x893BC0: xor     eax, esp
0x893BC2: push    eax
0x893BC3: lea     eax, [esp+1C4h+var_C]
0x893BCA: mov     large fs:0, eax
0x893BD0: mov     eax, [ebp+arg_0]
0x893BD3: fld     dword ptr ds:0A96588h
0x893BD9: mov     ebx, ecx
0x893BDB: mov     ecx, [ebp+arg_4]
0x893BDE: fst     dword ptr [ebx+54h]
0x893BE1: and     dword ptr [ebx+4], 0FFFFFFFBh
0x893BE5: fstp    dword ptr [ebx+50h]
0x893BE8: xorps   xmm0, xmm0
0x893BEB: mov     [esp+1C4h+var_174], eax
0x893BEF: movaps  xmmword ptr [ebx+40h], xmm0
0x893BF3: xor     eax, eax
0x893BF5: test    byte ptr [ebx+6], 1
0x893BF9: mov     [esp+1C4h+var_190], ecx
0x893BFD: movaps  [esp+1C4h+var_160], xmm0
0x893C02: jz      short loc_893C0A
0x893C04: mov     [ebx+1C8h], eax
0x893C0A: movaps  xmm0, xmmword ptr [ebx+0C0h]
0x893C11: lea     esi, [ebx-1F0h]
0x893C17: cmp     esi, eax
0x893C19: mov     [ebx+1C4h], eax
0x893C1F: mov     [esp+1C4h+var_188], eax
0x893C23: mov     [esp+1C4h+var_18C], eax
0x893C27: mov     [esp+1C4h+var_1AD], al
0x893C2B: movaps  xmmword ptr [ebx+40h], xmm0
0x893C2F: jz      short loc_893C3D
0x893C31: mov     ecx, [esi+8]
0x893C34: cmp     ecx, eax
0x893C36: jz      short loc_893C3D
0x893C38: call    sub_8AC0A0
0x893C3D: cmp     dword ptr [ebx+17Ch], 1
0x893C44: fldz
0x893C46: fstp    [esp+1C4h+var_16C]
0x893C4A: mov     [esp+1C4h+var_1AF], 0
0x893C4F: setz    al
0x893C52: test    al, al
0x893C54: mov     [esp+1C4h+var_199], al
0x893C58: jnz     loc_893E28
0x893C5E: mov     edx, [ebx+4]
0x893C61: shr     edx, 1
0x893C63: test    dl, 1
0x893C66: jnz     loc_893E28
0x893C6C: test    esi, esi
0x893C6E: jz      loc_893E28
0x893C74: mov     ecx, [esi+8]
0x893C77: test    ecx, ecx
0x893C79: jz      loc_893E28
0x893C7F: call    sub_8AC0C0
0x893C84: test    eax, eax
0x893C86: mov     [esp+1C4h+var_1A4], eax
0x893C8A: jz      loc_893E28
0x893C90: mov     eax, [ebx+184h]
0x893C96: test    eax, eax
0x893C98: jz      loc_893E28
0x893C9E: mov     edi, [eax+8]
0x893CA1: test    edi, edi
0x893CA3: jz      loc_893E28
0x893CA9: mov     eax, [edi]
0x893CAB: mov     edx, [eax+8]
0x893CAE: mov     ecx, edi
0x893CB0: call    edx
0x893CB2: cmp     eax, 0Ch
0x893CB5: jnz     loc_893E28
0x893CBB: mov     eax, [edi]
0x893CBD: mov     edx, [eax+1Ch]
0x893CC0: mov     ecx, edi
0x893CC2: call    edx
0x893CC4: cmp     eax, 3
0x893CC7: jnz     loc_893E28
0x893CCD: mov     eax, [edi+10h]
0x893CD0: mov     esi, [eax+8]
0x893CD3: test    esi, esi
0x893CD5: jz      loc_893E28
0x893CDB: mov     edx, [esi]
0x893CDD: mov     eax, [edx+8]
0x893CE0: mov     ecx, esi
0x893CE2: call    eax
0x893CE4: cmp     eax, 8
0x893CE7: jnz     loc_893E28
0x893CED: fld     dword ptr [esi+0Ch]
0x893CF0: mov     eax, [esp+1C4h+var_1A4]
0x893CF4: movaps  xmm0, xmmword ptr [esi+10h]
0x893CF8: fstp    [esp+1C4h+var_1A0]
0x893CFC: fldz
0x893CFE: lea     ecx, [esp+1C4h+var_F0]
0x893D05: fst     dword ptr [esp+1C4h+var_140]
0x893D0C: add     eax, 70h ; 'p'
0x893D0F: fst     dword ptr [esp+1C4h+var_140+4]
0x893D16: push    ecx
0x893D17: fld     [esp+1C8h+var_1A0]
0x893D1B: push    eax
0x893D1C: fstp    dword ptr [esp+1CCh+var_140+8]
0x893D23: lea     ecx, [esp+1CCh+var_A0]
0x893D2A: mov     [esp+1CCh+var_1A4], eax
0x893D2E: fstp    dword ptr [esp+1CCh+var_140+0Ch]
0x893D35: movaps  xmm1, [esp+1CCh+var_140]
0x893D3D: addps   xmm0, xmm1
0x893D40: movaps  [esp+1CCh+var_F0], xmm0
0x893D48: call    sub_88FCC0
0x893D4D: mov     edx, [edi+10h]
0x893D50: mov     esi, [edx+10h]
0x893D53: test    esi, esi
0x893D55: jz      loc_893E28
0x893D5B: mov     eax, [esi]
0x893D5D: mov     edx, [eax+8]
0x893D60: mov     ecx, esi
0x893D62: call    edx
0x893D64: cmp     eax, 8
0x893D67: jnz     loc_893E28
0x893D6D: fld     dword ptr [esi+0Ch]
0x893D70: mov     ecx, [esp+1C4h+var_1A4]
0x893D74: movaps  xmm0, xmmword ptr [esi+10h]
0x893D78: fstp    [esp+1C4h+var_1A0]
0x893D7C: fldz
0x893D7E: lea     eax, [esp+1C4h+var_110]
0x893D85: fst     dword ptr [esp+1C4h+var_140]
0x893D8C: push    eax
0x893D8D: fst     dword ptr [esp+1C8h+var_140+4]
0x893D94: push    ecx
0x893D95: fld     [esp+1CCh+var_1A0]
0x893D99: lea     ecx, [esp+1CCh+var_B0]
0x893DA0: fstp    dword ptr [esp+1CCh+var_140+8]
0x893DA7: fstp    dword ptr [esp+1CCh+var_140+0Ch]
0x893DAE: movaps  xmm1, [esp+1CCh+var_140]
0x893DB6: addps   xmm0, xmm1
0x893DB9: movaps  [esp+1CCh+var_110], xmm0
0x893DC1: call    sub_88FCC0
0x893DC6: fld     dword ptr [esi+0Ch]
0x893DC9: fstp    [esp+1C4h+var_1A0]
0x893DCD: push    0; int
0x893DCF: fld     [esp+1C8h+var_1A0]
0x893DD3: push    0FF0000FFh; int
0x893DD8: fmul    qword ptr ds:0A74D10h
0x893DDE: push    ecx
0x893DDF: mov     ecx, ds:0BA7DA0h
0x893DE5: lea     edx, [esp+1D0h+var_A0]
0x893DEC: fstp    [esp+1D0h+var_16C]
0x893DF0: mov     [esp+1D0h+var_1AF], 1
0x893DF5: fld     dword ptr ds:0A46B10h
0x893DFB: fstp    [esp+1D0h+var_1D0]; float
0x893DFE: push    edx; int
0x893DFF: call    sub_8A7930
0x893E04: fld     dword ptr ds:0A46B10h
0x893E0A: push    0; int
0x893E0C: push    0FF008000h; int
0x893E11: push    ecx
0x893E12: mov     ecx, ds:0BA7DA0h
0x893E18: fstp    [esp+1D0h+var_1D0]; float
0x893E1B: lea     eax, [esp+1D0h+var_B0]
0x893E22: push    eax; int
0x893E23: call    sub_8A7930
0x893E28: mov     ecx, [esp+1C4h+var_190]
0x893E2C: mov     eax, [ecx+4Ch]
0x893E2F: test    eax, eax
0x893E31: mov     [esp+1C4h+var_168], eax
0x893E35: mov     [esp+1C4h+var_194], 0
0x893E3D: jle     loc_894834
0x893E43: mov     eax, [esp+1C4h+var_194]
0x893E47: mov     ecx, [esp+1C4h+var_174]
0x893E4B: mov     esi, [ecx]
0x893E4D: mov     edx, [esp+1C4h+var_190]
0x893E51: mov     edi, eax
0x893E53: lea     eax, [eax+eax*2]
0x893E56: shl     eax, 4
0x893E59: add     esi, eax
0x893E5B: shl     edi, 6
0x893E5E: add     edi, [edx+48h]
0x893E61: mov     [esp+1C4h+var_164], eax
0x893E65: mov     eax, [esi+28h]
0x893E68: cmp     byte ptr [eax+18h], 1
0x893E6C: mov     [esp+1C4h+var_1A0], edi
0x893E70: mov     [esp+1C4h+var_170], esi
0x893E74: jnz     short loc_893E7D
0x893E76: mov     ecx, [eax+10h]
0x893E79: add     ecx, eax
0x893E7B: jmp     short loc_893E7F
0x893E7D: xor     ecx, ecx
0x893E7F: mov     eax, [eax+1Ch]
0x893E82: movaps  xmm0, xmmword ptr [esi+10h]
0x893E86: and     eax, 3Fh
0x893E89: mov     [esp+1C4h+var_1A4], eax
0x893E8D: mov     eax, [ebx+4]
0x893E90: shr     eax, 0Bh
0x893E93: not     al
0x893E95: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x893E99: and     al, 1
0x893E9B: test    ecx, ecx
0x893E9D: movss   [esp+1C4h+var_150], xmm0
0x893EA3: fld     [esp+1C4h+var_150]
0x893EA7: fst     [esp+1C4h+var_1AC]
0x893EAB: mov     [esp+1C4h+var_1A8], ecx
0x893EAF: mov     [esp+1C4h+var_1B0], al
0x893EB3: jz      loc_8942F3
0x893EB9: fcomp   qword ptr ds:0A968D0h
0x893EBF: fnstsw  ax
0x893EC1: test    ah, 41h
0x893EC4: jnz     loc_8942F5
0x893ECA: mov     edx, ecx
0x893ECC: mov     ecx, [edx+50h]
0x893ECF: mov     eax, [ecx]
0x893ED1: mov     edx, [eax+8]
0x893ED4: call    edx
0x893ED6: cmp     eax, 6
0x893ED9: jnz     loc_8942F5
0x893EDF: cmp     dword ptr ds:0BA7A5Ch, 0
0x893EE6: jnz     loc_8942F5
0x893EEC: lea     eax, [esp+1C4h+var_110]
0x893EF3: push    eax
0x893EF4: lea     ecx, [ebx-1F0h]
0x893EFA: call    sub_8914C0
0x893EFF: fld     dword ptr [ebx+58h]
0x893F02: fadd    dword ptr [esp+1C4h+var_110+8]
0x893F09: movaps  xmm0, xmmword ptr [esi]
0x893F0C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x893F10: movss   [esp+1C4h+var_150], xmm0
0x893F16: fstp    dword ptr [esp+1C4h+var_110+8]
0x893F1D: movaps  xmm0, [esp+1C4h+var_110]
0x893F25: fld     [esp+1C4h+var_150]
0x893F29: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x893F2D: movss   [esp+1C4h+var_130], xmm0
0x893F36: fld     [esp+1C4h+var_130]
0x893F3D: fcompp
0x893F3F: fnstsw  ax
0x893F41: test    ah, 1
0x893F44: jnz     loc_8942F5
0x893F4A: fld1
0x893F4C: xor     ecx, ecx
0x893F4E: fst     [esp+1C4h+var_3C]
0x893F55: mov     [esp+1C4h+var_60], offset ??_7hkClosestRayHitCollector@@6B@; const hkClosestRayHitCollector::`vftable'
0x893F60: fstp    [esp+1C4h+var_5C]
0x893F67: mov     [esp+1C4h+var_30], ecx
0x893F6E: xor     edi, edi
0x893F70: mov     [esp+1C4h+var_4], ecx
0x893F77: mov     [esp+1C4h+var_180], edi
0x893F7B: mov     [esp+1C4h+var_17C], ecx
0x893F7F: mov     [esp+1C4h+var_178], 80000000h
0x893F87: mov     eax, [ebx+174h]
0x893F8D: mov     esi, [eax+8]
0x893F90: mov     eax, [esi+124h]
0x893F96: cmp     eax, ecx
0x893F98: mov     byte ptr [esp+1C4h+var_4], 1
0x893FA0: jle     short loc_893FE2
0x893FA2: mov     edx, ds:0BA9DE4h
0x893FA8: mov     edi, large fs:2Ch
0x893FAF: mov     edx, [edi+edx*4]
0x893FB2: mov     edx, [edx+19Ch]
0x893FB8: cmp     edx, ecx
0x893FBA: mov     ecx, edx
0x893FBC: jnz     short loc_893FC4
0x893FBE: mov     ecx, ds:0BA7D9Ch
0x893FC4: add     eax, eax
0x893FC6: push    14h
0x893FC8: add     eax, eax
0x893FCA: push    eax
0x893FCB: call    sub_8A7560
0x893FD0: mov     edi, eax
0x893FD2: mov     eax, [esi+124h]
0x893FD8: mov     [esp+1C4h+var_180], edi
0x893FDC: mov     [esp+1C4h+var_178], eax
0x893FE0: xor     ecx, ecx
0x893FE2: mov     esi, [esi+120h]
0x893FE8: mov     edx, eax
0x893FEA: cmp     edx, ecx
0x893FEC: mov     [esp+1C4h+var_17C], edx
0x893FF0: jle     short loc_894005
0x893FF2: mov     ecx, esi
0x893FF4: mov     eax, edi
0x893FF6: sub     ecx, edi
0x893FF8: mov     esi, [ecx+eax]
0x893FFB: mov     [eax], esi
0x893FFD: add     eax, 4
0x894000: sub     edx, 1
0x894003: jnz     short loc_893FF8
0x894005: fldz
0x894007: mov     ecx, [esp+1C4h+var_170]
0x89400B: movaps  xmm0, xmmword ptr [ecx]
0x89400E: fst     dword ptr [esp+1C4h+var_C0]
0x894015: fst     dword ptr [esp+1C4h+var_C0+4]
0x89401C: xor     esi, esi
0x89401E: cmp     [esp+1C4h+var_17C], esi
0x894022: fld     dword ptr ds:0A968C8h
0x894028: fstp    dword ptr [esp+1C4h+var_C0+8]
0x89402F: fst     dword ptr [esp+1C4h+var_C0+0Ch]
0x894036: movaps  xmm1, [esp+1C4h+var_C0]
0x89403E: fst     dword ptr [esp+1C4h+var_E0]
0x894045: addps   xmm0, xmm1
0x894048: fst     dword ptr [esp+1C4h+var_E0+4]
0x89404F: movaps  [esp+1C4h+var_100], xmm0
0x894057: fld     dword ptr ds:0A968C4h
0x89405D: fstp    dword ptr [esp+1C4h+var_E0+8]
0x894064: fstp    dword ptr [esp+1C4h+var_E0+0Ch]
0x89406B: movaps  xmm1, [esp+1C4h+var_E0]
0x894073: fld     dword ptr ds:0A968C0h
0x894079: subps   xmm0, xmm1
0x89407C: fstp    dword ptr ds:0BA7A58h
0x894082: movaps  [esp+1C4h+var_F0], xmm0
0x89408A: jle     loc_894295
0x894090: mov     eax, [edi+esi*4]
0x894093: test    eax, eax
0x894095: jz      loc_894288
0x89409B: cmp     byte ptr [eax+18h], 1
0x89409F: jnz     loc_894288
0x8940A5: mov     ecx, [eax+10h]
0x8940A8: add     ecx, eax
0x8940AA: jz      loc_894288
0x8940B0: cmp     byte ptr [eax+18h], 1
0x8940B4: jnz     short loc_8940BD
0x8940B6: mov     ecx, [eax+10h]
0x8940B9: add     ecx, eax
0x8940BB: jmp     short loc_8940BF
0x8940BD: xor     ecx, ecx
0x8940BF: mov     ecx, [ecx+50h]
0x8940C2: mov     edx, [ecx]
0x8940C4: mov     eax, [edx+8]
0x8940C7: call    eax
0x8940C9: cmp     eax, 6
0x8940CC: jnz     loc_894288
0x8940D2: fld1
0x8940D4: xor     eax, eax
0x8940D6: fstp    [esp+1C4h+var_11C]
0x8940DD: mov     [esp+1C4h+var_70], eax
0x8940E4: mov     [esp+1C4h+var_6C], eax
0x8940EB: mov     ecx, [edi+esi*4]
0x8940EE: mov     eax, [ecx+8]
0x8940F1: lea     edx, [esp+1C4h+var_100]
0x8940F8: push    edx
0x8940F9: push    eax
0x8940FA: lea     ecx, [esp+1CCh+var_90]
0x894101: call    sub_88FD10
0x894106: mov     eax, [edi+esi*4]
0x894109: mov     eax, [eax+8]
0x89410C: lea     ecx, [esp+1C4h+var_F0]
0x894113: push    ecx
0x894114: push    eax
0x894115: lea     ecx, [esp+1CCh+var_80]
0x89411C: call    sub_88FD10
0x894121: mov     eax, [edi+esi*4]
0x894124: mov     ecx, [eax]
0x894126: mov     edx, [ecx]
0x894128: mov     edx, [edx+14h]
0x89412B: lea     eax, [esp+1C4h+var_130]
0x894132: push    eax
0x894133: lea     eax, [esp+1C8h+var_90]
0x89413A: push    eax
0x89413B: lea     eax, [esp+1CCh+var_181]
0x89413F: push    eax
0x894140: call    edx
0x894142: fld1
0x894144: fcomp   [esp+1C4h+var_11C]
0x89414B: fnstsw  ax
0x89414D: test    ah, 41h
0x894150: jnz     loc_894288
0x894156: mov     eax, [edi+esi*4]
0x894159: mov     eax, [eax+1Ch]
0x89415C: and     eax, 3Fh
0x89415F: cmp     [esp+1C4h+var_120], 0FFFFFFFFh
0x894167: mov     [ebx+28h], eax
0x89416A: jnz     short loc_89418F
0x89416C: mov     eax, [edi+esi*4]
0x89416F: mov     eax, [eax]
0x894171: test    eax, eax
0x894173: jz      short loc_89417A
0x894175: mov     eax, [eax+8]
0x894178: jmp     short loc_89417C
0x89417A: xor     eax, eax
0x89417C: test    eax, eax
0x89417E: jz      short loc_8941E5
0x894180: mov     eax, [eax+10h]
0x894183: cmp     eax, 1Eh
0x894186: jl      short loc_8941D7
0x894188: mov     eax, 1Eh
0x89418D: jmp     short loc_8941D7
0x89418F: cmp     eax, 11h
0x894192: jz      short loc_8941E5
0x894194: mov     ecx, [edi+esi*4]
0x894197: push    ecx
0x894198: call    sub_8AFBE0
0x89419D: add     esp, 4
0x8941A0: test    eax, eax
0x8941A2: mov     [esp+1C4h+var_198], eax
0x8941A6: jz      short loc_8941E5
0x8941A8: mov     ecx, eax
0x8941AA: mov     edx, [ecx]
0x8941AC: mov     eax, [esp+1C4h+var_120]
0x8941B3: mov     edx, [edx+9Ch]
0x8941B9: push    eax
0x8941BA: call    edx
0x8941BC: cmp     eax, 1Eh
0x8941BF: jge     short loc_8941E5
0x8941C1: mov     ecx, [esp+1C4h+var_198]
0x8941C5: mov     eax, [ecx]
0x8941C7: mov     edx, [esp+1C4h+var_120]
0x8941CE: mov     eax, [eax+9Ch]
0x8941D4: push    edx
0x8941D5: call    eax
0x8941D7: cmp     eax, 0Fh
0x8941DA: jl      short loc_8941E5
0x8941DC: cmp     eax, 1Dh
0x8941DF: jle     loc_894288
0x8941E5: fld     dword ptr [esp+1C4h+var_F0+8]
0x8941EC: fld     dword ptr [esp+1C4h+var_100+8]
0x8941F3: fld     st
0x8941F5: fsubp   st(2), st
0x8941F7: fld     [esp+1C4h+var_11C]
0x8941FE: fmulp   st(2), st
0x894200: faddp   st(1), st
0x894202: fstp    [esp+1C4h+var_198]
0x894206: fld     [esp+1C4h+var_198]
0x89420A: fld     dword ptr ds:0BA7A58h
0x894210: fcomp   st(1)
0x894212: fnstsw  ax
0x894214: test    ah, 5
0x894217: jp      short loc_894286
0x894219: fstp    dword ptr ds:0BA7A58h
0x89421F: mov     ecx, [edi+esi*4]
0x894222: push    ecx
0x894223: call    sub_47DE00
0x894228: fld     dword ptr [esp+1C8h+var_100]
0x89422F: fstp    [esp+1C8h+var_D0]
0x894236: add     esp, 4
0x894239: fld     dword ptr [esp+1C4h+var_100+4]
0x894240: push    0; int
0x894242: fstp    [esp+1C8h+var_CC]
0x894249: push    0FFFFFF00h; int
0x89424E: fld     [esp+1CCh+var_198]
0x894252: push    ecx
0x894253: mov     ecx, ds:0BA7DA0h
0x894259: fstp    [esp+1D0h+var_C8]
0x894260: fldz
0x894262: lea     edx, [esp+1D0h+var_D0]
0x894269: fstp    [esp+1D0h+var_C4]
0x894270: mov     ds:0BA7A5Ch, eax
0x894275: fld     dword ptr ds:0A46B10h
0x89427B: fstp    [esp+1D0h+var_1D0]; float
0x89427E: push    edx; int
0x89427F: call    sub_8A7930
0x894284: jmp     short loc_894288
0x894286: fstp    st
0x894288: add     esi, 1
0x89428B: cmp     esi, [esp+1C4h+var_17C]
0x89428F: jl      loc_894090
0x894295: test    [esp+1C4h+var_178], 80000000h
0x89429D: mov     byte ptr [esp+1C4h+var_4], 0
0x8942A5: jnz     short loc_8942DE
0x8942A7: mov     eax, large fs:2Ch
0x8942AD: mov     ecx, ds:0BA9DE4h
0x8942B3: mov     edx, [eax+ecx*4]
0x8942B6: mov     eax, [edx+19Ch]
0x8942BC: test    eax, eax
0x8942BE: mov     ecx, eax
0x8942C0: jnz     short loc_8942C8
0x8942C2: mov     ecx, ds:0BA7D9Ch
0x8942C8: mov     eax, [esp+1C4h+var_178]
0x8942CC: and     eax, 3FFFFFFFh
0x8942D1: add     eax, eax
0x8942D3: push    14h
0x8942D5: add     eax, eax
0x8942D7: push    eax
0x8942D8: push    edi
0x8942D9: call    sub_8A75D0
0x8942DE: mov     esi, [esp+1C4h+var_170]
0x8942E2: mov     edi, [esp+1C4h+var_1A0]
0x8942E6: mov     [esp+1C4h+var_4], 0FFFFFFFFh
0x8942F1: jmp     short loc_8942F5
0x8942F3: fstp    st
0x8942F5: cmp     [esp+1C4h+var_1A8], 0
0x8942FA: movaps  xmm0, xmmword ptr [edi]
0x8942FD: mov     eax, [esp+1C4h+var_1A4]
0x894301: movaps  [esp+1C4h+var_140], xmm0
0x894309: jz      loc_8944B5
0x89430F: add     eax, 0FFFFFFFEh; switch 9 cases
0x894312: cmp     eax, 8
0x894315: ja      def_894322; jumptable 00894322 default case, cases 3,7-9
0x89431B: movzx   eax, ds:byte_894910[eax]
0x894322: jmp     ds:jpt_894322[eax*4]; switch jump
0x894329: mov     ecx, [esp+1C4h+var_1A8]; jumptable 00894322 case 2
0x89432D: mov     ecx, [ecx+50h]
0x894330: mov     edx, [ecx]
0x894332: mov     eax, [edx+8]
0x894335: call    eax
0x894337: cmp     eax, 6
0x89433A: jl      short loc_89434A; jumptable 00894322 case 10
0x89433C: fld     dword ptr ds:0A968BCh
0x894342: fstp    dword ptr [edi+28h]
0x894345: jmp     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x89434A: test    byte ptr [ebx+6], 1; jumptable 00894322 case 10
0x89434E: jnz     short loc_894393
0x894350: fldz
0x894352: mov     ecx, [esp+1C4h+var_1A8]
0x894356: fst     dword ptr [esp+1C4h+var_140]
0x89435D: fst     dword ptr [esp+1C4h+var_140+4]
0x894364: fld1
0x894366: fst     dword ptr [esp+1C4h+var_140+8]
0x89436D: fstp    [esp+1C4h+var_1AC]
0x894371: fst     dword ptr [esp+1C4h+var_140+0Ch]
0x894378: fstp    dword ptr [edi+2Ch]
0x89437B: mov     ecx, [ecx+50h]
0x89437E: mov     edx, [ecx]
0x894380: mov     eax, [edx+8]
0x894383: call    eax
0x894385: cmp     eax, 6
0x894388: jge     short loc_894393
0x89438A: movaps  xmm0, [esp+1C4h+var_160]
0x89438F: movaps  xmmword ptr [edi+10h], xmm0
0x894393: mov     [esp+1C4h+var_1B0], 0
0x894398: jmp     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x89439D: test    byte ptr [ebx+6], 1; jumptable 00894322 cases 4-6
0x8943A1: jnz     short loc_8943F3
0x8943A3: mov     ecx, [esp+1C4h+var_1A8]
0x8943A7: mov     ecx, [ecx+50h]
0x8943AA: call    sub_89DA90
0x8943AF: fstp    [esp+1C4h+var_1A4]
0x8943B3: fld     [esp+1C4h+var_1A4]
0x8943B7: fld     dword ptr ds:0B2E764h
0x8943BD: fcompp
0x8943BF: fnstsw  ax
0x8943C1: test    ah, 41h
0x8943C4: jnz     short loc_8943CF
0x8943C6: movaps  xmm0, [esp+1C4h+var_160]
0x8943CB: movaps  xmmword ptr [edi+10h], xmm0
0x8943CF: fldz
0x8943D1: fst     dword ptr [esp+1C4h+var_140]
0x8943D8: fst     dword ptr [esp+1C4h+var_140+4]
0x8943DF: fld1
0x8943E1: fst     dword ptr [esp+1C4h+var_140+8]
0x8943E8: fstp    [esp+1C4h+var_1AC]
0x8943EC: fstp    dword ptr [esp+1C4h+var_140+0Ch]
0x8943F3: mov     [esp+1C4h+var_1B0], 0
0x8943F8: jmp     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8943FD: cmp     [esp+1C4h+var_1AF], 0; jumptable 00894322 default case, cases 3,7-9
0x894402: jz      def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x894408: mov     edx, [ebx+4]
0x89440B: shr     edx, 1
0x89440D: test    dl, 1
0x894410: jnz     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x894416: movaps  xmm2, xmmword ptr [esi]
0x894419: movaps  xmm0, xmm2
0x89441C: subps   xmm0, [esp+1C4h+var_A0]
0x894424: mulps   xmm0, xmm0
0x894427: movaps  xmm1, xmm0
0x89442A: shufps  xmm1, xmm0, 4Eh ; 'N'
0x89442E: addps   xmm1, xmm0
0x894431: movaps  xmm0, xmm1
0x894434: shufps  xmm0, xmm1, 0B1h ; '±'
0x894438: addps   xmm0, xmm1
0x89443B: sqrtss  xmm0, xmm0
0x89443F: movss   [esp+1C4h+var_130], xmm0
0x894448: fld     [esp+1C4h+var_130]
0x89444F: fld     [esp+1C4h+var_16C]
0x894453: fcom    st(1)
0x894455: fnstsw  ax
0x894457: fstp    st(1)
0x894459: test    ah, 41h
0x89445C: jnz     short loc_894469
0x89445E: or      dword ptr [ebx+4], 2
0x894462: fstp    st
0x894464: jmp     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x894469: subps   xmm2, [esp+1C4h+var_B0]
0x894471: movaps  xmm0, xmm2
0x894474: mulps   xmm0, xmm0
0x894477: movaps  xmm1, xmm0
0x89447A: shufps  xmm0, xmm1, 4Eh ; 'N'
0x89447E: addps   xmm0, xmm1
0x894481: movaps  xmm1, xmm0
0x894484: shufps  xmm1, xmm0, 0B1h ; '±'
0x894488: addps   xmm1, xmm0
0x89448B: sqrtss  xmm1, xmm1
0x89448F: movss   [esp+1C4h+var_130], xmm1
0x894498: fld     [esp+1C4h+var_130]
0x89449F: fcompp
0x8944A1: fnstsw  ax
0x8944A3: test    ah, 5
0x8944A6: jp      def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944AC: or      dword ptr [ebx+4], 2
0x8944B0: jmp     def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944B5: add     eax, 0FFFFFFF4h; switch 9 cases
0x8944B8: cmp     eax, 8
0x8944BB: ja      def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944C1: movzx   eax, ds:byte_89492C[eax]
0x8944C8: jmp     ds:jpt_8944C8[eax*4]; switch jump
0x8944CF: movaps  xmm0, [esp+1C4h+var_160]; jumptable 008944C8 cases 12,16
0x8944D4: movaps  xmmword ptr [edi+10h], xmm0
0x8944D8: jmp     short def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944DA: test    byte ptr [ebx+6], 1; jumptable 008944C8 case 14
0x8944DE: jz      short def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944E0: movaps  xmm0, [esp+1C4h+var_160]
0x8944E5: movaps  xmmword ptr [edi+10h], xmm0
0x8944E9: jmp     short def_8944C8; jumptable 008944C8 default case, cases 13,15,17-19
0x8944EB: fldz; jumptable 008944C8 case 20
0x8944ED: movss   xmm3, dword ptr ds:0A46C30h
0x8944F5: fst     [esp+1C4h+var_1AC]
0x8944F9: fstp    dword ptr [edi+8]
0x8944FC: movaps  xmm1, xmmword ptr [edi]
0x8944FF: movaps  xmm0, xmm1
0x894502: mulps   xmm0, xmm1
0x894505: movaps  xmm2, xmm0
0x894508: shufps  xmm2, xmm0, 55h ; 'U'
0x89450C: addss   xmm2, xmm0
0x894510: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x894514: addss   xmm0, xmm2
0x894518: movaps  xmm2, xmm0
0x89451B: rsqrtss xmm2, xmm2
0x89451F: mulss   xmm0, xmm2
0x894523: mulss   xmm0, xmm2
0x894527: subss   xmm3, xmm0
0x89452B: movss   xmm0, dword ptr ds:0A3D65Ch
0x894533: mulss   xmm0, xmm2
0x894537: mulss   xmm0, xmm3
0x89453B: movaps  xmm2, xmm0
0x89453E: shufps  xmm2, xmm0, 0
0x894542: mulps   xmm2, xmm1
0x894545: movaps  xmmword ptr [edi], xmm2
0x894548: fld     dword ptr ds:0A59E38h; jumptable 008944C8 default case, cases 13,15,17-19
0x89454E: fld     [esp+1C4h+var_1AC]
0x894552: fcom    st(1)
0x894554: fnstsw  ax
0x894556: fstp    st(1)
0x894558: test    ah, 1
0x89455B: jnz     loc_89481D
0x894561: cmp     [esp+1C4h+var_1A8], 0
0x894566: jz      loc_89481D
0x89456C: fld     dword ptr [ebx+20h]
0x89456F: mov     [esp+1C4h+var_1AE], 1
0x894574: fcompp
0x894576: fnstsw  ax
0x894578: test    ah, 41h
0x89457B: jnz     loc_89478E
0x894581: push    esi
0x894582: lea     ecx, [ebx-1F0h]
0x894588: call    sub_891CC0
0x89458D: test    al, al
0x89458F: jz      loc_89465C
0x894595: cmp     [esp+1C4h+var_188], 4
0x89459A: jge     loc_8947C3
0x8945A0: cmp     [esp+1C4h+var_1B0], 0
0x8945A5: jz      loc_8947C3
0x8945AB: fld     [esp+1C4h+var_1AC]
0x8945AF: fcomp   qword ptr ds:0A38538h
0x8945B5: fnstsw  ax
0x8945B7: test    ah, 5
0x8945BA: jp      short loc_8945C1
0x8945BC: mov     [esp+1C4h+var_1AE], 0
0x8945C1: mov     edi, [esp+1C4h+var_190]
0x8945C5: mov     esi, [edi+4Ch]
0x8945C8: mov     ecx, [esp+1C4h+var_1A0]
0x8945CC: shl     esi, 6
0x8945CF: add     esi, [edi+48h]
0x8945D2: push    ecx
0x8945D3: mov     ecx, esi
0x8945D5: call    sub_8909D0
0x8945DA: fldz
0x8945DC: movaps  xmm0, [esp+1C4h+var_160]
0x8945E1: movss   xmm3, dword ptr ds:0A46C30h
0x8945E9: movaps  xmmword ptr [esi+10h], xmm0
0x8945ED: fstp    dword ptr [esi+8]
0x8945F0: movaps  xmm1, xmmword ptr [esi]
0x8945F3: movaps  xmm0, xmm1
0x8945F6: mulps   xmm0, xmm1
0x8945F9: movaps  xmm2, xmm0
0x8945FC: shufps  xmm2, xmm0, 55h ; 'U'
0x894600: addss   xmm2, xmm0
0x894604: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x894608: addss   xmm0, xmm2
0x89460C: movaps  xmm2, xmm0
0x89460F: rsqrtss xmm2, xmm2
0x894613: mulss   xmm0, xmm2
0x894617: mulss   xmm0, xmm2
0x89461B: subss   xmm3, xmm0
0x89461F: movss   xmm0, dword ptr ds:0A3D65Ch
0x894627: mulss   xmm0, xmm2
0x89462B: mulss   xmm0, xmm3
0x89462F: movaps  xmm2, xmm0
0x894632: shufps  xmm2, xmm0, 0
0x894636: mov     eax, 1
0x89463B: add     [esp+1C4h+var_188], eax
0x89463F: mulps   xmm2, xmm1
0x894642: movaps  xmmword ptr [esi], xmm2
0x894645: add     [edi+4Ch], eax
0x894648: cmp     [esp+1C4h+var_1AE], 0
0x89464D: jz      loc_89481F
0x894653: add     [esp+1C4h+var_18C], eax
0x894657: jmp     loc_8947C3
0x89465C: test    dword ptr [ebx+4], 1800h
0x894663: fldz
0x894665: jnz     short loc_89466A
0x894667: fst     dword ptr [edi+2Ch]
0x89466A: or      dword ptr [ebx+4], 404h
0x894671: cmp     [esp+1C4h+var_199], 0
0x894676: movss   xmm3, dword ptr ds:0A46C30h
0x89467E: jnz     loc_89472E
0x894684: fld1
0x894686: movaps  xmm0, xmmword ptr [edi]
0x894689: shufps  xmm0, xmm0, 0FFh
0x89468D: fstp    dword ptr [esp+1C4h+var_140+8]
0x894694: movaps  xmm2, [esp+1C4h+var_140]
0x89469C: movss   [esp+1C4h+var_130], xmm0
0x8946A5: fld     [esp+1C4h+var_130]
0x8946AC: movaps  xmm0, xmm2
0x8946AF: fsubr   st, st
0x8946B1: mulps   xmm0, xmm2
0x8946B4: movaps  xmm1, xmm0
0x8946B7: shufps  xmm1, xmm0, 55h ; 'U'
0x8946BB: fstp    [esp+1C4h+var_1AC]
0x8946BF: fcom    [esp+1C4h+var_1AC]
0x8946C3: addss   xmm1, xmm0
0x8946C7: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8946CB: addss   xmm0, xmm1
0x8946CF: movaps  xmm1, xmm0
0x8946D2: rsqrtss xmm1, xmm1
0x8946D6: fnstsw  ax
0x8946D8: mulss   xmm0, xmm1
0x8946DC: test    ah, 41h
0x8946DF: mulss   xmm0, xmm1
0x8946E3: subss   xmm3, xmm0
0x8946E7: movss   xmm0, dword ptr ds:0A3D65Ch
0x8946EF: mulss   xmm0, xmm1
0x8946F3: mulss   xmm0, xmm3
0x8946F7: shufps  xmm0, xmm0, 0
0x8946FB: mulps   xmm0, xmm2
0x8946FE: movaps  [esp+1C4h+var_140], xmm0
0x894706: movaps  xmmword ptr [edi], xmm0
0x894709: jnz     short loc_894711
0x89470B: fstp    [esp+1C4h+var_1AC]
0x89470F: jmp     short loc_894713
0x894711: fstp    st
0x894713: fld     [esp+1C4h+var_1AC]
0x894717: fmul    qword ptr ds:0A3F3F0h
0x89471D: fadd    qword ptr ds:0A2F928h
0x894723: fadd    dword ptr [edi+18h]
0x894726: fstp    dword ptr [edi+18h]
0x894729: jmp     loc_8947C3
0x89472E: fstp    st
0x894730: fld1
0x894732: fstp    dword ptr [esp+1C4h+var_140+8]
0x894739: movaps  xmm2, [esp+1C4h+var_140]
0x894741: movaps  xmm0, xmm2
0x894744: mulps   xmm0, xmm2
0x894747: movaps  xmm1, xmm0
0x89474A: shufps  xmm1, xmm0, 55h ; 'U'
0x89474E: addss   xmm1, xmm0
0x894752: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x894756: addss   xmm0, xmm1
0x89475A: movaps  xmm1, xmm0
0x89475D: rsqrtss xmm1, xmm1
0x894761: mulss   xmm0, xmm1
0x894765: mulss   xmm0, xmm1
0x894769: subss   xmm3, xmm0
0x89476D: movss   xmm0, dword ptr ds:0A3D65Ch
0x894775: mulss   xmm0, xmm1
0x894779: mulss   xmm0, xmm3
0x89477D: shufps  xmm0, xmm0, 0
0x894781: mulps   xmm0, xmm2
0x894784: movaps  [esp+1C4h+var_140], xmm0
0x89478C: jmp     short loc_8947C3
0x89478E: test    byte ptr [ebx+6], 1
0x894792: jnz     short loc_8947A9
0x894794: test    byte ptr [ebx+4], 1
0x894798: jz      short loc_8947A9
0x89479A: push    esi
0x89479B: lea     edx, [ebx+190h]
0x8947A1: push    edx
0x8947A2: mov     ecx, ebx
0x8947A4: call    sub_88FF20
0x8947A9: or      dword ptr [ebx+4], 400h
0x8947B0: mov     eax, [ebx+4]
0x8947B3: shr     eax, 3
0x8947B6: test    al, 1
0x8947B8: jnz     short loc_8947C3
0x8947BA: fld     dword ptr ds:0A968B8h
0x8947C0: fstp    dword ptr [edi+28h]
0x8947C3: or      dword ptr [ebx+4], 200h
0x8947CA: mov     ecx, [esp+1C4h+var_174]
0x8947CE: add     dword ptr [ebx+1C4h], 1
0x8947D5: mov     edx, [ecx]
0x8947D7: add     edx, [esp+1C4h+var_164]
0x8947DB: lea     ecx, [ebx-1F0h]
0x8947E1: push    edx
0x8947E2: call    sub_891850
0x8947E7: cmp     [esp+1C4h+var_1AD], 0
0x8947EC: movaps  xmm0, [esp+1C4h+var_140]
0x8947F4: jz      short loc_8947FF
0x8947F6: movaps  xmm1, xmmword ptr [ebx+40h]
0x8947FA: addps   xmm0, xmm1
0x8947FD: jmp     short loc_894804
0x8947FF: mov     [esp+1C4h+var_1AD], 1
0x894804: movaps  xmmword ptr [ebx+40h], xmm0
0x894808: test    byte ptr [ebx+6], 1
0x89480C: jz      short loc_89481F
0x89480E: mov     eax, [esp+1C4h+var_1A8]
0x894812: mov     ecx, [eax+0Ch]
0x894815: mov     [ebx+1C8h], ecx
0x89481B: jmp     short loc_89481F
0x89481D: fstp    st
0x89481F: mov     eax, [esp+1C4h+var_194]
0x894823: add     eax, 1
0x894826: cmp     eax, [esp+1C4h+var_168]
0x89482A: mov     [esp+1C4h+var_194], eax
0x89482E: jl      loc_893E43
0x894834: mov     eax, [ebx+1C4h]
0x89483A: cmp     eax, [esp+1C4h+var_18C]
0x89483E: setz    dl
0x894841: test    eax, eax
0x894843: mov     [ebx+60h], dl
0x894846: jz      loc_8948D8
0x89484C: movaps  xmm0, xmmword ptr [ebx+40h]
0x894850: fldz
0x894852: mulps   xmm0, xmm0
0x894855: movaps  xmm1, xmm0
0x894858: shufps  xmm1, xmm0, 55h ; 'U'
0x89485C: movaps  xmm2, xmm0
0x89485F: addss   xmm1, xmm0
0x894863: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x894867: addss   xmm2, xmm1
0x89486B: movss   [esp+1C4h+var_130], xmm2
0x894874: fcomp   [esp+1C4h+var_130]
0x89487B: fnstsw  ax
0x89487D: test    ah, 5
0x894880: jp      short loc_8948D8
0x894882: movaps  xmm1, xmmword ptr [ebx+40h]
0x894886: movss   xmm3, dword ptr ds:0A46C30h
0x89488E: movaps  xmm0, xmm1
0x894891: mulps   xmm0, xmm1
0x894894: movaps  xmm2, xmm0
0x894897: shufps  xmm2, xmm0, 55h ; 'U'
0x89489B: addss   xmm2, xmm0
0x89489F: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8948A3: addss   xmm0, xmm2
0x8948A7: movaps  xmm2, xmm0
0x8948AA: rsqrtss xmm2, xmm2
0x8948AE: mulss   xmm0, xmm2
0x8948B2: mulss   xmm0, xmm2
0x8948B6: subss   xmm3, xmm0
0x8948BA: movss   xmm0, dword ptr ds:0A3D65Ch
0x8948C2: mulss   xmm0, xmm2
0x8948C6: mulss   xmm0, xmm3
0x8948CA: movaps  xmm2, xmm0
0x8948CD: shufps  xmm2, xmm0, 0
0x8948D1: mulps   xmm2, xmm1
0x8948D4: movaps  xmmword ptr [ebx+40h], xmm2
0x8948D8: mov     ecx, [esp+1C4h+var_C]
0x8948DF: mov     large fs:0, ecx
0x8948E6: pop     ecx
0x8948E7: pop     edi
0x8948E8: pop     esi
0x8948E9: pop     ebx
0x8948EA: mov     ecx, [esp+1B4h+var_14]
0x8948F1: xor     ecx, esp
0x8948F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8948F8: mov     esp, ebp
0x8948FA: pop     ebp
0x8948FB: retn    8
