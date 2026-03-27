0x959480: push    ebp
0x959481: mov     ebp, esp
0x959483: and     esp, 0FFFFFFF0h
0x959486: push    ecx
0x959487: push    ebx
0x959488: push    esi
0x959489: mov     esi, ecx
0x95948B: push    edi
0x95948C: lea     edi, [esi+0F70h]
0x959492: lea     eax, [esi+10B0h]
0x959498: mov     ecx, edi
0x95949A: cmp     ecx, eax
0x95949C: mov     dword ptr [esi+10h], 4
0x9594A3: mov     edx, offset unk_AA3878
0x9594A8: mov     [esp+10h+var_4], edi
0x9594AC: jz      short loc_959506
0x9594AE: mov     edi, edi
0x9594B0: lea     eax, [ecx+24h]
0x9594B3: mov     [ecx+18h], eax
0x9594B6: lea     eax, [ecx+34h]
0x9594B9: lea     edi, [ecx+44h]
0x9594BC: mov     [ecx+28h], eax
0x9594BF: lea     eax, [ecx+14h]
0x9594C2: cmp     eax, edi
0x9594C4: mov     dword ptr [edi], 0
0x9594CA: mov     [ecx+38h], eax
0x9594CD: jnb     short loc_9594F5
0x9594CF: nop
0x9594D0: mov     [eax+0Ch], ecx
0x9594D3: mov     ebx, [edx]
0x9594D5: lea     ebx, [ebx+esi+20h]
0x9594D9: mov     [eax], ebx
0x9594DB: mov     ebx, [edx+8]
0x9594DE: add     ebx, [edx+4]
0x9594E1: add     eax, 10h
0x9594E4: lea     ebx, [ebx+esi+0F84h]
0x9594EB: mov     [eax-8], ebx
0x9594EE: add     edx, 0Ch
0x9594F1: cmp     eax, edi
0x9594F3: jb      short loc_9594D0
0x9594F5: add     ecx, 50h ; 'P'
0x9594F8: lea     eax, [esi+10B0h]
0x9594FE: cmp     ecx, eax
0x959500: jnz     short loc_9594B0
0x959502: mov     edi, [esp+10h+var_4]
0x959506: lea     ecx, [esi+1060h]
0x95950C: call    sub_958E50
0x959511: movaps  xmm0, xmmword ptr [esi+60h]
0x959515: movaps  xmm2, xmmword ptr [esi+20h]
0x959519: movaps  xmm1, xmmword ptr [ecx]
0x95951C: subps   xmm2, xmm0
0x95951F: lea     edx, [esi+60h]
0x959522: lea     ebx, [esi+20h]
0x959525: movaps  xmm0, xmm2
0x959528: mulps   xmm0, xmm1
0x95952B: movaps  xmm1, xmm0
0x95952E: shufps  xmm1, xmm0, 55h ; 'U'
0x959532: movaps  xmm2, xmm0
0x959535: lea     eax, [esp+10h+var_4]
0x959539: addss   xmm1, xmm0
0x95953D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x959541: addss   xmm2, xmm1
0x959545: movss   dword ptr [eax], xmm2
0x959549: fld     [esp+10h+var_4]
0x95954D: fcomp   dword ptr ds:0A2FAA8h
0x959553: fnstsw  ax
0x959555: test    ah, 41h
0x959558: jnz     short loc_959575
0x95955A: mov     [esi+1024h], edx
0x959560: mov     [esi+0FD4h], edx
0x959566: mov     [edi+14h], edx
0x959569: mov     [ecx+14h], ebx
0x95956C: mov     [esi+0FE4h], ebx
0x959572: mov     [edi+34h], ebx
0x959575: mov     ecx, edi
0x959577: mov     esi, 4
0x95957C: lea     esp, [esp+0]
0x959580: call    sub_958E50
0x959585: add     ecx, 50h ; 'P'
0x959588: dec     esi
0x959589: jnz     short loc_959580
0x95958B: pop     edi
0x95958C: pop     esi
0x95958D: pop     ebx
0x95958E: mov     esp, ebp
0x959590: pop     ebp
0x959591: retn
