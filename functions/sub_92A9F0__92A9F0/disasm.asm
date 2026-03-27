0x92A9F0: push    ebp
0x92A9F1: mov     ebp, esp
0x92A9F3: and     esp, 0FFFFFFF0h
0x92A9F6: push    ecx
0x92A9F7: mov     edx, [ebp+arg_4]
0x92A9FA: push    ebx
0x92A9FB: push    esi
0x92A9FC: mov     esi, [ebp+arg_8]
0x92A9FF: push    edi
0x92AA00: mov     edi, [ebp+arg_0]
0x92AA03: push    esi
0x92AA04: mov     ebx, ecx
0x92AA06: mov     ecx, [ebx+10h]
0x92AA09: mov     eax, [ecx]
0x92AA0B: push    edx
0x92AA0C: push    edi
0x92AA0D: call    dword ptr [eax+0Ch]
0x92AA10: movaps  xmm0, xmmword ptr [ebx+20h]
0x92AA14: movaps  xmm2, xmmword ptr [edi+20h]
0x92AA18: movaps  xmm3, xmmword ptr [edi+10h]
0x92AA1C: movaps  xmm1, xmm0
0x92AA1F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x92AA23: mulps   xmm2, xmm1
0x92AA26: movaps  xmm1, xmm0
0x92AA29: shufps  xmm1, xmm0, 55h ; 'U'
0x92AA2D: mulps   xmm3, xmm1
0x92AA30: movaps  xmm1, xmm0
0x92AA33: shufps  xmm1, xmm0, 0
0x92AA37: movaps  xmm0, xmmword ptr [edi]
0x92AA3A: mulps   xmm0, xmm1
0x92AA3D: movaps  xmm1, xmmword ptr [esi]
0x92AA40: addps   xmm0, xmm3
0x92AA43: addps   xmm0, xmm2
0x92AA46: addps   xmm1, xmm0
0x92AA49: movaps  xmmword ptr [esi], xmm1
0x92AA4C: movaps  xmm1, xmmword ptr [esi+10h]
0x92AA50: pop     edi
0x92AA51: addps   xmm1, xmm0
0x92AA54: movaps  xmmword ptr [esi+10h], xmm1
0x92AA58: pop     esi
0x92AA59: pop     ebx
0x92AA5A: mov     esp, ebp
0x92AA5C: pop     ebp
0x92AA5D: retn    0Ch
