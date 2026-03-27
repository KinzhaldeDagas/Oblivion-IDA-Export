0x6C7740: push    esi
0x6C7741: push    edi
0x6C7742: mov     edi, [esp+8+arg_0]
0x6C7746: mov     eax, [edi]
0x6C7748: mov     esi, ecx
0x6C774A: mov     ecx, [esi]
0x6C774C: mov     edx, [ecx]
0x6C774E: push    eax
0x6C774F: mov     eax, [edx+2Ch]
0x6C7752: call    eax
0x6C7754: test    al, al
0x6C7756: jz      short loc_6C7791
0x6C7758: mov     cx, [esi+4]
0x6C775C: cmp     cx, [edi+4]
0x6C7760: jnz     short loc_6C7791
0x6C7762: mov     dx, [esi+6]
0x6C7766: cmp     dx, [edi+6]
0x6C776A: jnz     short loc_6C7791
0x6C776C: mov     ax, [esi+8]
0x6C7770: cmp     ax, [edi+8]
0x6C7774: jnz     short loc_6C7791
0x6C7776: mov     cx, [esi+0Ah]
0x6C777A: cmp     cx, [edi+0Ah]
0x6C777E: jnz     short loc_6C7791
0x6C7780: mov     dx, [esi+0Ch]
0x6C7784: cmp     dx, [edi+0Ch]
0x6C7788: jnz     short loc_6C7791
0x6C778A: pop     edi
0x6C778B: mov     al, 1
0x6C778D: pop     esi
0x6C778E: retn    4
0x6C7791: pop     edi
0x6C7792: xor     al, al
0x6C7794: pop     esi
0x6C7795: retn    4
