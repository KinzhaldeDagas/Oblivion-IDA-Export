0x8C9520: push    ebp
0x8C9521: mov     ebp, esp
0x8C9523: and     esp, 0FFFFFFF0h
0x8C9526: sub     esp, 14h
0x8C9529: mov     eax, [ebp+arg_0]
0x8C952C: push    ebx
0x8C952D: mov     ebx, ecx
0x8C952F: mov     ecx, [ebp+arg_4]
0x8C9532: mov     edx, [ebx]
0x8C9534: mov     edx, [edx+74h]
0x8C9537: push    esi
0x8C9538: mov     [esp+1Ch+var_4], eax
0x8C953C: push    edi
0x8C953D: lea     eax, [esp+20h+var_9]
0x8C9541: mov     [esp+20h+var_10], ecx
0x8C9545: push    eax
0x8C9546: mov     ecx, ebx
0x8C9548: call    edx
0x8C954A: mov     edi, eax
0x8C954C: test    edi, edi
0x8C954E: jz      short loc_8C95CC
0x8C9550: mov     eax, [edi+8]
0x8C9553: test    eax, eax
0x8C9555: jz      short loc_8C955C
0x8C9557: mov     esi, [eax+8]
0x8C955A: jmp     short loc_8C955E
0x8C955C: xor     esi, esi
0x8C955E: mov     eax, [esp+20h+var_10]
0x8C9562: fld     dword ptr [eax+10h]
0x8C9565: fstp    [esp+20h+var_8]
0x8C9569: fld1
0x8C956B: fcomp   [esp+20h+var_8]
0x8C956F: fnstsw  ax
0x8C9571: test    ah, 44h
0x8C9574: jnp     short loc_8C9597
0x8C9576: movss   xmm1, [esp+20h+var_8]
0x8C957C: xorps   xmm0, xmm0
0x8C957F: movss   xmm0, xmm1
0x8C9583: movaps  xmm1, xmm0
0x8C9586: shufps  xmm1, xmm0, 0
0x8C958A: movaps  xmm0, xmmword ptr [edi+40h]
0x8C958E: mulps   xmm1, xmm0
0x8C9591: movaps  xmmword ptr [edi+40h], xmm1
0x8C9595: jmp     short loc_8C95B0
0x8C9597: test    esi, esi
0x8C9599: jz      short loc_8C95CC
0x8C959B: mov     edx, [esi]
0x8C959D: mov     eax, [esp+20h+var_10]
0x8C95A1: mov     edx, [edx+8Ch]
0x8C95A7: push    eax
0x8C95A8: mov     ecx, esi
0x8C95AA: call    edx
0x8C95AC: test    al, al
0x8C95AE: jnz     short loc_8C95CC
0x8C95B0: mov     ecx, [esp+20h+var_10]
0x8C95B4: mov     eax, [esi]
0x8C95B6: mov     edx, [eax+18h]
0x8C95B9: push    ecx
0x8C95BA: mov     ecx, esi
0x8C95BC: call    edx
0x8C95BE: test    eax, eax
0x8C95C0: jz      short loc_8C95C7
0x8C95C2: mov     eax, [eax+8]
0x8C95C5: jmp     short loc_8C95C9
0x8C95C7: xor     eax, eax
0x8C95C9: mov     [edi+8], eax
0x8C95CC: mov     eax, [esp+20h+var_10]
0x8C95D0: mov     ecx, [esp+20h+var_4]
0x8C95D4: push    eax
0x8C95D5: push    ecx
0x8C95D6: mov     ecx, ebx
0x8C95D8: call    sub_8A2670
0x8C95DD: pop     edi
0x8C95DE: pop     esi
0x8C95DF: pop     ebx
0x8C95E0: mov     esp, ebp
0x8C95E2: pop     ebp
0x8C95E3: retn    8
