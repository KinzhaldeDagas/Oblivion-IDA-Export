0x936D70: push    ebp
0x936D71: mov     ebp, esp
0x936D73: and     esp, 0FFFFFFF0h
0x936D76: sub     esp, 8
0x936D79: mov     edx, [ebp+arg_4]
0x936D7C: movzx   eax, byte ptr [edx]
0x936D7F: mov     dx, [edx+2]
0x936D83: push    esi
0x936D84: mov     esi, [ebp+arg_0]
0x936D87: mov     [esi+20h], dx
0x936D8B: mov     edx, [ecx+14h]
0x936D8E: movaps  xmm1, xmmword ptr [edx+30h]
0x936D92: movaps  xmm3, xmmword ptr [edx+20h]
0x936D96: push    edi
0x936D97: mov     edi, [ebp+arg_8]
0x936D9A: movaps  xmm0, xmmword ptr [edi]
0x936D9D: movaps  xmm2, xmm0
0x936DA0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936DA4: mulps   xmm3, xmm2
0x936DA7: movaps  xmm2, xmmword ptr [edx+10h]
0x936DAB: addps   xmm3, xmm1
0x936DAE: movaps  xmm1, xmm0
0x936DB1: shufps  xmm1, xmm0, 55h ; 'U'
0x936DB5: mulps   xmm2, xmm1
0x936DB8: movaps  xmm1, xmm0
0x936DBB: shufps  xmm1, xmm0, 0
0x936DBF: movaps  xmm0, xmmword ptr [edx]
0x936DC2: mulps   xmm0, xmm1
0x936DC5: addps   xmm0, xmm2
0x936DC8: addps   xmm0, xmm3
0x936DCB: movaps  xmmword ptr [esi], xmm0
0x936DCE: fld     dword ptr [edi+30h]
0x936DD1: mov     edx, [ecx+18h]
0x936DD4: fchs
0x936DD6: sub     eax, 4
0x936DD9: fstp    [esp+10h+var_4]
0x936DDD: movss   xmm0, [esp+10h+var_4]
0x936DE3: shl     eax, 4
0x936DE6: movaps  xmm1, xmmword ptr [eax+edx]
0x936DEA: add     eax, edx
0x936DEC: movaps  xmm2, xmm0
0x936DEF: shufps  xmm2, xmm0, 0
0x936DF3: mulps   xmm2, xmm1
0x936DF6: movaps  xmmword ptr [esi+10h], xmm2
0x936DFA: mov     eax, [edi+34h]
0x936DFD: pop     edi
0x936DFE: mov     [esi+1Ch], eax
0x936E01: pop     esi
0x936E02: mov     esp, ebp
0x936E04: pop     ebp
0x936E05: retn    0Ch
