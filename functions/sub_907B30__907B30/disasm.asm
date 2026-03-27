0x907B30: push    ebp
0x907B31: mov     ebp, esp
0x907B33: and     esp, 0FFFFFFF0h
0x907B36: sub     esp, 6F4h
0x907B3C: mov     eax, ds:0B30AACh
0x907B41: mov     edx, ds:0BA9DE4h
0x907B47: push    ebx
0x907B48: mov     [esp+6F8h+var_6B4], ecx
0x907B4C: mov     ecx, large fs:2Ch
0x907B53: push    esi
0x907B54: mov     [esp+6FCh+var_4], eax
0x907B5B: mov     eax, [ecx+edx*4]
0x907B5E: mov     esi, [eax+1A4h]
0x907B64: push    edi
0x907B65: cmp     esi, [eax+1A8h]
0x907B6B: jnb     short loc_907B98
0x907B6D: mov     esi, eax
0x907B6F: mov     ecx, [esi+1A4h]
0x907B75: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x907B7B: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x907B82: rdtsc
0x907B84: mov     [esp+700h+var_6EC], eax
0x907B88: mov     eax, [esp+700h+var_6EC]
0x907B8C: mov     [ecx+4], eax
0x907B8F: add     ecx, 10h
0x907B92: mov     [esi+1A4h], ecx
0x907B98: mov     esi, [ebp+arg_0]
0x907B9B: mov     edx, [esi+8]
0x907B9E: mov     ebx, [ebp+arg_4]
0x907BA1: mov     eax, [ebx+8]
0x907BA4: lea     ecx, [esp+700h+var_634]
0x907BAB: push    edx
0x907BAC: mov     [esp+704h+var_640], ecx
0x907BB3: push    eax
0x907BB4: lea     ecx, [esp+708h+var_680]
0x907BBB: mov     [esp+708h+var_63C], 0
0x907BC6: mov     [esp+708h+var_638], 80000080h
0x907BD1: call    sub_8B1FF0
0x907BD6: mov     edi, [esi+8]
0x907BD9: mov     esi, [ebx+8]
0x907BDC: mov     ebx, [ebp+arg_8]
0x907BDF: fld     dword ptr [ebx+18h]
0x907BE2: movaps  xmm2, xmmword ptr [esi+40h]
0x907BE6: fld     st
0x907BE8: movaps  xmm3, xmmword ptr [esi+50h]
0x907BEC: fmul    dword ptr [edi+5Ch]
0x907BEF: mov     al, ds:0B2FDE0h
0x907BF4: test    al, al
0x907BF6: fxch    st(1)
0x907BF8: fmul    dword ptr [esi+5Ch]
0x907BFB: subps   xmm3, xmm2
0x907BFE: fld     st(1)
0x907C00: fstp    [esp+700h+var_6EC]
0x907C04: movss   xmm0, [esp+700h+var_6EC]
0x907C0A: fst     [esp+700h+var_6EC]
0x907C0E: movss   xmm1, [esp+700h+var_6EC]
0x907C14: fld     dword ptr [esi+0A0h]
0x907C1A: movaps  xmm2, xmm1
0x907C1D: fmul    dword ptr [esi+9Ch]
0x907C23: shufps  xmm2, xmm1, 0
0x907C27: movaps  xmm1, xmmword ptr [edi+50h]
0x907C2B: mulps   xmm2, xmm3
0x907C2E: movaps  xmm3, xmmword ptr [edi+40h]
0x907C32: fmul    st, st(1)
0x907C34: fld     dword ptr [edi+0A0h]
0x907C3A: subps   xmm3, xmm1
0x907C3D: fmul    dword ptr [edi+9Ch]
0x907C43: movaps  xmm1, xmm0
0x907C46: shufps  xmm1, xmm0, 0
0x907C4A: mulps   xmm1, xmm3
0x907C4D: fmul    st, st(3)
0x907C4F: addps   xmm1, xmm2
0x907C52: movaps  xmmword ptr [esp+700h+var_6DC+0Ch], xmm1
0x907C57: faddp   st(1), st
0x907C59: fstp    dword ptr [esp+700h+var_6DC+18h]
0x907C5D: fstp    st
0x907C5F: fstp    st
0x907C61: jz      short loc_907C70
0x907C63: mov     ecx, [esp+700h+var_6B4]
0x907C67: add     ecx, 20h ; ' '
0x907C6A: mov     dword ptr [esp+700h+var_6DC+8], ecx
0x907C6E: jmp     short loc_907C78
0x907C70: mov     dword ptr [esp+700h+var_6DC+8], 0
0x907C78: movaps  xmm3, xmmword ptr [esi+20h]
0x907C7C: movaps  xmm1, xmmword ptr [esp+700h+var_6DC+0Ch]
0x907C81: movaps  xmm2, xmmword ptr [esi]
0x907C84: movaps  xmm5, xmmword ptr [esi+10h]
0x907C88: mov     edx, [ebx+28h]
0x907C8B: mov     al, [edx+10h]
0x907C8E: test    al, al
0x907C90: movaps  xmm4, xmm3
0x907C93: shufps  xmm4, xmm3, 44h ; 'D'
0x907C97: movaps  xmm7, xmm3
0x907C9A: movaps  xmm0, xmm2
0x907C9D: shufps  xmm0, xmm5, 44h ; 'D'
0x907CA1: shufps  xmm7, xmm3, 0EEh ; 'î'
0x907CA5: shufps  xmm2, xmm5, 0EEh ; 'î'
0x907CA9: movaps  xmm5, xmm0
0x907CAC: movaps  xmm3, xmm1
0x907CAF: shufps  xmm3, xmm1, 55h ; 'U'
0x907CB3: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x907CB7: mulps   xmm5, xmm3
0x907CBA: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x907CBE: movaps  xmm3, xmm1
0x907CC1: movaps  xmm6, xmm1
0x907CC4: shufps  xmm3, xmm1, 0
0x907CC8: mulps   xmm0, xmm3
0x907CCB: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x907CCF: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x907CD3: mulps   xmm2, xmm6
0x907CD6: addps   xmm0, xmm5
0x907CD9: addps   xmm0, xmm2
0x907CDC: movaps  xmmword ptr [esp+700h+var_6DC+0Ch], xmm0
0x907CE1: jz      loc_907E90
0x907CE7: fld     dword ptr [esi+0A0h]
0x907CED: mov     eax, [ebp+arg_0]
0x907CF0: fmul    dword ptr [esi+9Ch]
0x907CF6: mov     ecx, [eax]
0x907CF8: mov     edx, [ecx]
0x907CFA: lea     eax, [esp+700h+var_6AC+0Ch]
0x907CFE: fmul    dword ptr [esi+9Ch]
0x907D04: push    eax
0x907D05: push    ecx
0x907D06: lea     eax, [esp+708h+var_680]
0x907D0D: fstp    [esp+708h+var_6E4]
0x907D11: fld     dword ptr [edi+9Ch]
0x907D17: fadd    dword ptr [esi+9Ch]
0x907D1D: fmul    dword ptr [edi+0A0h]
0x907D23: fadd    [esp+708h+var_6E4]
0x907D27: fld     dword ptr [ebx+8]
0x907D2A: fmul    dword ptr ds:0A3D65Ch
0x907D30: faddp   st(1), st
0x907D32: fstp    [esp+708h+var_708]
0x907D35: push    eax
0x907D36: call    dword ptr [edx+0Ch]
0x907D39: fld     dword ptr [ebx+8]
0x907D3C: mov     ecx, [ebp+arg_4]
0x907D3F: fmul    dword ptr ds:0A3D65Ch
0x907D45: mov     eax, [ecx+8]
0x907D48: movaps  xmm1, xmmword ptr [eax+30h]
0x907D4C: movaps  xmm4, xmmword ptr [eax+20h]
0x907D50: fadd    dword ptr [edi+0A0h]
0x907D56: movaps  xmm3, xmmword ptr [eax]
0x907D59: movaps  xmm0, xmmword ptr [edi+50h]
0x907D5D: movaps  xmm5, xmmword ptr [eax+10h]
0x907D61: fadd    [esp+700h+var_6E4]
0x907D65: subps   xmm0, xmm1
0x907D68: movaps  xmm1, xmm3
0x907D6B: shufps  xmm1, xmm5, 44h ; 'D'
0x907D6F: fstp    [esp+700h+var_6EC]
0x907D73: movss   xmm2, [esp+700h+var_6EC]
0x907D79: movaps  xmm5, xmm4
0x907D7C: shufps  xmm5, xmm4, 44h ; 'D'
0x907D80: movaps  xmm7, xmm4
0x907D83: shufps  xmm7, xmm4, 0EEh ; 'î'
0x907D87: movaps  xmm4, xmmword ptr [eax+10h]
0x907D8B: shufps  xmm3, xmm4, 0EEh ; 'î'
0x907D8F: movaps  xmm6, xmm0
0x907D92: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x907D96: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x907D9A: mulps   xmm3, xmm6
0x907D9D: movaps  xmm6, xmm1
0x907DA0: movaps  xmm4, xmm0
0x907DA3: shufps  xmm4, xmm0, 55h ; 'U'
0x907DA7: shufps  xmm1, xmm5, 88h ; 'ˆ'
0x907DAB: shufps  xmm6, xmm5, 0DDh ; 'Ý'
0x907DAF: mulps   xmm6, xmm4
0x907DB2: movaps  xmm4, xmm0
0x907DB5: shufps  xmm4, xmm0, 0
0x907DB9: mulps   xmm1, xmm4
0x907DBC: movaps  xmm0, xmm1
0x907DBF: shufps  xmm2, xmm2, 0
0x907DC3: addps   xmm0, xmm6
0x907DC6: addps   xmm0, xmm3
0x907DC9: movaps  xmm1, xmm0
0x907DCC: subps   xmm1, xmm2
0x907DCF: movaps  xmm3, xmm1
0x907DD2: movaps  xmm1, [esp+700h+var_6AC+0Ch]
0x907DD7: maxps   xmm1, xmm3
0x907DDA: movaps  xmm3, xmm0
0x907DDD: addps   xmm3, xmm2
0x907DE0: movaps  xmm2, xmmword ptr [esp+700h+var_69C+0Ch]
0x907DE5: minps   xmm2, xmm3
0x907DE8: movaps  [esp+700h+var_6AC+0Ch], xmm1
0x907DED: movaps  xmmword ptr [esp+700h+var_69C+0Ch], xmm2
0x907DF2: fld     dword ptr [esi+9Ch]
0x907DF8: fcomp   dword ptr ds:0A2FAA8h
0x907DFE: movaps  xmm5, xmm2
0x907E01: subps   xmm5, xmm1
0x907E04: fnstsw  ax
0x907E06: test    ah, 41h
0x907E09: jnz     short loc_907E6A
0x907E0B: movaps  xmm3, xmmword ptr [esi+80h]
0x907E12: fld     dword ptr [esi+5Ch]
0x907E15: fmul    dword ptr [ebx+18h]
0x907E18: subps   xmm0, xmm3
0x907E1B: movaps  xmm3, xmmword ptr [esi+90h]
0x907E22: movaps  xmm6, xmm3
0x907E25: shufps  xmm6, xmm3, 0C9h ; 'É'
0x907E29: fstp    [esp+700h+var_6EC]
0x907E2D: movss   xmm4, [esp+700h+var_6EC]
0x907E33: movaps  xmm7, xmm0
0x907E36: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x907E3A: mulps   xmm7, xmm6
0x907E3D: movaps  xmm6, xmm3
0x907E40: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x907E44: movaps  xmm3, xmm0
0x907E47: shufps  xmm3, xmm0, 0C9h ; 'É'
0x907E4B: mulps   xmm3, xmm6
0x907E4E: movaps  xmm6, xmmword ptr [esp+700h+var_6DC+0Ch]
0x907E53: movaps  xmm0, xmm4
0x907E56: subps   xmm3, xmm7
0x907E59: shufps  xmm0, xmm4, 0
0x907E5D: mulps   xmm0, xmm3
0x907E60: addps   xmm6, xmm0
0x907E63: movaps  xmmword ptr [esp+700h+var_6DC+0Ch], xmm6
0x907E68: jmp     short loc_907E6F
0x907E6A: movaps  xmm6, xmmword ptr [esp+700h+var_6DC+0Ch]
0x907E6F: xorps   xmm0, xmm0
0x907E72: movaps  xmm3, xmm0
0x907E75: minps   xmm3, xmm6
0x907E78: addps   xmm1, xmm3
0x907E7B: maxps   xmm0, xmm6
0x907E7E: movaps  xmm3, xmm1
0x907E81: addps   xmm2, xmm0
0x907E84: movaps  [esp+700h+var_6AC+0Ch], xmm3
0x907E89: movaps  xmmword ptr [esp+700h+var_69C+0Ch], xmm2
0x907E8E: jmp     short loc_907EC9
0x907E90: mov     edx, [ebp+arg_0]
0x907E93: fld     dword ptr [ebx+8]
0x907E96: mov     ecx, [edx]
0x907E98: fmul    dword ptr ds:0A3D65Ch
0x907E9E: mov     eax, [ecx]
0x907EA0: lea     edx, [esp+700h+var_6AC+0Ch]
0x907EA4: push    edx
0x907EA5: push    ecx
0x907EA6: lea     edx, [esp+708h+var_680]
0x907EAD: fstp    [esp+708h+var_708]
0x907EB0: push    edx
0x907EB1: call    dword ptr [eax+0Ch]
0x907EB4: movaps  xmm2, xmmword ptr [esp+700h+var_69C+0Ch]
0x907EB9: movaps  xmm3, [esp+700h+var_6AC+0Ch]
0x907EBE: movaps  xmm6, xmmword ptr [esp+700h+var_6DC+0Ch]
0x907EC3: movaps  xmm5, xmm2
0x907EC6: subps   xmm5, xmm3
0x907EC9: mov     eax, dword ptr [esp+700h+var_6DC+8]
0x907ECD: test    eax, eax
0x907ECF: jz      loc_907F90
0x907ED5: movaps  xmm0, xmmword ptr [eax]
0x907ED8: cmpleps xmm0, xmm3
0x907EDC: movmskps ecx, xmm0
0x907EDF: movaps  xmm0, xmmword ptr [eax+10h]
0x907EE3: movaps  xmm1, xmm2
0x907EE6: cmpleps xmm1, xmm0
0x907EEA: movmskps edx, xmm1
0x907EED: and     ecx, edx
0x907EEF: and     ecx, 7
0x907EF2: cmp     cl, 7
0x907EF5: jz      loc_908022
0x907EFB: fld     dword ptr [ebx+8]
0x907EFE: xorps   xmm0, xmm0
0x907F01: fmul    dword ptr ds:0A3D65Ch
0x907F07: fstp    [esp+700h+var_6EC]
0x907F0B: movss   xmm1, [esp+700h+var_6EC]
0x907F11: shufps  xmm1, xmm1, 0
0x907F15: addps   xmm2, xmm1
0x907F18: subps   xmm3, xmm1
0x907F1B: movaps  xmm4, xmm2
0x907F1E: mov     [esp+700h+var_6EC], 0C0000000h
0x907F26: movss   xmm1, [esp+700h+var_6EC]
0x907F2C: mov     [esp+700h+var_6EC], 3ECCCCCDh
0x907F34: movss   xmm2, [esp+700h+var_6EC]
0x907F3A: movaps  xmm7, xmm2
0x907F3D: shufps  xmm7, xmm2, 0
0x907F41: movaps  xmm2, xmm7
0x907F44: mulps   xmm2, xmm5
0x907F47: movaps  xmm5, xmmword ptr ds:0A965C0h
0x907F4E: movaps  xmm7, xmm2
0x907F51: xorps   xmm7, xmm5
0x907F54: movaps  xmm5, xmm0
0x907F57: minps   xmm0, xmmword ptr [esp+700h+var_6DC+0Ch]
0x907F5C: maxps   xmm5, xmm6
0x907F5F: movaps  xmm6, xmm1
0x907F62: shufps  xmm6, xmm1, 0
0x907F66: mulps   xmm6, xmm5
0x907F69: movaps  xmm5, xmm1
0x907F6C: shufps  xmm5, xmm1, 0
0x907F70: mulps   xmm5, xmm0
0x907F73: maxps   xmm6, xmm7
0x907F76: addps   xmm3, xmm6
0x907F79: minps   xmm5, xmm2
0x907F7C: addps   xmm4, xmm5
0x907F7F: movaps  [esp+700h+var_6AC+0Ch], xmm3
0x907F84: movaps  xmmword ptr [esp+700h+var_69C+0Ch], xmm4
0x907F89: movaps  xmmword ptr [eax], xmm3
0x907F8C: movaps  xmmword ptr [eax+10h], xmm4
0x907F90: mov     esi, [ebp+arg_4]
0x907F93: mov     ecx, [esi]
0x907F95: mov     eax, [ecx]
0x907F97: lea     edx, [esp+700h+var_640]
0x907F9E: push    edx
0x907F9F: lea     edx, [esp+704h+var_6AC+0Ch]
0x907FA3: push    edx
0x907FA4: call    dword ptr [eax+24h]
0x907FA7: mov     edx, [esi]
0x907FA9: mov     eax, [edx+0Ch]
0x907FAC: mov     ecx, [esi+8]
0x907FAF: mov     [esp+700h+var_430], eax
0x907FB6: mov     al, ds:0BA81CDh
0x907FBB: test    al, al
0x907FBD: mov     [esp+700h+var_420], esi
0x907FC4: mov     [esp+700h+var_424], ecx
0x907FCB: jz      loc_90830C
0x907FD1: mov     esi, [esp+700h+var_6B4]
0x907FD5: mov     edx, [esi+8]
0x907FD8: mov     eax, [esi+10h]
0x907FDB: mov     edi, [esi+0Ch]
0x907FDE: add     esi, 0Ch
0x907FE1: lea     eax, [eax+eax*2]
0x907FE4: lea     ecx, [edi+eax*4]
0x907FE7: cmp     edi, ecx
0x907FE9: mov     eax, [esp+700h+var_63C]
0x907FF0: mov     [esp+700h+var_6B8], edx
0x907FF4: mov     edx, [esp+700h+var_640]
0x907FFB: lea     eax, [edx+eax*4]
0x907FFE: mov     dword ptr [esp+700h+var_6DC+4], ecx
0x908002: mov     ebx, edx
0x908004: mov     [esp+700h+var_6EC], eax
0x908008: jz      loc_908116
0x90800E: mov     edi, edi
0x908010: cmp     ebx, eax
0x908012: jz      short loc_90806A
0x908014: mov     ecx, [edi]
0x908016: cmp     ecx, [ebx]
0x908018: jnz     short loc_90806A
0x90801A: add     ebx, 4
0x90801D: jmp     loc_908107
0x908022: mov     edx, [esp+700h+var_638]
0x908029: test    edx, edx
0x90802B: js      loc_9087B6
0x908031: mov     eax, large fs:2Ch
0x908037: mov     ecx, ds:0BA9DE4h
0x90803D: mov     eax, [eax+ecx*4]
0x908040: mov     eax, [eax+19Ch]
0x908046: test    eax, eax
0x908048: jnz     short loc_90804F
0x90804A: mov     eax, ds:0BA7D9Ch
0x90804F: mov     ecx, [esp+700h+var_640]
0x908056: and     edx, 3FFFFFFFh
0x90805C: push    14h
0x90805E: shl     edx, 2
0x908061: push    edx
0x908062: push    ecx
0x908063: mov     ecx, eax
0x908065: jmp     loc_9087B1
0x90806A: cmp     edx, eax
0x90806C: mov     ebx, edx
0x90806E: mov     [esp+700h+var_6E8], ebx
0x908072: jz      short loc_908089
0x908074: mov     ecx, [edi]
0x908076: cmp     ecx, [ebx]
0x908078: jz      loc_9081C2
0x90807E: add     ebx, 4
0x908081: cmp     ebx, eax
0x908083: jnz     short loc_908076
0x908085: mov     [esp+700h+var_6E8], ebx
0x908089: mov     ecx, [edi+8]
0x90808C: mov     edx, [ecx]
0x90808E: call    dword ptr [edx+18h]
0x908091: mov     eax, [esi+4]
0x908094: mov     edx, [esi]
0x908096: dec     eax
0x908097: mov     [esi+4], eax
0x90809A: mov     ecx, edi
0x90809C: sub     ecx, edx
0x90809E: mov     eax, 2AAAAAABh
0x9080A3: imul    ecx
0x9080A5: mov     ecx, [esi+4]
0x9080A8: sar     edx, 1
0x9080AA: mov     eax, edx
0x9080AC: shr     eax, 1Fh
0x9080AF: add     eax, edx
0x9080B1: cmp     eax, ecx
0x9080B3: jge     short loc_9080EE
0x9080B5: lea     ecx, [eax+eax*2]
0x9080B8: shl     ecx, 2
0x9080BB: mov     [esp+700h+var_6E4], ecx
0x9080BF: nop
0x9080C0: mov     edx, [esi]
0x9080C2: add     ecx, edx
0x9080C4: lea     edx, [ecx+0Ch]
0x9080C7: mov     ebx, [edx]
0x9080C9: mov     [ecx], ebx
0x9080CB: mov     ebx, [edx+4]
0x9080CE: mov     [ecx+4], ebx
0x9080D1: mov     edx, [edx+8]
0x9080D4: mov     [ecx+8], edx
0x9080D7: mov     ecx, [esp+700h+var_6E4]
0x9080DB: mov     edx, [esi+4]
0x9080DE: inc     eax
0x9080DF: add     ecx, 0Ch
0x9080E2: cmp     eax, edx
0x9080E4: mov     [esp+700h+var_6E4], ecx
0x9080E8: jl      short loc_9080C0
0x9080EA: mov     ebx, [esp+700h+var_6E8]
0x9080EE: mov     eax, dword ptr [esp+700h+var_6DC+4]
0x9080F2: mov     edx, [esp+700h+var_640]
0x9080F9: sub     edi, 0Ch
0x9080FC: sub     eax, 0Ch
0x9080FF: mov     dword ptr [esp+700h+var_6DC+4], eax
0x908103: mov     eax, [esp+700h+var_6EC]
0x908107: mov     ecx, dword ptr [esp+700h+var_6DC+4]
0x90810B: add     edi, 0Ch
0x90810E: cmp     edi, ecx
0x908110: jnz     loc_908010
0x908116: mov     eax, [esi+4]
0x908119: cmp     [esp+700h+var_63C], eax
0x908120: jz      loc_90877A
0x908126: mov     edi, [esi]
0x908128: mov     ebx, [esp+700h+var_63C]
0x90812F: lea     ecx, [eax+eax*2]
0x908132: lea     ecx, [edi+ecx*4]
0x908135: lea     ebx, [edx+ebx*4]
0x908138: cmp     edx, ebx
0x90813A: mov     [esp+700h+var_6E4], ecx
0x90813E: mov     ecx, edx
0x908140: mov     [esp+700h+var_6E8], ecx
0x908144: mov     [esp+700h+var_6E0], ebx
0x908148: jz      loc_90877A
0x90814E: mov     edi, edi
0x908150: cmp     edi, [esp+700h+var_6E4]
0x908154: jz      short loc_908160
0x908156: mov     ebx, [edi]
0x908158: cmp     ebx, [ecx]
0x90815A: jz      loc_9082F1
0x908160: mov     edi, ecx
0x908162: sub     edi, edx
0x908164: lea     ebx, [eax+1]
0x908167: sar     edi, 2
0x90816A: sub     eax, edi
0x90816C: mov     [esp+700h+var_6EC], eax
0x908170: mov     eax, [esi+8]
0x908173: and     eax, 3FFFFFFFh
0x908178: cmp     eax, ebx
0x90817A: mov     dword ptr [esp+700h+var_6DC+8], ebx
0x90817E: jge     short loc_908194
0x908180: add     eax, eax
0x908182: cmp     ebx, eax
0x908184: jl      short loc_908188
0x908186: mov     eax, ebx
0x908188: push    0Ch
0x90818A: push    eax
0x90818B: push    esi
0x90818C: call    sub_8A6E40
0x908191: add     esp, 0Ch
0x908194: mov     edx, [esi]
0x908196: mov     ecx, [esp+700h+var_6EC]
0x90819A: lea     eax, [edi+edi*2]
0x90819D: shl     eax, 2
0x9081A0: dec     ecx
0x9081A1: lea     edi, [edx+eax]
0x9081A4: lea     edx, [edi+0Ch]
0x9081A7: mov     [esp+700h+var_6E4], edx
0x9081AB: js      short loc_9081F8
0x9081AD: lea     ebx, [ecx+ecx*2]
0x9081B0: lea     edx, [edx+ebx*4]
0x9081B3: sub     edi, [esp+700h+var_6E4]
0x9081B7: inc     ecx
0x9081B8: mov     [esp+700h+var_6EC], edi
0x9081BC: mov     [esp+700h+var_6E4], ecx
0x9081C0: jmp     short loc_9081D2
0x9081C2: mov     [esp+700h+var_6E8], ebx
0x9081C6: add     ebx, 4
0x9081C9: jmp     loc_908107
0x9081CE: mov     edi, [esp+700h+var_6EC]
0x9081D2: add     edi, edx
0x9081D4: mov     ebx, [edi]
0x9081D6: mov     ecx, edx
0x9081D8: mov     [ecx], ebx
0x9081DA: mov     ebx, [edi+4]
0x9081DD: mov     [ecx+4], ebx
0x9081E0: mov     edi, [edi+8]
0x9081E3: mov     [ecx+8], edi
0x9081E6: mov     ecx, [esp+700h+var_6E4]
0x9081EA: sub     edx, 0Ch
0x9081ED: dec     ecx
0x9081EE: mov     [esp+700h+var_6E4], ecx
0x9081F2: jnz     short loc_9081CE
0x9081F4: mov     ebx, dword ptr [esp+700h+var_6DC+8]
0x9081F8: mov     edx, [esp+700h+var_6E8]
0x9081FC: mov     edi, [esi]
0x9081FE: mov     ecx, [esp+700h+var_430]
0x908205: mov     [esi+4], ebx
0x908208: mov     ebx, [edx]
0x90820A: lea     edx, [esp+700h+var_410]
0x908211: push    edx
0x908212: add     edi, eax
0x908214: mov     eax, [ecx]
0x908216: push    ebx
0x908217: call    dword ptr [eax+28h]
0x90821A: mov     [esp+700h+var_428], ebx
0x908221: mov     ebx, [esp+700h+var_6E8]
0x908225: mov     [esp+700h+var_42C], eax
0x90822C: mov     ebx, [ebx]
0x90822E: mov     eax, [ebp+arg_8]
0x908231: mov     ecx, [eax+4]
0x908234: mov     edx, [ecx]
0x908236: push    ebx
0x908237: mov     ebx, [esp+704h+var_430]
0x90823E: push    ebx
0x90823F: lea     ebx, [esp+708h+var_42C]
0x908246: push    ebx
0x908247: mov     ebx, [ebp+arg_0]
0x90824A: push    ebx
0x90824B: push    eax
0x90824C: lea     eax, [esp+714h+var_6DC+3]
0x908250: push    eax
0x908251: call    dword ptr [edx]
0x908253: cmp     byte ptr [eax], 0
0x908256: jz      short loc_9082C7
0x908258: mov     ecx, [ebp+arg_8]
0x90825B: mov     edx, [ecx]
0x90825D: mov     eax, ebx
0x90825F: mov     ecx, [eax]
0x908261: mov     dword ptr [esp+700h+var_6DC+4], edx
0x908265: mov     edx, [ecx]
0x908267: call    dword ptr [edx+8]
0x90826A: mov     ecx, [esp+700h+var_42C]
0x908271: mov     ebx, eax
0x908273: mov     eax, [ecx]
0x908275: call    dword ptr [eax+8]
0x908278: mov     ecx, [ebp+arg_8]
0x90827B: mov     dl, [ecx+0Ch]
0x90827E: test    dl, dl
0x908280: mov     ecx, dword ptr [esp+700h+var_6DC+4]
0x908284: jz      short loc_90828E
0x908286: add     ecx, 590h
0x90828C: jmp     short loc_908294
0x90828E: add     ecx, 190h
0x908294: shl     ebx, 5
0x908297: add     ebx, eax
0x908299: movzx   eax, byte ptr [ebx+ecx]
0x90829D: mov     ecx, [esp+700h+var_6B8]
0x9082A1: lea     edx, [eax+eax*4]
0x9082A4: mov     eax, dword ptr [esp+700h+var_6DC+4]
0x9082A8: mov     eax, [eax+edx*4+990h]
0x9082AF: mov     edx, [ebp+arg_8]
0x9082B2: push    ecx
0x9082B3: push    edx
0x9082B4: mov     edx, [ebp+arg_0]
0x9082B7: lea     ecx, [esp+708h+var_42C]
0x9082BE: push    ecx
0x9082BF: push    edx
0x9082C0: call    eax
0x9082C2: add     esp, 10h
0x9082C5: jmp     short loc_9082CC
0x9082C7: call    sub_8E0970
0x9082CC: mov     [edi+8], eax
0x9082CF: mov     eax, [esp+700h+var_6E8]
0x9082D3: mov     ecx, [eax]
0x9082D5: mov     [edi], ecx
0x9082D7: mov     eax, [esi+4]
0x9082DA: mov     ecx, [esi]
0x9082DC: lea     edx, [eax+eax*2]
0x9082DF: lea     edx, [ecx+edx*4]
0x9082E2: mov     ecx, [esp+700h+var_6E8]
0x9082E6: mov     [esp+700h+var_6E4], edx
0x9082EA: mov     edx, [esp+700h+var_640]
0x9082F1: mov     ebx, [esp+700h+var_6E0]
0x9082F5: add     ecx, 4
0x9082F8: add     edi, 0Ch
0x9082FB: cmp     ecx, ebx
0x9082FD: mov     [esp+700h+var_6E8], ecx
0x908301: jnz     loc_908150
0x908307: jmp     loc_90877A
0x90830C: mov     edx, [esp+700h+var_63C]
0x908313: cmp     edx, 1
0x908316: mov     byte ptr [esp+700h+var_6E0], 0
0x90831B: jle     short loc_90833D
0x90831D: mov     eax, [esp+700h+var_6E0]
0x908321: mov     ecx, [esp+700h+var_640]
0x908328: push    eax
0x908329: dec     edx
0x90832A: push    edx
0x90832B: push    0
0x90832D: push    ecx
0x90832E: call    sub_8F6580
0x908333: mov     edx, [esp+710h+var_63C]
0x90833A: add     esp, 10h
0x90833D: mov     eax, [esp+700h+var_6B4]
0x908341: mov     ecx, [eax+8]
0x908344: mov     edi, [eax+0Ch]
0x908347: mov     eax, [eax+10h]
0x90834A: mov     ebx, [esp+700h+var_640]
0x908351: lea     eax, [eax+eax*2]
0x908354: mov     [esp+700h+var_6EC], ecx
0x908358: lea     ecx, [edi+eax*4]
0x90835B: lea     eax, [ebx+edx*4]
0x90835E: mov     dword ptr [esp+700h+var_6DC+8], eax
0x908362: xor     eax, eax
0x908364: mov     dword ptr [esp+700h+var_6DC+0Ch], eax
0x908368: mov     dword ptr [esp+700h+var_6DC+10h], eax
0x90836C: mov     eax, ds:0BA9DE4h
0x908371: mov     [esp+700h+var_6B8], ecx
0x908375: mov     ecx, large fs:2Ch
0x90837C: mov     eax, [ecx+eax*4]
0x90837F: mov     [esp+700h+var_6E4], eax
0x908383: mov     eax, [eax+19Ch]
0x908389: test    eax, eax
0x90838B: mov     esi, edx
0x90838D: mov     dword ptr [esp+700h+var_6DC+14h], 80000000h
0x908395: jnz     short loc_90839C
0x908397: mov     eax, ds:0BA7D9Ch
0x90839C: mov     ecx, [eax+20h]
0x90839F: lea     edx, [edx+edx*2]
0x9083A2: lea     edx, ds:10h[edx*4]
0x9083A9: and     edx, 0FFFFFFF0h
0x9083AC: mov     [esp+700h+var_6E0], ecx
0x9083B0: add     ecx, edx
0x9083B2: cmp     ecx, [eax+2Ch]
0x9083B5: ja      short loc_9083C0
0x9083B7: mov     [eax+20h], ecx
0x9083BA: mov     eax, [esp+700h+var_6E0]
0x9083BE: jmp     short loc_9083D0
0x9083C0: mov     ecx, [eax]
0x9083C2: mov     [esp+700h+var_6E0], ecx
0x9083C6: mov     ecx, eax
0x9083C8: mov     eax, [esp+700h+var_6E0]
0x9083CC: push    edx
0x9083CD: call    dword ptr [eax+0Ch]
0x9083D0: or      esi, 80000000h
0x9083D6: mov     ecx, esi
0x9083D8: mov     dword ptr [esp+700h+var_6DC+0Ch], eax
0x9083DC: mov     dword ptr [esp+700h+var_6DC+14h], ecx
0x9083E0: mov     dword ptr [esp+700h+var_6DC+18h], eax
0x9083E4: mov     eax, [esp+700h+var_63C]
0x9083EB: and     ecx, 3FFFFFFFh
0x9083F1: cmp     ecx, eax
0x9083F3: mov     esi, eax
0x9083F5: jge     short loc_90840F
0x9083F7: add     ecx, ecx
0x9083F9: cmp     eax, ecx
0x9083FB: jge     short loc_9083FF
0x9083FD: mov     eax, ecx
0x9083FF: push    0Ch
0x908401: push    eax
0x908402: lea     ecx, [esp+708h+var_6DC+0Ch]
0x908406: push    ecx
0x908407: call    sub_8A6E40
0x90840C: add     esp, 0Ch
0x90840F: cmp     edi, [esp+700h+var_6B8]
0x908413: mov     edx, dword ptr [esp+700h+var_6DC+0Ch]
0x908417: mov     dword ptr [esp+700h+var_6DC+10h], esi
0x90841B: mov     [esp+700h+var_6E8], edx
0x90841F: jz      loc_90858A
0x908425: cmp     ebx, dword ptr [esp+700h+var_6DC+8]
0x908429: jz      loc_90856D
0x90842F: mov     esi, [ebx]
0x908431: mov     eax, [edi]
0x908433: cmp     esi, eax
0x908435: jnz     short loc_908461
0x908437: mov     eax, [esp+700h+var_6E8]
0x90843B: mov     ecx, edi
0x90843D: mov     esi, [ecx]
0x90843F: mov     edx, eax
0x908441: mov     [edx], esi
0x908443: mov     esi, [ecx+4]
0x908446: mov     [edx+4], esi
0x908449: mov     ecx, [ecx+8]
0x90844C: add     eax, 0Ch
0x90844F: add     edi, 0Ch
0x908452: mov     [edx+8], ecx
0x908455: mov     [esp+700h+var_6E8], eax
0x908459: add     ebx, 4
0x90845C: jmp     loc_908561
0x908461: jnb     loc_908550
0x908467: mov     ecx, [esp+700h+var_430]
0x90846E: mov     edx, [ecx]
0x908470: lea     eax, [esp+700h+var_410]
0x908477: push    eax
0x908478: push    esi
0x908479: call    dword ptr [edx+28h]
0x90847C: mov     [esp+700h+var_428], esi
0x908483: mov     [esp+700h+var_42C], eax
0x90848A: mov     esi, [ebx]
0x90848C: mov     eax, [ebp+arg_8]
0x90848F: mov     ecx, [eax+4]
0x908492: mov     edx, [ecx]
0x908494: push    esi
0x908495: mov     esi, [esp+704h+var_430]
0x90849C: push    esi
0x90849D: lea     esi, [esp+708h+var_42C]
0x9084A4: push    esi
0x9084A5: mov     esi, [ebp+arg_0]
0x9084A8: push    esi
0x9084A9: push    eax
0x9084AA: lea     eax, [esp+714h+var_6DC+3]
0x9084AE: push    eax
0x9084AF: call    dword ptr [edx]
0x9084B1: cmp     byte ptr [eax], 0
0x9084B4: jz      loc_908530
0x9084BA: mov     ecx, [ebp+arg_8]
0x9084BD: mov     edx, [ecx]
0x9084BF: mov     eax, esi
0x9084C1: mov     ecx, [eax]
0x9084C3: mov     dword ptr [esp+700h+var_6DC+4], edx
0x9084C7: mov     edx, [ecx]
0x9084C9: call    dword ptr [edx+8]
0x9084CC: mov     ecx, [esp+700h+var_42C]
0x9084D3: mov     esi, eax
0x9084D5: mov     eax, [ecx]
0x9084D7: call    dword ptr [eax+8]
0x9084DA: mov     ecx, [ebp+arg_8]
0x9084DD: mov     dl, [ecx+0Ch]
0x9084E0: test    dl, dl
0x9084E2: mov     ecx, dword ptr [esp+700h+var_6DC+4]
0x9084E6: jz      short loc_9084F0
0x9084E8: add     ecx, 590h
0x9084EE: jmp     short loc_9084F6
0x9084F0: add     ecx, 190h
0x9084F6: shl     esi, 5
0x9084F9: add     esi, eax
0x9084FB: movzx   eax, byte ptr [esi+ecx]
0x9084FF: mov     ecx, [esp+700h+var_6EC]
0x908503: lea     edx, [eax+eax*4]
0x908506: mov     eax, dword ptr [esp+700h+var_6DC+4]
0x90850A: mov     eax, [eax+edx*4+990h]
0x908511: mov     edx, [ebp+arg_8]
0x908514: push    ecx
0x908515: push    edx
0x908516: mov     edx, [ebp+arg_0]
0x908519: lea     ecx, [esp+708h+var_42C]
0x908520: push    ecx
0x908521: push    edx
0x908522: call    eax
0x908524: mov     ecx, [esp+710h+var_6E8]
0x908528: add     esp, 10h
0x90852B: mov     [ecx+8], eax
0x90852E: jmp     short loc_90853C
0x908530: call    sub_8E0970
0x908535: mov     edx, [esp+700h+var_6E8]
0x908539: mov     [edx+8], eax
0x90853C: mov     eax, [esp+700h+var_6E8]
0x908540: mov     ecx, [ebx]
0x908542: mov     [eax], ecx
0x908544: add     eax, 0Ch
0x908547: mov     [esp+700h+var_6E8], eax
0x90854B: add     ebx, 4
0x90854E: jmp     short loc_908561
0x908550: mov     eax, [edi+8]
0x908553: test    eax, eax
0x908555: jz      short loc_90855E
0x908557: mov     ecx, eax
0x908559: mov     edx, [ecx]
0x90855B: call    dword ptr [edx+18h]
0x90855E: add     edi, 0Ch
0x908561: cmp     edi, [esp+700h+var_6B8]
0x908565: jnz     loc_908425
0x90856B: jmp     short loc_90858A
0x90856D: mov     esi, [esp+700h+var_6B8]
0x908571: cmp     edi, esi
0x908573: jz      short loc_90858A
0x908575: mov     eax, [edi+8]
0x908578: test    eax, eax
0x90857A: jz      short loc_908583
0x90857C: mov     ecx, eax
0x90857E: mov     eax, [ecx]
0x908580: call    dword ptr [eax+18h]
0x908583: add     edi, 0Ch
0x908586: cmp     edi, esi
0x908588: jnz     short loc_908575
0x90858A: cmp     ebx, dword ptr [esp+700h+var_6DC+8]
0x90858E: jz      loc_908674
0x908594: mov     esi, [ebx]
0x908596: mov     ecx, [esp+700h+var_430]
0x90859D: mov     edx, [ecx]
0x90859F: lea     eax, [esp+700h+var_410]
0x9085A6: push    eax
0x9085A7: push    esi
0x9085A8: call    dword ptr [edx+28h]
0x9085AB: mov     [esp+700h+var_428], esi
0x9085B2: mov     [esp+700h+var_42C], eax
0x9085B9: mov     esi, [ebx]
0x9085BB: mov     eax, [ebp+arg_8]
0x9085BE: mov     ecx, [eax+4]
0x9085C1: mov     edx, [ecx]
0x9085C3: push    esi
0x9085C4: mov     esi, [esp+704h+var_430]
0x9085CB: push    esi
0x9085CC: lea     esi, [esp+708h+var_42C]
0x9085D3: push    esi
0x9085D4: mov     esi, [ebp+arg_0]
0x9085D7: push    esi
0x9085D8: push    eax
0x9085D9: lea     eax, [esp+714h+var_6DC+3]
0x9085DD: push    eax
0x9085DE: call    dword ptr [edx]
0x9085E0: cmp     byte ptr [eax], 0
0x9085E3: jz      short loc_90864A
0x9085E5: mov     ecx, [ebp+arg_8]
0x9085E8: mov     edi, [ecx]
0x9085EA: mov     edx, esi
0x9085EC: mov     ecx, [edx]
0x9085EE: mov     eax, [ecx]
0x9085F0: call    dword ptr [eax+8]
0x9085F3: mov     ecx, [esp+700h+var_42C]
0x9085FA: mov     edx, [ecx]
0x9085FC: mov     esi, eax
0x9085FE: call    dword ptr [edx+8]
0x908601: mov     edx, [ebp+arg_8]
0x908604: mov     cl, [edx+0Ch]
0x908607: test    cl, cl
0x908609: lea     ecx, [edi+590h]
0x90860F: jnz     short loc_908617
0x908611: lea     ecx, [edi+190h]
0x908617: shl     esi, 5
0x90861A: add     esi, eax
0x90861C: movzx   eax, byte ptr [esi+ecx]
0x908620: mov     ecx, [esp+700h+var_6EC]
0x908624: push    ecx
0x908625: push    edx
0x908626: lea     eax, [eax+eax*4]
0x908629: mov     edi, [edi+eax*4+990h]
0x908630: mov     eax, [ebp+arg_0]
0x908633: lea     edx, [esp+708h+var_42C]
0x90863A: push    edx
0x90863B: push    eax
0x90863C: call    edi
0x90863E: mov     ecx, [esp+710h+var_6E8]
0x908642: add     esp, 10h
0x908645: mov     [ecx+8], eax
0x908648: jmp     short loc_908656
0x90864A: call    sub_8E0970
0x90864F: mov     edx, [esp+700h+var_6E8]
0x908653: mov     [edx+8], eax
0x908656: mov     eax, [esp+700h+var_6E8]
0x90865A: mov     ecx, [ebx]
0x90865C: mov     [eax], ecx
0x90865E: add     eax, 0Ch
0x908661: mov     [esp+700h+var_6E8], eax
0x908665: mov     eax, dword ptr [esp+700h+var_6DC+8]
0x908669: add     ebx, 4
0x90866C: cmp     ebx, eax
0x90866E: jnz     loc_908594
0x908674: mov     esi, [esp+700h+var_6B4]
0x908678: mov     ecx, [esi+14h]
0x90867B: mov     edx, dword ptr [esp+700h+var_6DC+10h]
0x90867F: mov     eax, ecx
0x908681: and     eax, 3FFFFFFFh
0x908686: cmp     eax, edx
0x908688: jge     short loc_9086EE
0x90868A: test    ecx, ecx
0x90868C: js      short loc_9086B4
0x90868E: mov     edx, [esp+700h+var_6E4]
0x908692: mov     ecx, [edx+19Ch]
0x908698: test    ecx, ecx
0x90869A: jnz     short loc_9086A2
0x90869C: mov     ecx, ds:0BA7D9Ch
0x9086A2: mov     edx, [esi+0Ch]
0x9086A5: lea     eax, [eax+eax*2]
0x9086A8: push    14h
0x9086AA: shl     eax, 2
0x9086AD: push    eax
0x9086AE: push    edx
0x9086AF: call    sub_8A75D0
0x9086B4: mov     eax, [esp+700h+var_6E4]
0x9086B8: mov     ecx, [eax+19Ch]
0x9086BE: test    ecx, ecx
0x9086C0: jnz     short loc_9086C8
0x9086C2: mov     ecx, ds:0BA7D9Ch
0x9086C8: mov     eax, dword ptr [esp+700h+var_6DC+10h]
0x9086CC: lea     edx, [eax+eax*2]
0x9086CF: push    14h
0x9086D1: shl     edx, 2
0x9086D4: push    edx
0x9086D5: call    sub_8A7560
0x9086DA: mov     edx, dword ptr [esp+700h+var_6DC+10h]
0x9086DE: mov     [esi+0Ch], eax
0x9086E1: mov     eax, [esi+14h]
0x9086E4: and     eax, 40000000h
0x9086E9: or      eax, edx
0x9086EB: mov     [esi+14h], eax
0x9086EE: test    edx, edx
0x9086F0: mov     [esi+10h], edx
0x9086F3: mov     esi, [esi+0Ch]
0x9086F6: jle     short loc_90871D
0x9086F8: mov     eax, dword ptr [esp+700h+var_6DC+0Ch]
0x9086FC: mov     ecx, esi
0x9086FE: mov     edi, edi
0x908700: mov     esi, eax
0x908702: mov     ebx, [esi]
0x908704: mov     edi, ecx
0x908706: mov     [edi], ebx
0x908708: mov     ebx, [esi+4]
0x90870B: mov     [edi+4], ebx
0x90870E: mov     esi, [esi+8]
0x908711: add     eax, 0Ch
0x908714: add     ecx, 0Ch
0x908717: dec     edx
0x908718: mov     [edi+8], esi
0x90871B: jnz     short loc_908700
0x90871D: mov     esi, [esp+700h+var_6E4]
0x908721: mov     ecx, [esi+19Ch]
0x908727: test    ecx, ecx
0x908729: mov     eax, dword ptr [esp+700h+var_6DC+18h]
0x90872D: jnz     short loc_908735
0x90872F: mov     ecx, ds:0BA7D9Ch
0x908735: cmp     eax, [ecx+28h]
0x908738: mov     [ecx+20h], eax
0x90873B: jnz     short loc_908743
0x90873D: mov     edx, [ecx]
0x90873F: push    eax
0x908740: call    dword ptr [edx+10h]
0x908743: mov     eax, dword ptr [esp+700h+var_6DC+14h]
0x908747: test    eax, eax
0x908749: js      short loc_908773
0x90874B: mov     ecx, [esi+19Ch]
0x908751: test    ecx, ecx
0x908753: jnz     short loc_90875B
0x908755: mov     ecx, ds:0BA7D9Ch
0x90875B: mov     edx, dword ptr [esp+700h+var_6DC+0Ch]
0x90875F: and     eax, 3FFFFFFFh
0x908764: lea     eax, [eax+eax*2]
0x908767: push    14h
0x908769: shl     eax, 2
0x90876C: push    eax
0x90876D: push    edx
0x90876E: call    sub_8A75D0
0x908773: mov     edx, [esp+700h+var_640]
0x90877A: mov     eax, [esp+700h+var_638]
0x908781: test    eax, eax
0x908783: js      short loc_9087B6
0x908785: mov     ecx, large fs:2Ch
0x90878C: mov     esi, ds:0BA9DE4h
0x908792: mov     ecx, [ecx+esi*4]
0x908795: mov     ecx, [ecx+19Ch]
0x90879B: test    ecx, ecx
0x90879D: jnz     short loc_9087A5
0x90879F: mov     ecx, ds:0BA7D9Ch
0x9087A5: and     eax, 3FFFFFFFh
0x9087AA: push    14h
0x9087AC: shl     eax, 2
0x9087AF: push    eax
0x9087B0: push    edx
0x9087B1: call    sub_8A75D0
0x9087B6: mov     ecx, [esp+700h+var_6B4]
0x9087BA: mov     eax, [ecx+10h]
0x9087BD: mov     esi, [ecx+0Ch]
0x9087C0: mov     ecx, [ebp+arg_4]
0x9087C3: lea     edx, [eax+eax*2]
0x9087C6: mov     eax, esi
0x9087C8: lea     ebx, [eax+edx*4]
0x9087CB: mov     edx, [ecx+8]
0x9087CE: mov     eax, ds:0BA9DE4h
0x9087D3: mov     dword ptr [esp+700h+var_6AC+4], edx
0x9087D7: mov     edx, large fs:2Ch
0x9087DE: mov     eax, [edx+eax*4]
0x9087E1: mov     edi, [eax+1A4h]
0x9087E7: cmp     edi, [eax+1A8h]
0x9087ED: mov     dword ptr [esp+700h+var_6AC+8], ecx
0x9087F1: jnb     short loc_908825
0x9087F3: mov     eax, ds:0BA9DE4h
0x9087F8: mov     edx, [edx+eax*4]
0x9087FB: mov     edi, [edx+1A4h]
0x908801: mov     [esp+700h+var_6EC], edx
0x908805: mov     dword ptr [edi], offset aStnarrowphase; "StNarrowPhase"
0x90880B: rdtsc
0x90880D: mov     [esp+700h+var_6E0], eax
0x908811: mov     edx, [esp+700h+var_6E0]
0x908815: mov     eax, [esp+700h+var_6EC]
0x908819: mov     [edi+4], edx
0x90881C: add     edi, 0Ch
0x90881F: mov     [eax+1A4h], edi
0x908825: cmp     esi, ebx
0x908827: mov     ecx, [ecx]
0x908829: mov     edi, [ecx+0Ch]
0x90882C: jz      short loc_90886C
0x90882E: mov     edi, edi
0x908830: mov     ecx, [esi]
0x908832: mov     edx, [edi]
0x908834: lea     eax, [esp+700h+var_210]
0x90883B: push    eax
0x90883C: push    ecx
0x90883D: mov     ecx, edi
0x90883F: call    dword ptr [edx+28h]
0x908842: mov     ecx, [esi]
0x908844: mov     [esp+700h+var_6B0], eax
0x908848: mov     eax, [ebp+arg_C]
0x90884B: push    eax
0x90884C: mov     eax, [ebp+arg_8]
0x90884F: push    eax
0x908850: lea     eax, [esp+708h+var_6B0]
0x908854: mov     dword ptr [esp+708h+var_6AC], ecx
0x908858: mov     ecx, [esi+8]
0x90885B: mov     edx, [ecx]
0x90885D: push    eax
0x90885E: mov     eax, [ebp+arg_0]
0x908861: push    eax
0x908862: call    dword ptr [edx+14h]
0x908865: add     esi, 0Ch
0x908868: cmp     esi, ebx
0x90886A: jnz     short loc_908830
0x90886C: mov     ecx, large fs:2Ch
0x908873: mov     edx, ds:0BA9DE4h
0x908879: mov     eax, [ecx+edx*4]
0x90887C: mov     esi, [eax+1A4h]
0x908882: cmp     esi, [eax+1A8h]
0x908888: jnb     short loc_9088AE
0x90888A: mov     esi, eax
0x90888C: mov     ecx, [esi+1A4h]
0x908892: mov     dword ptr [ecx], offset aLt_0; "lt"
0x908898: rdtsc
0x90889A: mov     [esp+700h+var_6E0], eax
0x90889E: mov     edx, [esp+700h+var_6E0]
0x9088A2: mov     [ecx+4], edx
0x9088A5: add     ecx, 0Ch
0x9088A8: mov     [esi+1A4h], ecx
0x9088AE: mov     ecx, [esp+700h+var_4]
0x9088B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9088BA: pop     edi
0x9088BB: pop     esi
0x9088BC: pop     ebx
0x9088BD: mov     esp, ebp
0x9088BF: pop     ebp
0x9088C0: retn    10h
