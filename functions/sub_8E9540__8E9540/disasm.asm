0x8E9540: push    ebp
0x8E9541: mov     ebp, esp
0x8E9543: and     esp, 0FFFFFFF0h
0x8E9546: sub     esp, 0Ch
0x8E9549: mov     edx, [ebp+arg_0]
0x8E954C: fld     dword ptr [edx+8]
0x8E954F: push    esi
0x8E9550: fld     st
0x8E9552: fmul    dword ptr [ecx+0C8h]
0x8E9558: fsubr   dword ptr ds:0A2F948h
0x8E955E: fld     dword ptr ds:0A2FAA8h
0x8E9564: fcomp   st(1)
0x8E9566: fnstsw  ax
0x8E9568: test    ah, 41h
0x8E956B: jnz     short loc_8E9575
0x8E956D: fstp    st
0x8E956F: fld     dword ptr ds:0A2FAA8h
0x8E9575: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E957C: fstp    [esp+10h+var_4]
0x8E9580: movss   xmm0, [esp+10h+var_4]
0x8E9586: movaps  xmm2, xmm0
0x8E9589: shufps  xmm2, xmm0, 0
0x8E958D: mulps   xmm2, xmm1
0x8E9590: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8E9597: fmul    dword ptr [ecx+0CCh]
0x8E959D: fsubr   dword ptr ds:0A2F948h
0x8E95A3: fld     dword ptr ds:0A2FAA8h
0x8E95A9: fcomp   st(1)
0x8E95AB: fnstsw  ax
0x8E95AD: test    ah, 41h
0x8E95B0: jnz     short loc_8E95BA
0x8E95B2: fstp    st
0x8E95B4: fld     dword ptr ds:0A2FAA8h
0x8E95BA: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8E95C1: fstp    [esp+10h+var_4]
0x8E95C5: mov     eax, [ebp+arg_4]
0x8E95C8: movss   xmm0, [esp+10h+var_4]
0x8E95CE: movaps  xmm2, xmm0
0x8E95D1: shufps  xmm2, xmm0, 0
0x8E95D5: mulps   xmm2, xmm1
0x8E95D8: movaps  xmmword ptr [ecx+0E0h], xmm2
0x8E95DF: mov     byte ptr [eax], 0
0x8E95E2: mov     esi, [ecx+0C4h]
0x8E95E8: mov     [esp+10h+var_4], esi
0x8E95EC: movss   xmm0, [esp+10h+var_4]
0x8E95F2: shufps  xmm0, xmm0, 0
0x8E95F6: movaps  xmmword ptr [eax+30h], xmm0
0x8E95FA: mov     esi, [ecx+0C0h]
0x8E9600: mov     [eax+3Ch], esi
0x8E9603: fld     dword ptr [edx]
0x8E9605: fsub    dword ptr [ecx+5Ch]
0x8E9608: movaps  xmm1, xmmword ptr [ecx+60h]
0x8E960C: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8E9613: mov     edx, 3F800000h
0x8E9618: fmul    dword ptr [ecx+6Ch]
0x8E961B: add     eax, 80h ; '€'
0x8E9620: pop     esi
0x8E9621: fstp    [esp+0Ch+var_4]
0x8E9625: movss   xmm0, [esp+0Ch+var_4]
0x8E962B: shufps  xmm0, xmm0, 0
0x8E962F: movaps  xmm2, xmm0
0x8E9632: subps   xmm3, xmm0
0x8E9635: mulps   xmm2, xmm1
0x8E9638: movaps  xmm1, xmmword ptr [ecx+50h]
0x8E963C: mulps   xmm3, xmm1
0x8E963F: addps   xmm3, xmm2
0x8E9642: movaps  xmmword ptr [eax-40h], xmm3
0x8E9646: movaps  xmm0, xmmword ptr [ecx+0E0h]
0x8E964D: movaps  xmmword ptr [eax-60h], xmm0
0x8E9651: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x8E9658: movaps  xmmword ptr [eax-70h], xmm0
0x8E965C: xorps   xmm0, xmm0
0x8E965F: movaps  xmmword ptr [eax-30h], xmm0
0x8E9663: movaps  xmmword ptr [eax-20h], xmm0
0x8E9667: movaps  xmmword ptr [eax-10h], xmm0
0x8E966B: mov     [eax-30h], edx
0x8E966E: mov     [eax-1Ch], edx
0x8E9671: mov     [eax-8], edx
0x8E9674: mov     byte ptr [eax-74h], 1
0x8E9678: movzx   edx, word ptr [ecx+0BCh]
0x8E967F: mov     [eax-78h], edx
0x8E9682: movzx   ecx, word ptr [ecx+0BEh]
0x8E9689: mov     [eax-7Ch], ecx
0x8E968C: mov     esp, ebp
0x8E968E: pop     ebp
0x8E968F: retn    8
