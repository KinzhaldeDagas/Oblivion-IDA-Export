0x8DDA10: push    ebp
0x8DDA11: mov     ebp, esp
0x8DDA13: and     esp, 0FFFFFFF0h
0x8DDA16: sub     esp, 18h
0x8DDA19: push    esi
0x8DDA1A: mov     esi, [ebp+arg_4]
0x8DDA1D: push    edi
0x8DDA1E: mov     edi, [ebp+arg_0]
0x8DDA21: xorps   xmm0, xmm0
0x8DDA24: push    edi
0x8DDA25: lea     ecx, [esp+24h+var_10]
0x8DDA29: movaps  xmmword ptr [esi+90h], xmm0
0x8DDA30: call    sub_8B1B40
0x8DDA35: movaps  xmm0, xmmword ptr [edi]
0x8DDA38: movaps  xmmword ptr [esi], xmm0
0x8DDA3B: movaps  xmm0, xmmword ptr [edi+10h]
0x8DDA3F: movaps  xmmword ptr [esi+10h], xmm0
0x8DDA43: movaps  xmm0, xmmword ptr [edi+20h]
0x8DDA47: movaps  xmmword ptr [esi+20h], xmm0
0x8DDA4B: movaps  xmm0, xmmword ptr [edi+30h]
0x8DDA4F: movaps  xmmword ptr [esi+30h], xmm0
0x8DDA53: movaps  xmm0, [esp+20h+var_10]
0x8DDA58: movaps  xmmword ptr [esi+60h], xmm0
0x8DDA5C: movaps  xmmword ptr [esi+70h], xmm0
0x8DDA60: fld     dword ptr [esi+4Ch]
0x8DDA63: movaps  xmm0, xmmword ptr [esi+80h]
0x8DDA6A: movaps  xmm2, xmmword ptr [edi+20h]
0x8DDA6E: movaps  xmm3, xmmword ptr [edi+10h]
0x8DDA72: movaps  xmm1, xmm0
0x8DDA75: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DDA79: mulps   xmm2, xmm1
0x8DDA7C: movaps  xmm1, xmm0
0x8DDA7F: shufps  xmm1, xmm0, 55h ; 'U'
0x8DDA83: mulps   xmm3, xmm1
0x8DDA86: movaps  xmm1, xmm0
0x8DDA89: shufps  xmm1, xmm0, 0
0x8DDA8D: movaps  xmm0, xmmword ptr [edi]
0x8DDA90: mulps   xmm0, xmm1
0x8DDA93: addps   xmm0, xmm3
0x8DDA96: addps   xmm0, xmm2
0x8DDA99: movaps  xmm1, xmm0
0x8DDA9C: movaps  xmm0, xmmword ptr [edi+30h]
0x8DDAA0: addps   xmm0, xmm1
0x8DDAA3: movaps  xmmword ptr [esi+40h], xmm0
0x8DDAA7: movaps  xmmword ptr [esi+50h], xmm0
0x8DDAAB: fstp    dword ptr [esi+4Ch]
0x8DDAAE: pop     edi
0x8DDAAF: mov     dword ptr [esi+5Ch], 0
0x8DDAB6: pop     esi
0x8DDAB7: mov     esp, ebp
0x8DDAB9: pop     ebp
0x8DDABA: retn
