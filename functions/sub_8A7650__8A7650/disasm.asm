0x8A7650: push    ebx
0x8A7651: push    ebp
0x8A7652: push    esi
0x8A7653: push    edi
0x8A7654: mov     edi, [esp+10h+arg_0]
0x8A7658: add     edi, 400h
0x8A765E: cmp     edi, 1000h
0x8A7664: mov     esi, ecx
0x8A7666: jg      short loc_8A766D
0x8A7668: mov     edi, 1000h
0x8A766D: mov     ecx, large fs:2Ch
0x8A7674: mov     eax, ds:0BA9DE4h
0x8A7679: mov     edx, [ecx+eax*4]
0x8A767C: mov     ecx, [edx+19Ch]
0x8A7682: test    ecx, ecx
0x8A7684: jnz     short loc_8A768C
0x8A7686: mov     ecx, ds:0BA7D9Ch
0x8A768C: push    14h
0x8A768E: lea     eax, [edi+10h]
0x8A7691: push    eax
0x8A7692: call    sub_8A7560
0x8A7697: mov     ecx, eax
0x8A7699: lea     edx, [esi+20h]
0x8A769C: mov     eax, edx
0x8A769E: mov     ebp, [eax]
0x8A76A0: mov     ebx, ecx
0x8A76A2: mov     [ebx], ebp
0x8A76A4: mov     ebp, [eax+4]
0x8A76A7: mov     [ebx+4], ebp
0x8A76AA: mov     ebp, [eax+8]
0x8A76AD: mov     [ebx+8], ebp
0x8A76B0: mov     eax, [eax+0Ch]
0x8A76B3: mov     [ebx+0Ch], eax
0x8A76B6: mov     ebx, [esp+10h+arg_0]
0x8A76BA: lea     eax, [ecx+10h]
0x8A76BD: add     ebx, eax
0x8A76BF: mov     [edx], ebx
0x8A76C1: lea     edx, [eax+edi]
0x8A76C4: pop     edi
0x8A76C5: mov     [esi+28h], eax
0x8A76C8: mov     [esi+2Ch], edx
0x8A76CB: mov     [esi+24h], ecx
0x8A76CE: pop     esi
0x8A76CF: pop     ebp
0x8A76D0: pop     ebx
0x8A76D1: retn    4
