0x9153F0: push    ebp
0x9153F1: mov     ebp, esp
0x9153F3: and     esp, 0FFFFFFF0h
0x9153F6: sub     esp, 8
0x9153F9: mov     eax, [ebp+arg_0]
0x9153FC: mov     edx, [eax]
0x9153FE: push    esi
0x9153FF: mov     esi, ecx
0x915401: mov     ecx, [eax+4]
0x915404: dec     ecx
0x915405: push    edi
0x915406: js      loc_91549B
0x91540C: mov     eax, [ebp+arg_4]
0x91540F: add     eax, 0Ch
0x915412: lea     edi, [ecx+1]
0x915415: jmp     short loc_915420
0x915417: align 10h
0x915420: movaps  xmm2, xmmword ptr [esi+20h]
0x915424: movaps  xmm3, xmmword ptr [edx]
0x915427: movaps  xmm1, xmmword ptr ds:0A372D0h
0x91542E: movaps  xmm0, xmmword ptr [esi+30h]
0x915432: subps   xmm3, xmm2
0x915435: andps   xmm3, xmm1
0x915438: cmpleps xmm3, xmm0
0x91543C: movmskps ecx, xmm3
0x91543F: and     ecx, 7
0x915442: cmp     cl, 7
0x915445: jnz     short loc_91548C
0x915447: movaps  xmm0, xmmword ptr [esi+10h]
0x91544B: movaps  xmmword ptr [eax-0Ch], xmm0
0x91544F: movaps  xmm1, xmmword ptr [esi+10h]
0x915453: movaps  xmm2, xmmword ptr [edx]
0x915456: movaps  xmm0, xmm1
0x915459: mulps   xmm0, xmm2
0x91545C: movaps  xmm2, xmm1
0x91545F: shufps  xmm2, xmm1, 0FFh
0x915463: movaps  xmm1, xmm0
0x915466: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91546A: addss   xmm1, xmm2
0x91546E: movaps  xmm2, xmm0
0x915471: shufps  xmm2, xmm0, 55h ; 'U'
0x915475: lea     ecx, [esp+10h+var_4]
0x915479: addss   xmm2, xmm0
0x91547D: addps   xmm2, xmm1
0x915480: movss   dword ptr [ecx], xmm2
0x915484: mov     ecx, [esp+10h+var_4]
0x915488: mov     [eax], ecx
0x91548A: jmp     short loc_915492
0x91548C: mov     dword ptr [eax], 7F7FFFFFh
0x915492: add     eax, 10h
0x915495: add     edx, 10h
0x915498: dec     edi
0x915499: jnz     short loc_915420
0x91549B: pop     edi
0x91549C: pop     esi
0x91549D: mov     esp, ebp
0x91549F: pop     ebp
0x9154A0: retn    8
