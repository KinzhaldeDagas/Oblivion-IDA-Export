0x42B2D0: push    esi
0x42B2D1: push    edi
0x42B2D2: mov     edi, [esp+8+arg_0]
0x42B2D6: mov     esi, ecx
0x42B2D8: mov     eax, [esi]
0x42B2DA: mov     edx, [eax+0Ch]
0x42B2DD: push    edi
0x42B2DE: call    edx
0x42B2E0: test    al, al
0x42B2E2: jz      short loc_42B2EB
0x42B2E4: pop     edi
0x42B2E5: mov     al, 1
0x42B2E7: pop     esi
0x42B2E8: retn    4
0x42B2EB: mov     al, [esi+0Ch]
0x42B2EE: cmp     al, [edi+0Ch]
0x42B2F1: jnz     short loc_42B2E4
0x42B2F3: mov     cx, [esi+0Eh]
0x42B2F7: cmp     cx, [edi+0Eh]
0x42B2FB: pop     edi
0x42B2FC: setnz   al
0x42B2FF: pop     esi
0x42B300: retn    4
