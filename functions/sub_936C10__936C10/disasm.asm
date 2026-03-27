0x936C10: push    ebp
0x936C11: mov     ebp, esp
0x936C13: and     esp, 0FFFFFFF0h
0x936C16: sub     esp, 8
0x936C19: mov     edx, [ebp+arg_4]
0x936C1C: movzx   eax, byte ptr [edx]
0x936C1F: mov     dx, [edx+2]
0x936C23: push    esi
0x936C24: mov     esi, [ebp+arg_0]
0x936C27: mov     [esi+20h], dx
0x936C2B: mov     edx, [ecx+18h]
0x936C2E: movaps  xmm1, xmmword ptr [edx+30h]
0x936C32: movaps  xmm3, xmmword ptr [edx+20h]
0x936C36: push    edi
0x936C37: mov     edi, [ebp+arg_8]
0x936C3A: movaps  xmm0, xmmword ptr [edi+10h]
0x936C3E: movaps  xmm2, xmm0
0x936C41: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936C45: mulps   xmm3, xmm2
0x936C48: movaps  xmm2, xmmword ptr [edx+10h]
0x936C4C: addps   xmm3, xmm1
0x936C4F: movaps  xmm1, xmm0
0x936C52: shufps  xmm1, xmm0, 55h ; 'U'
0x936C56: mulps   xmm2, xmm1
0x936C59: movaps  xmm1, xmm0
0x936C5C: shufps  xmm1, xmm0, 0
0x936C60: movaps  xmm0, xmmword ptr [edx]
0x936C63: mulps   xmm0, xmm1
0x936C66: addps   xmm0, xmm2
0x936C69: addps   xmm0, xmm3
0x936C6C: movaps  xmmword ptr [esi], xmm0
0x936C6F: fld     dword ptr [edi+30h]
0x936C72: mov     edx, [ecx+14h]
0x936C75: fchs
0x936C77: shl     eax, 4
0x936C7A: fstp    [esp+10h+var_4]
0x936C7E: movss   xmm0, [esp+10h+var_4]
0x936C84: movaps  xmm1, xmmword ptr [eax+edx]
0x936C88: add     eax, edx
0x936C8A: movaps  xmm2, xmm0
0x936C8D: shufps  xmm2, xmm0, 0
0x936C91: mulps   xmm2, xmm1
0x936C94: movaps  xmmword ptr [esi+10h], xmm2
0x936C98: mov     eax, [edi+34h]
0x936C9B: pop     edi
0x936C9C: mov     [esi+1Ch], eax
0x936C9F: pop     esi
0x936CA0: mov     esp, ebp
0x936CA2: pop     ebp
0x936CA3: retn    0Ch
