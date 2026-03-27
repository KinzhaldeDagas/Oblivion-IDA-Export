0x8F1970: push    ebp
0x8F1971: mov     ebp, esp
0x8F1973: and     esp, 0FFFFFFF0h
0x8F1976: push    ecx
0x8F1977: mov     eax, [ebp+arg_8]
0x8F197A: mov     ecx, [eax]
0x8F197C: mov     eax, [ebp+arg_0]
0x8F197F: movaps  xmm0, xmmword ptr [eax+20h]
0x8F1983: push    ebx
0x8F1984: push    esi
0x8F1985: push    edi
0x8F1986: mov     edi, [ebp+arg_4]
0x8F1989: mov     edx, [edi+14h]
0x8F198C: mov     esi, [edi+18h]
0x8F198F: movaps  xmmword ptr [ecx], xmm0
0x8F1992: movaps  xmm1, xmmword ptr [edx+40h]
0x8F1996: movaps  xmm0, xmmword ptr [eax]
0x8F1999: movaps  xmm2, xmmword ptr [esi+40h]
0x8F199D: mov     bl, [edx+0Ch]
0x8F19A0: test    bl, bl
0x8F19A2: subps   xmm0, xmm1
0x8F19A5: movaps  xmm1, xmmword ptr [eax+10h]
0x8F19A9: subps   xmm1, xmm2
0x8F19AC: movaps  xmm2, xmmword ptr [eax+20h]
0x8F19B0: movaps  xmm4, xmm0
0x8F19B3: movaps  xmm3, xmm2
0x8F19B6: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8F19BA: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F19BE: mulps   xmm4, xmm3
0x8F19C1: movaps  xmm3, xmm2
0x8F19C4: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8F19C8: movaps  xmm2, xmm0
0x8F19CB: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F19CF: movaps  xmm0, xmm2
0x8F19D2: mulps   xmm0, xmm3
0x8F19D5: subps   xmm0, xmm4
0x8F19D8: jnz     short loc_8F1A0A
0x8F19DA: movaps  xmm3, xmmword ptr [edx+70h]
0x8F19DE: movaps  xmm4, xmmword ptr [edx+60h]
0x8F19E2: movaps  xmm2, xmm0
0x8F19E5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F19E9: mulps   xmm3, xmm2
0x8F19EC: movaps  xmm2, xmm0
0x8F19EF: shufps  xmm2, xmm0, 55h ; 'U'
0x8F19F3: mulps   xmm4, xmm2
0x8F19F6: movaps  xmm2, xmm0
0x8F19F9: shufps  xmm2, xmm0, 0
0x8F19FD: movaps  xmm0, xmmword ptr [edx+50h]
0x8F1A01: mulps   xmm0, xmm2
0x8F1A04: addps   xmm0, xmm4
0x8F1A07: addps   xmm0, xmm3
0x8F1A0A: movaps  xmmword ptr [ecx+10h], xmm0
0x8F1A0E: movaps  xmm0, xmmword ptr [eax+20h]
0x8F1A12: mov     bl, [esi+0Ch]
0x8F1A15: test    bl, bl
0x8F1A17: movaps  xmm3, xmm0
0x8F1A1A: movaps  xmm2, xmm1
0x8F1A1D: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8F1A21: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F1A25: mulps   xmm3, xmm2
0x8F1A28: movaps  xmm2, xmm1
0x8F1A2B: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8F1A2F: movaps  xmm1, xmm0
0x8F1A32: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F1A36: movaps  xmm0, xmm1
0x8F1A39: mulps   xmm0, xmm2
0x8F1A3C: subps   xmm0, xmm3
0x8F1A3F: jnz     short loc_8F1A71
0x8F1A41: movaps  xmm2, xmmword ptr [esi+70h]
0x8F1A45: movaps  xmm3, xmmword ptr [esi+60h]
0x8F1A49: movaps  xmm1, xmm0
0x8F1A4C: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1A50: mulps   xmm2, xmm1
0x8F1A53: movaps  xmm1, xmm0
0x8F1A56: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1A5A: mulps   xmm3, xmm1
0x8F1A5D: movaps  xmm1, xmm0
0x8F1A60: shufps  xmm1, xmm0, 0
0x8F1A64: movaps  xmm0, xmmword ptr [esi+50h]
0x8F1A68: mulps   xmm0, xmm1
0x8F1A6B: addps   xmm0, xmm3
0x8F1A6E: addps   xmm0, xmm2
0x8F1A71: movaps  xmm1, xmmword ptr [ecx+10h]
0x8F1A75: movaps  xmmword ptr [ecx+20h], xmm0
0x8F1A79: fld     dword ptr [esi+3Ch]
0x8F1A7C: fadd    dword ptr [edx+3Ch]
0x8F1A7F: movaps  xmm0, xmmword ptr [ecx+20h]
0x8F1A83: movaps  xmm2, xmmword ptr [esi+30h]
0x8F1A87: movaps  xmm3, xmm0
0x8F1A8A: fadd    dword ptr ds:0A9B1ECh
0x8F1A90: mulps   xmm3, xmm0
0x8F1A93: movaps  xmm0, xmmword ptr [edx+30h]
0x8F1A97: mulps   xmm3, xmm2
0x8F1A9A: movaps  xmm2, xmm1
0x8F1A9D: mulps   xmm2, xmm1
0x8F1AA0: movaps  xmm1, xmm2
0x8F1AA3: mulps   xmm1, xmm0
0x8F1AA6: movaps  xmm0, xmm1
0x8F1AA9: addps   xmm0, xmm3
0x8F1AAC: movaps  xmm1, xmm0
0x8F1AAF: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1AB3: addss   xmm1, xmm0
0x8F1AB7: movaps  xmm2, xmm0
0x8F1ABA: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1ABE: addss   xmm2, xmm1
0x8F1AC2: lea     ebx, [esp+10h+var_4]
0x8F1AC6: movss   dword ptr [ebx], xmm2
0x8F1ACA: fadd    [esp+10h+var_4]
0x8F1ACE: lea     edx, [esp+10h+var_4]
0x8F1AD2: add     ecx, 30h ; '0'
0x8F1AD5: fst     dword ptr [ecx-4]
0x8F1AD8: fld     dword ptr ds:0A2F948h
0x8F1ADE: fdiv    st, st(1)
0x8F1AE0: fstp    dword ptr [ecx-14h]
0x8F1AE3: movaps  xmm0, xmmword ptr [eax]
0x8F1AE6: movaps  xmm2, xmmword ptr [eax+10h]
0x8F1AEA: movaps  xmm1, xmmword ptr [eax+20h]
0x8F1AEE: fstp    st
0x8F1AF0: subps   xmm2, xmm0
0x8F1AF3: movaps  xmm0, xmm2
0x8F1AF6: mulps   xmm0, xmm1
0x8F1AF9: movaps  xmm1, xmm0
0x8F1AFC: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1B00: movaps  xmm2, xmm0
0x8F1B03: addss   xmm1, xmm0
0x8F1B07: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1B0B: addss   xmm2, xmm1
0x8F1B0F: movss   dword ptr [edx], xmm2
0x8F1B13: fld     [esp+10h+var_4]
0x8F1B17: fmul    dword ptr [edi+4]
0x8F1B1A: mov     edx, [ebp+arg_8]
0x8F1B1D: fstp    dword ptr [ecx-24h]
0x8F1B20: fld     dword ptr [edi+4]
0x8F1B23: pop     edi
0x8F1B24: fchs
0x8F1B26: pop     esi
0x8F1B27: fst     [esp+8+var_4]
0x8F1B2B: pop     ebx
0x8F1B2C: fmul    dword ptr [eax+30h]
0x8F1B2F: fld     [esp+4+var_4]
0x8F1B32: fmul    dword ptr [eax+34h]
0x8F1B35: mov     eax, [edx+4]
0x8F1B38: fxch    st(1)
0x8F1B3A: mov     dword ptr [eax], 30C0Bh
0x8F1B40: fstp    dword ptr [eax+4]
0x8F1B43: add     eax, 0Ch
0x8F1B46: fstp    dword ptr [eax-4]
0x8F1B49: mov     [edx], ecx
0x8F1B4B: mov     [edx+4], eax
0x8F1B4E: mov     esp, ebp
0x8F1B50: pop     ebp
0x8F1B51: retn
