0x8BF230: push    ebx
0x8BF231: mov     ebx, [esp+4+arg_0]
0x8BF235: push    esi
0x8BF236: push    edi
0x8BF237: push    ebx
0x8BF238: mov     esi, ecx
0x8BF23A: call    sub_8A0C30
0x8BF23F: mov     edi, [esi+4]
0x8BF242: push    ebx
0x8BF243: call    sub_8E8040
0x8BF248: mov     esi, eax
0x8BF24A: add     esp, 4
0x8BF24D: test    esi, esi
0x8BF24F: jz      short loc_8BF25D
0x8BF251: cmp     word ptr [esi+4], 0
0x8BF256: jz      short loc_8BF25D
0x8BF258: add     word ptr [esi+6], 1
0x8BF25D: mov     ecx, [edi+0Ch]
0x8BF260: test    ecx, ecx
0x8BF262: jz      short loc_8BF281
0x8BF264: cmp     word ptr [ecx+4], 0
0x8BF269: jz      short loc_8BF281
0x8BF26B: add     word ptr [ecx+6], 0FFFFh
0x8BF270: movzx   eax, word ptr [ecx+6]
0x8BF274: test    ax, ax
0x8BF277: jnz     short loc_8BF281
0x8BF279: mov     eax, [ecx]
0x8BF27B: mov     edx, [eax]
0x8BF27D: push    1
0x8BF27F: call    edx
0x8BF281: mov     [edi+0Ch], esi
0x8BF284: cmp     word ptr [esi+4], 0
0x8BF289: jz      short loc_8BF2A3
0x8BF28B: add     word ptr [esi+6], 0FFFFh
0x8BF290: movzx   eax, word ptr [esi+6]
0x8BF294: test    ax, ax
0x8BF297: jnz     short loc_8BF2A3
0x8BF299: mov     eax, [esi]
0x8BF29B: mov     edx, [eax]
0x8BF29D: push    1
0x8BF29F: mov     ecx, esi
0x8BF2A1: call    edx
0x8BF2A3: mov     eax, [ebx+21Ch]
0x8BF2A9: push    1
0x8BF2AB: lea     ecx, [esp+10h+arg_0]
0x8BF2AF: push    ecx
0x8BF2B0: mov     esi, 4
0x8BF2B5: push    esi
0x8BF2B6: lea     edx, [edi+10h]
0x8BF2B9: push    edx
0x8BF2BA: push    eax
0x8BF2BB: mov     eax, [eax+4]
0x8BF2BE: mov     [esp+20h+arg_0], esi
0x8BF2C2: call    eax
0x8BF2C4: mov     eax, [ebx+21Ch]
0x8BF2CA: mov     edx, [eax+4]
0x8BF2CD: push    1
0x8BF2CF: lea     ecx, [esp+24h+arg_0]
0x8BF2D3: push    ecx
0x8BF2D4: push    esi
0x8BF2D5: add     edi, 14h
0x8BF2D8: push    edi
0x8BF2D9: push    eax
0x8BF2DA: mov     [esp+34h+arg_0], esi
0x8BF2DE: call    edx
0x8BF2E0: add     esp, 28h
0x8BF2E3: pop     edi
0x8BF2E4: pop     esi
0x8BF2E5: pop     ebx
0x8BF2E6: retn    4
