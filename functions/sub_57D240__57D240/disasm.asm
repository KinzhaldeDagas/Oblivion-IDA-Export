0x57D240: xor     eax, eax
0x57D242: lea     edx, [ecx+0E0h]
0x57D248: cmp     dword ptr [edx], 0
0x57D24B: jz      short loc_57D260
0x57D24D: add     eax, 1
0x57D250: add     edx, 4
0x57D253: cmp     eax, 0Ah
0x57D256: jl      short loc_57D248
0x57D258: mov     eax, [ecx+104h]
0x57D25E: jmp     short loc_57D278
0x57D260: cmp     eax, 0Ah
0x57D263: jl      short loc_57D26D
0x57D265: mov     eax, [ecx+104h]
0x57D26B: jmp     short loc_57D278
0x57D26D: test    eax, eax
0x57D26F: jz      short loc_57D278
0x57D271: mov     eax, [ecx+eax*4+0DCh]
0x57D278: push    esi
0x57D279: push    eax
0x57D27A: call    Menu_GetOpenMenuTile
0x57D27F: mov     esi, eax
0x57D281: add     esp, 4
0x57D284: test    esi, esi
0x57D286: jz      short loc_57D2C1
0x57D288: push    0FA5h
0x57D28D: mov     ecx, esi
0x57D28F: call    Tile_GetFloat
0x57D294: call    Double_To_SInt32
0x57D299: cmp     eax, 66h ; 'f'
0x57D29C: jz      short loc_57D2A5
0x57D29E: cmp     eax, 1776h
0x57D2A3: jnz     short loc_57D2C1
0x57D2A5: mov     ecx, esi
0x57D2A7: call    Tile_GetParentMenu
0x57D2AC: mov     ecx, [esp+4+arg_0]
0x57D2B0: mov     esi, eax
0x57D2B2: call    Tile_GetParentMenu
0x57D2B7: cmp     eax, esi
0x57D2B9: jz      short loc_57D2C1
0x57D2BB: xor     al, al
0x57D2BD: pop     esi
0x57D2BE: retn    4
0x57D2C1: mov     al, 1
0x57D2C3: pop     esi
0x57D2C4: retn    4
