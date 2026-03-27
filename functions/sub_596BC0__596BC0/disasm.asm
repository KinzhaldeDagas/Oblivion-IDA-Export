0x596BC0: mov     ecx, [esp+arg_0]
0x596BC4: push    ebx
0x596BC5: push    ebp
0x596BC6: push    esi
0x596BC7: push    edi
0x596BC8: push    0FAAh
0x596BCD: call    Tile_GetFloat
0x596BD2: call    Double_To_SInt32
0x596BD7: mov     esi, ds:0B33A98h
0x596BDD: xor     ebx, ebx
0x596BDF: xor     edi, edi
0x596BE1: add     esi, 54h ; 'T'
0x596BE4: mov     ebp, eax
0x596BE6: jz      short loc_596C09
0x596BE8: mov     eax, [esi]
0x596BEA: test    eax, eax
0x596BEC: jz      short loc_596C09
0x596BEE: cmp     ebx, ebp
0x596BF0: jg      short loc_596C09
0x596BF2: mov     edi, eax
0x596BF4: mov     ecx, edi
0x596BF6: call    TESClass_IsPlayable
0x596BFB: test    al, al
0x596BFD: jz      short loc_596C02
0x596BFF: add     ebx, 1
0x596C02: mov     esi, [esi+4]
0x596C05: test    esi, esi
0x596C07: jnz     short loc_596BE8
0x596C09: mov     eax, edi
0x596C0B: pop     edi
0x596C0C: pop     esi
0x596C0D: pop     ebp
0x596C0E: pop     ebx
0x596C0F: retn    4
