0x917D30: push    ebp
0x917D31: mov     ebp, esp
0x917D33: and     esp, 0FFFFFFF0h
0x917D36: sub     esp, 2Ch
0x917D39: mov     eax, [ebp+arg_0]
0x917D3C: movaps  xmm1, xmmword ptr [eax]
0x917D3F: push    esi
0x917D40: mov     esi, ecx
0x917D42: movaps  xmm3, xmmword ptr [esi+40h]
0x917D46: movaps  xmm2, xmmword ptr [esi+20h]
0x917D4A: movaps  xmm5, xmmword ptr [esi+30h]
0x917D4E: mov     ecx, [esi+10h]
0x917D51: movaps  xmm4, xmm3
0x917D54: shufps  xmm4, xmm3, 44h ; 'D'
0x917D58: movaps  xmm7, xmm3
0x917D5B: movaps  xmm0, xmm2
0x917D5E: shufps  xmm0, xmm5, 44h ; 'D'
0x917D62: shufps  xmm7, xmm3, 0EEh ; 'î'
0x917D66: shufps  xmm2, xmm5, 0EEh ; 'î'
0x917D6A: movaps  xmm5, xmm0
0x917D6D: movaps  xmm3, xmm1
0x917D70: shufps  xmm3, xmm1, 55h ; 'U'
0x917D74: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x917D78: mulps   xmm5, xmm3
0x917D7B: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x917D7F: movaps  xmm3, xmm1
0x917D82: movaps  xmm6, xmm1
0x917D85: shufps  xmm3, xmm1, 0
0x917D89: mulps   xmm0, xmm3
0x917D8C: lea     eax, [esp+30h+var_20]
0x917D90: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x917D94: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x917D98: push    eax
0x917D99: mulps   xmm2, xmm6
0x917D9C: addps   xmm0, xmm5
0x917D9F: addps   xmm0, xmm2
0x917DA2: lea     eax, [esp+34h+var_10]
0x917DA6: movaps  [esp+34h+var_10], xmm0
0x917DAB: mov     edx, [ecx]
0x917DAD: push    eax
0x917DAE: call    dword ptr [edx+24h]
0x917DB1: movaps  xmm0, [esp+30h+var_20]
0x917DB6: movaps  xmm1, xmmword ptr [esi+50h]
0x917DBA: movaps  xmm3, xmmword ptr [esi+40h]
0x917DBE: mov     eax, [ebp+arg_4]
0x917DC1: mov     ecx, dword ptr [esp+30h+var_20+0Ch]
0x917DC5: movaps  xmm2, xmm0
0x917DC8: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x917DCC: mulps   xmm3, xmm2
0x917DCF: movaps  xmm2, xmmword ptr [esi+30h]
0x917DD3: addps   xmm3, xmm1
0x917DD6: movaps  xmm1, xmm0
0x917DD9: shufps  xmm1, xmm0, 55h ; 'U'
0x917DDD: mulps   xmm2, xmm1
0x917DE0: movaps  xmm1, xmm0
0x917DE3: shufps  xmm1, xmm0, 0
0x917DE7: movaps  xmm0, xmmword ptr [esi+20h]
0x917DEB: mulps   xmm0, xmm1
0x917DEE: addps   xmm0, xmm2
0x917DF1: addps   xmm0, xmm3
0x917DF4: movaps  xmmword ptr [eax], xmm0
0x917DF7: mov     [eax+0Ch], ecx
0x917DFA: pop     esi
0x917DFB: mov     esp, ebp
0x917DFD: pop     ebp
0x917DFE: retn    8
