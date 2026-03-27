0x77B1D0: mov     edx, [esp+arg_4]
0x77B1D4: movzx   eax, word ptr ds:0B427E0h[edx*2]
0x77B1DC: cmp     ax, 8
0x77B1E0: jnb     short locret_77B206
0x77B1E2: push    esi
0x77B1E3: mov     esi, [ecx]
0x77B1E5: push    edi
0x77B1E6: movzx   edi, ax
0x77B1E9: mov     eax, [esp+8+arg_0]
0x77B1ED: lea     edi, [edi+eax*8]
0x77B1F0: mov     edi, [ecx+edi*8+924h]
0x77B1F7: push    0
0x77B1F9: push    edi
0x77B1FA: push    edx
0x77B1FB: push    eax
0x77B1FC: mov     eax, [esi+0C8h]
0x77B202: call    eax
0x77B204: pop     edi
0x77B205: pop     esi
0x77B206: retn    8
