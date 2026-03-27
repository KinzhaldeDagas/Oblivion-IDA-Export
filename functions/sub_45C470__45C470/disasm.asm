0x45C470: push    esi
0x45C471: mov     esi, [esp+4+arg_0]
0x45C475: test    esi, esi
0x45C477: push    edi
0x45C478: mov     edi, ecx
0x45C47A: jz      short loc_45C499
0x45C47C: lea     esp, [esp+0]
0x45C480: mov     eax, [esi]
0x45C482: test    eax, eax
0x45C484: jz      short loc_45C492
0x45C486: push    0
0x45C488: push    1
0x45C48A: push    eax
0x45C48B: mov     ecx, edi
0x45C48D: call    TESSaveLoadGame_ResetObject
0x45C492: mov     esi, [esi+4]
0x45C495: test    esi, esi
0x45C497: jnz     short loc_45C480
0x45C499: pop     edi
0x45C49A: pop     esi
0x45C49B: retn    4
