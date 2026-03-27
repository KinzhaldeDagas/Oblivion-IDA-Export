0x7598C0: push    esi
0x7598C1: mov     esi, ecx
0x7598C3: movzx   ecx, word ptr [esi+48h]
0x7598C7: movzx   eax, word ptr [esi+66h]
0x7598CB: cmp     cx, ax
0x7598CE: push    edi
0x7598CF: jnb     short loc_75991B
0x7598D1: movzx   edi, cx
0x7598D4: mov     cx, [esi+64h]
0x7598D8: add     cx, ax
0x7598DB: cmp     di, ax
0x7598DE: mov     [esi+48h], cx
0x7598E2: jnb     short loc_759901
0x7598E4: mov     dx, [esi+48h]
0x7598E8: cmp     dx, [esi+66h]
0x7598EC: jbe     short loc_759901
0x7598EE: mov     eax, [esi]
0x7598F0: mov     edx, [eax+58h]
0x7598F3: push    edi
0x7598F4: mov     ecx, esi
0x7598F6: call    edx
0x7598F8: add     edi, 1
0x7598FB: cmp     di, [esi+66h]
0x7598FF: jb      short loc_7598E4
0x759901: cmp     di, [esi+66h]
0x759905: jnb     short loc_759926
0x759907: mov     [esi+48h], di
0x75990B: mov     cx, di
0x75990E: pop     edi
0x75990F: mov     word ptr [esi+64h], 0
0x759915: mov     [esi+66h], cx
0x759919: pop     esi
0x75991A: retn
0x75991B: mov     ax, [esi+64h]
0x75991F: add     ax, cx
0x759922: mov     [esi+48h], ax
0x759926: mov     cx, [esi+48h]
0x75992A: pop     edi
0x75992B: mov     word ptr [esi+64h], 0
0x759931: mov     [esi+66h], cx
0x759935: pop     esi
0x759936: retn
