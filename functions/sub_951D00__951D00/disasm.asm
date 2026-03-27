0x951D00: push    ebp
0x951D01: mov     ebp, esp
0x951D03: and     esp, 0FFFFFFF0h
0x951D06: sub     esp, 14h
0x951D09: mov     edx, [ebp+arg_0]
0x951D0C: push    ebx
0x951D0D: push    esi
0x951D0E: push    edi
0x951D0F: mov     edi, [ebp+arg_4]
0x951D12: mov     esi, ecx
0x951D14: mov     ecx, [esi+54h]
0x951D17: mov     eax, [ecx]
0x951D19: lea     ebx, [edi+10h]
0x951D1C: push    ebx
0x951D1D: push    edx
0x951D1E: call    dword ptr [eax+24h]
0x951D21: movaps  xmm3, xmmword ptr [esi+20h]
0x951D25: mov     eax, [ebp+arg_0]
0x951D28: movaps  xmm0, xmmword ptr [eax]
0x951D2B: movaps  xmm1, xmmword ptr ds:0A965C0h
0x951D32: movaps  xmm2, xmmword ptr [esi]
0x951D35: movaps  xmm5, xmmword ptr [esi+10h]
0x951D39: mov     ecx, [esi+58h]
0x951D3C: xorps   xmm0, xmm1
0x951D3F: movaps  xmm4, xmm3
0x951D42: shufps  xmm4, xmm3, 44h ; 'D'
0x951D46: movaps  xmm7, xmm3
0x951D49: movaps  xmm1, xmm2
0x951D4C: shufps  xmm1, xmm5, 44h ; 'D'
0x951D50: shufps  xmm7, xmm3, 0EEh ; 'î'
0x951D54: shufps  xmm2, xmm5, 0EEh ; 'î'
0x951D58: movaps  xmm5, xmm1
0x951D5B: movaps  xmm3, xmm0
0x951D5E: shufps  xmm3, xmm0, 55h ; 'U'
0x951D62: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x951D66: mulps   xmm5, xmm3
0x951D69: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x951D6D: movaps  xmm3, xmm0
0x951D70: movaps  xmm6, xmm0
0x951D73: shufps  xmm3, xmm0, 0
0x951D77: mulps   xmm1, xmm3
0x951D7A: lea     eax, [edi+20h]
0x951D7D: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x951D81: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x951D85: push    eax
0x951D86: mulps   xmm2, xmm6
0x951D89: addps   xmm1, xmm5
0x951D8C: addps   xmm1, xmm2
0x951D8F: lea     eax, [esp+24h+var_18+8]
0x951D93: movaps  xmmword ptr [esp+24h+var_18+8], xmm1
0x951D98: mov     edx, [ecx]
0x951D9A: push    eax
0x951D9B: call    dword ptr [edx+24h]
0x951D9E: movaps  xmm0, xmmword ptr [edi+20h]
0x951DA2: movaps  xmm1, xmmword ptr [esi+30h]
0x951DA6: movaps  xmm3, xmmword ptr [esi+20h]
0x951DAA: movaps  xmm2, xmm0
0x951DAD: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x951DB1: mulps   xmm3, xmm2
0x951DB4: movaps  xmm2, xmmword ptr [esi+10h]
0x951DB8: addps   xmm3, xmm1
0x951DBB: movaps  xmm1, xmm0
0x951DBE: shufps  xmm1, xmm0, 55h ; 'U'
0x951DC2: mulps   xmm2, xmm1
0x951DC5: movaps  xmm1, xmm0
0x951DC8: shufps  xmm1, xmm0, 0
0x951DCC: movaps  xmm0, xmmword ptr [esi]
0x951DCF: mulps   xmm0, xmm1
0x951DD2: movaps  xmm1, xmmword ptr [ebx]
0x951DD5: addps   xmm0, xmm2
0x951DD8: addps   xmm0, xmm3
0x951DDB: subps   xmm1, xmm0
0x951DDE: movaps  xmmword ptr [edi], xmm1
0x951DE1: pop     edi
0x951DE2: pop     esi
0x951DE3: pop     ebx
0x951DE4: mov     esp, ebp
0x951DE6: pop     ebp
0x951DE7: retn    8
