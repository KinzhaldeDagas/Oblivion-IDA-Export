0x958F40: push    ebp
0x958F41: mov     ebp, esp
0x958F43: and     esp, 0FFFFFFF0h
0x958F46: sub     esp, 14h
0x958F49: push    ebx
0x958F4A: push    esi
0x958F4B: push    edi
0x958F4C: call    sub_9589E0
0x958F51: mov     esi, [ebp+arg_0]
0x958F54: xor     ebx, ebx
0x958F56: mov     [esp+20h+var_8], bl
0x958F5A: lea     ebx, [ebx+0]
0x958F60: mov     al, [esp+20h+var_8]
0x958F64: test    al, al
0x958F66: jnz     loc_95907A
0x958F6C: mov     dword ptr [esi+44h], 3
0x958F73: xor     edi, edi
0x958F75: lea     ecx, [esi+14h]
0x958F78: cmp     ecx, ebx
0x958F7A: jz      loc_95904C
0x958F80: mov     eax, [ecx]
0x958F82: movaps  xmm2, xmmword ptr [eax]
0x958F85: mov     eax, [ecx+4]
0x958F88: mov     edx, [eax]
0x958F8A: movaps  xmm0, xmmword ptr [edx]
0x958F8D: subps   xmm0, xmm2
0x958F90: movaps  xmm1, xmm0
0x958F93: mulps   xmm1, xmm0
0x958F96: movaps  xmm3, xmm1
0x958F99: shufps  xmm3, xmm1, 55h ; 'U'
0x958F9D: addss   xmm3, xmm1
0x958FA1: movaps  xmm4, xmm1
0x958FA4: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x958FA8: movaps  xmm1, xmmword ptr [esi]
0x958FAB: addss   xmm4, xmm3
0x958FAF: movaps  xmm3, xmm1
0x958FB2: shufps  xmm3, xmm1, 0C9h ; 'É'
0x958FB6: lea     eax, [esp+20h+var_4]
0x958FBA: movss   dword ptr [eax], xmm4
0x958FBE: movaps  xmm4, xmm0
0x958FC1: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x958FC5: mulps   xmm4, xmm3
0x958FC8: movaps  xmm3, xmm1
0x958FCB: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x958FCF: movaps  xmm1, xmm0
0x958FD2: shufps  xmm1, xmm0, 0C9h ; 'É'
0x958FD6: mulps   xmm1, xmm3
0x958FD9: movaps  xmm0, xmm1
0x958FDC: subps   xmm0, xmm4
0x958FDF: mulps   xmm0, xmm2
0x958FE2: movaps  xmm1, xmm0
0x958FE5: shufps  xmm1, xmm0, 55h ; 'U'
0x958FE9: movaps  xmm2, xmm0
0x958FEC: addss   xmm1, xmm0
0x958FF0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x958FF4: lea     edx, [esp+20h+var_C]
0x958FF8: addss   xmm2, xmm1
0x958FFC: movss   dword ptr [edx], xmm2
0x959000: fld     [esp+20h+var_C]
0x959004: fabs
0x959006: fmul    [esp+20h+var_C]
0x95900A: fld     [esp+20h+var_4]
0x95900E: fmul    dword ptr ds:0AA3874h
0x959014: fcompp
0x959016: fnstsw  ax
0x959018: test    ah, 41h
0x95901B: jnz     short loc_95904C
0x95901D: mov     eax, [ecx+8]
0x959020: mov     edx, [eax+0Ch]
0x959023: mov     eax, [ebp+arg_0]
0x959026: fld     dword ptr [eax+10h]
0x959029: fcomp   dword ptr ds:0A2FAA8h
0x95902F: fnstsw  ax
0x959031: test    ah, 41h
0x959034: jnz     short loc_95905B
0x959036: mov     eax, [ebp+arg_0]
0x959039: fld     dword ptr [eax+10h]
0x95903C: fmul    dword ptr ds:0A37450h
0x959042: fcomp   dword ptr [edx+10h]
0x959045: fnstsw  ax
0x959047: test    ah, 41h
0x95904A: jnz     short loc_95905B
0x95904C: inc     edi
0x95904D: add     ecx, 10h
0x959050: cmp     edi, 3
0x959053: jl      loc_958F78
0x959059: jmp     short loc_959071
0x95905B: mov     eax, [edx+44h]
0x95905E: mov     ecx, edi
0x959060: shl     ecx, 4
0x959063: mov     ebx, [ecx+esi+1Ch]
0x959067: cmp     eax, 3
0x95906A: mov     esi, edx
0x95906C: setz    [esp+20h+var_8]
0x959071: cmp     edi, 3
0x959074: jnz     loc_958F60
0x95907A: pop     edi
0x95907B: mov     eax, esi
0x95907D: pop     esi
0x95907E: pop     ebx
0x95907F: mov     esp, ebp
0x959081: pop     ebp
0x959082: retn    4
