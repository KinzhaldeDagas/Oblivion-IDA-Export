0x926720: push    ebp
0x926721: mov     ebp, esp
0x926723: and     esp, 0FFFFFFF0h
0x926726: push    0FFFFFFFFh
0x926728: push    offset SEH_8C2D80
0x92672D: mov     eax, large fs:0
0x926733: push    eax
0x926734: sub     esp, 8
0x926737: push    ebx
0x926738: push    esi
0x926739: push    edi
0x92673A: mov     eax, ds:0B30AACh
0x92673F: xor     eax, esp
0x926741: push    eax
0x926742: lea     eax, [esp+24h+var_C]
0x926746: mov     large fs:0, eax
0x92674C: mov     ebx, [ebp+arg_4]
0x92674F: mov     edi, ecx
0x926751: mov     ecx, [ebp+arg_0]
0x926754: test    ecx, ecx
0x926756: mov     esi, [edi+4]
0x926759: jnz     short loc_926792
0x92675B: mov     ecx, ds:0BA7D98h
0x926761: mov     eax, [ecx]
0x926763: mov     edx, [eax+10h]
0x926766: push    29h ; ')'
0x926768: push    0A0h ; ' '
0x92676D: call    edx
0x92676F: mov     word ptr [eax+4], 0A0h ; ' '
0x926775: mov     [esp+24h+var_14], eax
0x926779: mov     ecx, eax
0x92677B: mov     [esp+24h+var_4], 0
0x926783: call    sub_9285E0
0x926788: mov     [esp+24h+var_4], 0FFFFFFFFh
0x926790: mov     ecx, eax
0x926792: fld     dword ptr [esi+10h]
0x926795: fstp    dword ptr [ecx+10h]
0x926798: mov     al, [esi+14h]
0x92679B: mov     [ecx+14h], al
0x92679E: movaps  xmm0, xmmword ptr [esi+20h]
0x9267A2: movaps  xmmword ptr [ecx+20h], xmm0
0x9267A6: movaps  xmm0, xmmword ptr [esi+30h]
0x9267AA: movaps  xmmword ptr [ecx+30h], xmm0
0x9267AE: movaps  xmm0, xmmword ptr [esi+40h]
0x9267B2: movaps  xmmword ptr [ecx+40h], xmm0
0x9267B6: movaps  xmm0, xmmword ptr [esi+50h]
0x9267BA: movaps  xmmword ptr [ecx+50h], xmm0
0x9267BE: movaps  xmm0, xmmword ptr [esi+60h]
0x9267C2: movaps  xmmword ptr [ecx+60h], xmm0
0x9267C6: movaps  xmm0, xmmword ptr [esi+70h]
0x9267CA: movaps  xmmword ptr [ecx+70h], xmm0
0x9267CE: movaps  xmm0, xmmword ptr [esi+80h]
0x9267D5: movaps  xmmword ptr [ecx+80h], xmm0
0x9267DC: movaps  xmm0, xmmword ptr [esi+90h]
0x9267E3: movaps  xmmword ptr [ecx+90h], xmm0
0x9267EA: fld     dword ptr [ebx+10h]
0x9267ED: fstp    [esp+24h+var_14]
0x9267F1: fld1
0x9267F3: fcomp   [esp+24h+var_14]
0x9267F7: fnstsw  ax
0x9267F9: test    ah, 44h
0x9267FC: jnp     short loc_926835
0x9267FE: movss   xmm1, [esp+24h+var_14]
0x926804: movaps  xmm2, xmmword ptr [ecx+50h]
0x926808: xorps   xmm0, xmm0
0x92680B: movss   xmm0, xmm1
0x92680F: movaps  xmm1, xmm0
0x926812: shufps  xmm1, xmm0, 0
0x926816: mulps   xmm1, xmm2
0x926819: movaps  xmmword ptr [ecx+50h], xmm1
0x92681D: movaps  xmm1, xmm0
0x926820: shufps  xmm1, xmm0, 0
0x926824: movaps  xmm0, xmmword ptr [ecx+90h]
0x92682B: mulps   xmm1, xmm0
0x92682E: movaps  xmmword ptr [ecx+90h], xmm1
0x926835: push    ebx
0x926836: push    ecx
0x926837: mov     ecx, edi
0x926839: call    sub_8A07B0
0x92683E: mov     ecx, [esp+24h+var_C]
0x926842: mov     large fs:0, ecx
0x926849: pop     ecx
0x92684A: pop     edi
0x92684B: pop     esi
0x92684C: pop     ebx
0x92684D: mov     esp, ebp
0x92684F: pop     ebp
0x926850: retn    8
