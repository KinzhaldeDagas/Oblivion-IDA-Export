0x472640: push    esi
0x472641: push    edi
0x472642: mov     edi, [esp+8+arg_0]
0x472646: test    edi, edi
0x472648: mov     esi, ecx
0x47264A: jz      short loc_47267C
0x47264C: mov     eax, 0FFh
0x472651: cmp     [esi+3Ch], ax
0x472655: jnz     short loc_472674
0x472657: cmp     [esi+70h], ax
0x47265B: jnz     short loc_472674
0x47265D: mov     ecx, edi
0x47265F: call    TESActorBaseData_GetMagicka
0x472664: test    ax, ax
0x472667: jnz     short loc_472674
0x472669: mov     ecx, edi
0x47266B: call    TESActorBaseData_GetMagicka
0x472670: mov     [esi+70h], ax
0x472674: push    edi
0x472675: mov     ecx, esi
0x472677: call    sub_472030
0x47267C: pop     edi
0x47267D: pop     esi
0x47267E: retn    4
