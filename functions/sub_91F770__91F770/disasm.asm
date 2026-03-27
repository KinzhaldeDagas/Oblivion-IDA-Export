0x91F770: push    ebp
0x91F771: mov     ebp, esp
0x91F773: and     esp, 0FFFFFFF0h
0x91F776: sub     esp, 2F4h
0x91F77C: fld     [ebp+arg_4]
0x91F77F: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x91F786: push    ebx
0x91F787: mov     ebx, [ebp+arg_0]
0x91F78A: push    esi
0x91F78B: mov     esi, [ebp+arg_C]
0x91F78E: fsub    dword ptr [esi+5Ch]
0x91F791: mov     eax, [esi+0C0h]
0x91F797: movaps  xmm1, xmmword ptr [esi+60h]
0x91F79B: mov     edx, [esi]
0x91F79D: fmul    dword ptr [esi+6Ch]
0x91F7A0: mov     [esp+2FCh+var_180], eax
0x91F7A7: push    edi
0x91F7A8: fstp    [esp+300h+var_2EC]
0x91F7AC: lea     eax, [esp+300h+var_1B0]
0x91F7B3: movss   xmm0, [esp+300h+var_2EC]
0x91F7B9: shufps  xmm0, xmm0, 0
0x91F7BD: movaps  xmm2, xmm0
0x91F7C0: subps   xmm3, xmm0
0x91F7C3: movaps  xmm0, xmmword ptr [ebx]
0x91F7C6: mulps   xmm2, xmm1
0x91F7C9: movaps  xmm1, xmmword ptr [esi+50h]
0x91F7CD: mulps   xmm3, xmm1
0x91F7D0: addps   xmm3, xmm2
0x91F7D3: subps   xmm0, xmm3
0x91F7D6: push    eax
0x91F7D7: mov     ecx, esi
0x91F7D9: movaps  [esp+304h+var_1C0], xmm0
0x91F7E1: call    dword ptr [edx+3Ch]
0x91F7E4: fld     [ebp+arg_4]
0x91F7E7: mov     edi, [ebp+arg_10]
0x91F7EA: fsub    dword ptr [edi+5Ch]
0x91F7ED: movaps  xmm1, xmmword ptr [edi+60h]
0x91F7F1: mov     ecx, [edi+0C0h]
0x91F7F7: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x91F7FE: mov     edx, [edi]
0x91F800: fmul    dword ptr [edi+6Ch]
0x91F803: lea     eax, [esp+2F4h+var_1F4]
0x91F80A: mov     [esp+2F4h+var_1C4], ecx
0x91F811: fstp    dword ptr [esp+2F4h+var_2E8+8]
0x91F815: push    eax
0x91F816: movss   xmm0, dword ptr [esp+2F8h+var_2E8+8]
0x91F81C: shufps  xmm0, xmm0, 0
0x91F820: movaps  xmm2, xmm0
0x91F823: subps   xmm3, xmm0
0x91F826: movaps  xmm0, xmmword ptr [ebx]
0x91F829: mulps   xmm2, xmm1
0x91F82C: movaps  xmm1, xmmword ptr [edi+50h]
0x91F830: mulps   xmm3, xmm1
0x91F833: addps   xmm3, xmm2
0x91F836: subps   xmm0, xmm3
0x91F839: mov     ecx, edi
0x91F83B: movaps  [esp+2F8h+var_204], xmm0
0x91F843: call    dword ptr [edx+3Ch]
0x91F846: movaps  xmm0, xmmword ptr [esi+0D0h]
0x91F84D: mov     ecx, [esi+6Ch]
0x91F850: movaps  xmm1, xmmword ptr [esi+50h]
0x91F854: movaps  xmm2, xmmword ptr [esi+60h]
0x91F858: mov     edx, [edi+6Ch]
0x91F85B: movaps  [esp+2F4h+anonymous_2], xmm0
0x91F860: movaps  xmm0, xmmword ptr [esi+0E0h]
0x91F867: movaps  [esp+2F4h+anonymous_0], xmm0
0x91F86C: movaps  xmm0, xmmword ptr [edi+0D0h]
0x91F873: subps   xmm2, xmm1
0x91F876: movaps  xmmword ptr [esp+2F4h+var_2C8+4], xmm0
0x91F87B: movaps  xmm0, xmmword ptr [edi+0E0h]
0x91F882: mov     dword ptr [esp+2F4h+var_2E8+8], ecx
0x91F886: movaps  [esp+2F4h+anonymous_1], xmm0
0x91F88B: movss   xmm0, dword ptr [esp+2F4h+var_2E8+8]
0x91F891: movaps  xmm1, xmm0
0x91F894: shufps  xmm1, xmm0, 0
0x91F898: mulps   xmm1, xmm2
0x91F89B: movaps  [esp+2F4h+anonymous_4], xmm1
0x91F8A3: movaps  xmm1, xmmword ptr [esi+0A0h]
0x91F8AA: movaps  xmm2, xmm0
0x91F8AD: shufps  xmm2, xmm0, 0
0x91F8B1: mulps   xmm2, xmm1
0x91F8B4: movaps  [esp+2F4h+var_214], xmm2
0x91F8BC: mov     dword ptr [esp+2F4h+var_2E8+8], edx
0x91F8C0: fld     dword ptr [ebx+10h]
0x91F8C3: movss   xmm0, dword ptr [esp+2F4h+var_2E8+8]
0x91F8C9: movaps  xmm1, xmmword ptr [edi+50h]
0x91F8CD: fabs
0x91F8CF: fld     dword ptr [ebx+14h]
0x91F8D2: movaps  xmm2, xmmword ptr [edi+60h]
0x91F8D6: fabs
0x91F8D8: subps   xmm2, xmm1
0x91F8DB: fst     dword ptr [esp+2F4h+var_2E8+8]
0x91F8DF: fld     dword ptr [ebx+18h]
0x91F8E2: fabs
0x91F8E4: movaps  xmm1, xmm0
0x91F8E7: fstp    dword ptr [esp+2F4h+var_2D8]
0x91F8EB: shufps  xmm1, xmm0, 0
0x91F8EF: fcomp   st(1)
0x91F8F1: mulps   xmm1, xmm2
0x91F8F4: movaps  xmm2, xmm0
0x91F8F7: movaps  xmmword ptr [esp+2F4h+var_248+4], xmm1
0x91F8FF: movaps  xmm1, xmmword ptr [edi+0A0h]
0x91F906: fnstsw  ax
0x91F908: shufps  xmm2, xmm0, 0
0x91F90C: movaps  xmm0, xmmword ptr [ebx+10h]
0x91F910: xor     ecx, ecx
0x91F912: test    ah, 5
0x91F915: mulps   xmm2, xmm1
0x91F918: movaps  [esp+2F4h+anonymous_3], xmm2
0x91F920: movaps  [esp+2F4h+anonymous_5], xmm0
0x91F925: mov     edx, 1
0x91F92A: mov     dword ptr [esp+2F4h+var_2E8+0Ch], 2
0x91F932: jp      short loc_91F941
0x91F934: fstp    st
0x91F936: xor     edx, edx
0x91F938: fld     dword ptr [esp+2F4h+var_2E8+8]
0x91F93C: mov     ecx, 1
0x91F941: fld     dword ptr [esp+2F4h+var_2D8]
0x91F945: fcomp   st(1)
0x91F947: fnstsw  ax
0x91F949: fstp    st
0x91F94B: test    ah, 5
0x91F94E: jp      short loc_91F959
0x91F950: mov     eax, ecx
0x91F952: mov     ecx, 2
0x91F957: jmp     short loc_91F95D
0x91F959: mov     eax, dword ptr [esp+2F4h+var_2E8+0Ch]
0x91F95D: mov     dword ptr [esp+ecx*4+80h], 0
0x91F968: mov     [esp+2F4h+var_268], 0
0x91F973: shl     eax, 2
0x91F976: lea     ecx, ds:0[edx*4]
0x91F97D: mov     edx, [eax+ebx+10h]
0x91F981: mov     [esp+ecx+80h], edx
0x91F988: fld     dword ptr [ecx+ebx+10h]
0x91F98C: fchs
0x91F98E: mov     dword ptr [esp+2F4h+var_2E8+0Ch], 40400000h
0x91F996: fstp    dword ptr [esp+eax+80h]
0x91F99D: movaps  xmm2, xmmword ptr [esp+80h]
0x91F9A5: movaps  xmm0, xmm2
0x91F9A8: mulps   xmm0, xmm2
0x91F9AB: movaps  xmm1, xmm0
0x91F9AE: shufps  xmm1, xmm0, 55h ; 'U'
0x91F9B2: addss   xmm1, xmm0
0x91F9B6: movaps  xmm3, xmm0
0x91F9B9: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x91F9BD: movaps  xmm0, xmm3
0x91F9C0: movss   xmm3, dword ptr [esp+2F4h+var_2E8+0Ch]
0x91F9C6: addss   xmm0, xmm1
0x91F9CA: movaps  [esp+2F4h+var_2D8+4], xmm0
0x91F9CF: rsqrtss xmm1, xmm0
0x91F9D3: movss   dword ptr [esp+2F4h+var_2D8+4], xmm1
0x91F9D9: movaps  xmm1, [esp+2F4h+var_2D8+4]
0x91F9DE: mulss   xmm0, xmm1
0x91F9E2: mulss   xmm0, xmm1
0x91F9E6: subss   xmm3, xmm0
0x91F9EA: mov     dword ptr [esp+2F4h+var_2E8+0Ch], 3F000000h
0x91F9F2: movss   xmm0, dword ptr [esp+2F4h+var_2E8+0Ch]
0x91F9F8: mulss   xmm0, xmm1
0x91F9FC: mulss   xmm0, xmm3
0x91FA00: movaps  xmm1, xmm0
0x91FA03: shufps  xmm1, xmm0, 0
0x91FA07: movaps  xmm0, xmm1
0x91FA0A: movaps  xmm1, xmmword ptr [ebx+10h]
0x91FA0E: mulps   xmm0, xmm2
0x91FA11: movaps  xmm2, xmm0
0x91FA14: shufps  xmm2, xmm0, 0C9h ; 'É'
0x91FA18: movaps  xmm3, xmm1
0x91FA1B: lea     eax, [esp+2F4h+var_164]
0x91FA22: push    eax
0x91FA23: movaps  xmmword ptr [esp+84h], xmm0
0x91FA2B: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x91FA2F: mulps   xmm3, xmm2
0x91FA32: movaps  xmm2, xmm0
0x91FA35: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x91FA39: lea     ecx, [esp+2F8h+anonymous_5]
0x91FA3D: push    ecx
0x91FA3E: lea     edx, [esp+2FCh+var_204]
0x91FA45: movaps  xmm0, xmm1
0x91FA48: shufps  xmm0, xmm1, 0C9h ; 'É'
0x91FA4C: push    edx
0x91FA4D: lea     eax, [esp+300h+var_1C0+0Ch]
0x91FA54: mulps   xmm0, xmm2
0x91FA57: subps   xmm0, xmm3
0x91FA5A: push    eax
0x91FA5B: movaps  [esp+304h+anonymous_6], xmm0
0x91FA63: call    sub_94F6B0
0x91FA68: mov     eax, [ebp+arg_8]
0x91FA6B: lea     ecx, [esp+304h+var_2C8+4]
0x91FA6F: push    ecx
0x91FA70: lea     edx, [esp+308h+anonymous_2]
0x91FA74: push    edx
0x91FA75: push    eax
0x91FA76: lea     ecx, [esp+310h+var_164]
0x91FA7D: push    ecx
0x91FA7E: call    sub_94FC90
0x91FA83: mov     ebx, [ebp+arg_14]
0x91FA86: lea     edx, [esp+314h+var_2D8+4]
0x91FA8A: fstp    dword ptr [ebx]
0x91FA8C: push    edx
0x91FA8D: lea     eax, [esp+318h+var_2C8+4]
0x91FA91: push    eax
0x91FA92: lea     ecx, [esp+31Ch+anonymous_4]
0x91FA99: push    ecx
0x91FA9A: lea     edx, [esp+320h+var_164]
0x91FAA1: push    edx
0x91FAA2: call    sub_94FB80
0x91FAA7: lea     eax, [esp+0D0h]
0x91FAAE: push    eax
0x91FAAF: lea     ecx, [esp+328h+var_248+4]
0x91FAB6: push    ecx
0x91FAB7: lea     edx, [esp+32Ch+anonymous_2]
0x91FABE: push    edx
0x91FABF: lea     eax, [esp+330h+var_164]
0x91FAC6: push    eax
0x91FAC7: call    sub_94FB80
0x91FACC: mov     ecx, dword ptr [esp+334h+var_2D8+4]
0x91FAD0: mov     edx, [esp+0E0h]
0x91FAD7: mov     [ebx+4], ecx
0x91FADA: add     esp, 40h
0x91FADD: lea     ecx, [esp+2F4h+anonymous_2]
0x91FAE1: mov     [ebx+8], edx
0x91FAE4: mov     eax, [esi]
0x91FAE6: push    ecx
0x91FAE7: mov     ecx, esi
0x91FAE9: call    dword ptr [eax+54h]
0x91FAEC: mov     edx, [esi]
0x91FAEE: lea     eax, [esp+2F8h+anonymous_2+0Ch]
0x91FAF2: push    eax
0x91FAF3: mov     ecx, esi
0x91FAF5: call    dword ptr [edx+58h]
0x91FAF8: mov     edx, [edi]
0x91FAFA: lea     eax, [esp+2FCh+var_2D8+0Ch]
0x91FAFE: push    eax
0x91FAFF: mov     ecx, edi
0x91FB01: call    dword ptr [edx+54h]
0x91FB04: mov     edx, [edi]
0x91FB06: lea     eax, [esp+300h+var_2C8+8]
0x91FB0A: push    eax
0x91FB0B: mov     ecx, edi
0x91FB0D: call    dword ptr [edx+58h]
0x91FB10: pop     edi
0x91FB11: pop     esi
0x91FB12: pop     ebx
0x91FB13: mov     esp, ebp
0x91FB15: pop     ebp
0x91FB16: retn
