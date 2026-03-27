0x8D41A0: push    ebp
0x8D41A1: mov     ebp, esp
0x8D41A3: and     esp, 0FFFFFFF0h
0x8D41A6: push    ecx
0x8D41A7: push    ebx
0x8D41A8: mov     ebx, [ebp+arg_0]
0x8D41AB: mov     eax, [ebx+38h]
0x8D41AE: push    esi
0x8D41AF: push    edi
0x8D41B0: xor     edi, edi
0x8D41B2: test    eax, eax
0x8D41B4: jle     short loc_8D4226
0x8D41B6: mov     eax, [ebp+arg_4]
0x8D41B9: mov     ecx, [eax]
0x8D41BB: mov     al, [edi+ecx]
0x8D41BE: cmp     al, 1
0x8D41C0: jz      short loc_8D41C6
0x8D41C2: cmp     al, 2
0x8D41C4: jnz     short loc_8D421E
0x8D41C6: mov     edx, [ebx+34h]
0x8D41C9: mov     eax, [edx+edi*4]
0x8D41CC: mov     esi, [eax+50h]
0x8D41CF: add     esi, 10h
0x8D41D2: lea     ecx, [esi+70h]
0x8D41D5: push    ecx
0x8D41D6: mov     ecx, esi
0x8D41D8: call    sub_8B1DD0
0x8D41DD: movaps  xmm0, xmmword ptr [esi+80h]
0x8D41E4: movaps  xmm2, xmmword ptr [esi+20h]
0x8D41E8: movaps  xmm3, xmmword ptr [esi+10h]
0x8D41EC: movaps  xmm1, xmm0
0x8D41EF: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8D41F3: mulps   xmm2, xmm1
0x8D41F6: movaps  xmm1, xmm0
0x8D41F9: shufps  xmm1, xmm0, 55h ; 'U'
0x8D41FD: mulps   xmm3, xmm1
0x8D4200: movaps  xmm1, xmm0
0x8D4203: shufps  xmm1, xmm0, 0
0x8D4207: movaps  xmm0, xmmword ptr [esi]
0x8D420A: mulps   xmm0, xmm1
0x8D420D: movaps  xmm1, xmmword ptr [esi+50h]
0x8D4211: addps   xmm0, xmm3
0x8D4214: addps   xmm0, xmm2
0x8D4217: subps   xmm1, xmm0
0x8D421A: movaps  xmmword ptr [esi+30h], xmm1
0x8D421E: mov     eax, [ebx+38h]
0x8D4221: inc     edi
0x8D4222: cmp     edi, eax
0x8D4224: jl      short loc_8D41B6
0x8D4226: pop     edi
0x8D4227: pop     esi
0x8D4228: pop     ebx
0x8D4229: mov     esp, ebp
0x8D422B: pop     ebp
0x8D422C: retn
