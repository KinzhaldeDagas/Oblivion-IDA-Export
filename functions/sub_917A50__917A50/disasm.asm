0x917A50: push    ebp
0x917A51: mov     ebp, esp
0x917A53: and     esp, 0FFFFFFF0h
0x917A56: sub     esp, 18h
0x917A59: push    esi
0x917A5A: mov     esi, ecx
0x917A5C: movaps  xmm3, xmmword ptr [esi+40h]
0x917A60: movaps  xmm2, xmmword ptr [esi+20h]
0x917A64: movaps  xmm5, xmmword ptr [esi+30h]
0x917A68: mov     ecx, [esi+10h]
0x917A6B: movaps  xmm4, xmm3
0x917A6E: shufps  xmm4, xmm3, 44h ; 'D'
0x917A72: movaps  xmm7, xmm3
0x917A75: push    edi
0x917A76: mov     edi, [ebp+arg_0]
0x917A79: movaps  xmm1, xmmword ptr [edi]
0x917A7C: movaps  xmm0, xmm2
0x917A7F: shufps  xmm0, xmm5, 44h ; 'D'
0x917A83: shufps  xmm7, xmm3, 0EEh ; 'î'
0x917A87: shufps  xmm2, xmm5, 0EEh ; 'î'
0x917A8B: movaps  xmm5, xmm0
0x917A8E: movaps  xmm3, xmm1
0x917A91: shufps  xmm3, xmm1, 55h ; 'U'
0x917A95: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x917A99: mulps   xmm5, xmm3
0x917A9C: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x917AA0: movaps  xmm3, xmm1
0x917AA3: movaps  xmm6, xmm1
0x917AA6: shufps  xmm3, xmm1, 0
0x917AAA: mulps   xmm0, xmm3
0x917AAD: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x917AB1: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x917AB5: mulps   xmm2, xmm6
0x917AB8: addps   xmm0, xmm5
0x917ABB: addps   xmm0, xmm2
0x917ABE: lea     edx, [esp+20h+var_10]
0x917AC2: movaps  [esp+20h+var_10], xmm0
0x917AC7: mov     eax, [ecx]
0x917AC9: push    edx
0x917ACA: call    dword ptr [eax+10h]
0x917ACD: fstp    [esp+20h+var_14]
0x917AD1: movss   xmm0, [esp+20h+var_14]
0x917AD7: movaps  xmm1, [esp+20h+var_10]
0x917ADC: movaps  xmm4, xmmword ptr [esi+40h]
0x917AE0: movaps  xmm2, xmm0
0x917AE3: shufps  xmm2, xmm0, 0
0x917AE7: movaps  xmm0, xmm2
0x917AEA: movaps  xmm2, xmmword ptr [esi+50h]
0x917AEE: mulps   xmm0, xmm1
0x917AF1: movaps  xmm1, xmmword ptr [edi]
0x917AF4: movaps  xmm3, xmm0
0x917AF7: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x917AFB: mulps   xmm4, xmm3
0x917AFE: movaps  xmm3, xmmword ptr [esi+30h]
0x917B02: addps   xmm4, xmm2
0x917B05: movaps  xmm2, xmm0
0x917B08: shufps  xmm2, xmm0, 55h ; 'U'
0x917B0C: mulps   xmm3, xmm2
0x917B0F: movaps  xmm2, xmm0
0x917B12: shufps  xmm2, xmm0, 0
0x917B16: movaps  xmm0, xmmword ptr [esi+20h]
0x917B1A: mulps   xmm0, xmm2
0x917B1D: addps   xmm0, xmm3
0x917B20: addps   xmm0, xmm4
0x917B23: mulps   xmm0, xmm1
0x917B26: movaps  xmm1, xmm0
0x917B29: shufps  xmm1, xmm0, 55h ; 'U'
0x917B2D: movaps  xmm2, xmm0
0x917B30: addss   xmm1, xmm0
0x917B34: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x917B38: lea     eax, [esp+20h+var_14]
0x917B3C: addss   xmm2, xmm1
0x917B40: pop     edi
0x917B41: movss   dword ptr [eax], xmm2
0x917B45: fld     [esp+1Ch+var_14]
0x917B49: pop     esi
0x917B4A: mov     esp, ebp
0x917B4C: pop     ebp
0x917B4D: retn    4
