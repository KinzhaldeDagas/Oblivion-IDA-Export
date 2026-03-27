0x5ADB40: push    esi
0x5ADB41: push    3EFh
0x5ADB46: call    Menu_GetOpenMenuTile
0x5ADB4B: mov     esi, eax
0x5ADB4D: add     esp, 4
0x5ADB50: test    esi, esi
0x5ADB52: jz      short loc_5ADBB6
0x5ADB54: mov     ecx, esi
0x5ADB56: call    Tile_GetParentMenu
0x5ADB5B: test    eax, eax
0x5ADB5D: jz      short loc_5ADBB6
0x5ADB5F: mov     eax, ds:0B333A0h
0x5ADB64: cmp     byte ptr [eax+51h], 0
0x5ADB68: jnz     short loc_5ADBB6
0x5ADB6A: cmp     byte ptr [eax+52h], 0
0x5ADB6E: jnz     short loc_5ADBB6
0x5ADB70: mov     ecx, esi
0x5ADB72: call    Tile_GetParentMenu
0x5ADB77: mov     esi, eax
0x5ADB79: cmp     byte ptr [esi+71h], 0
0x5ADB7D: jz      short loc_5ADB90
0x5ADB7F: mov     ecx, ds:0B33398h
0x5ADB85: push    1
0x5ADB87: call    OSGlobals_PurgeModels
0x5ADB8C: mov     byte ptr [esi+71h], 0
0x5ADB90: push    edi
0x5ADB91: mov     edi, 64h ; 'd'
0x5ADB96: cmp     [esi+60h], edi
0x5ADB99: mov     byte ptr [esi+70h], 1
0x5ADB9D: mov     [esi+3Ch], edi
0x5ADBA0: jge     short loc_5ADBB1
0x5ADBA2: push    0
0x5ADBA4: call    sub_5AD980
0x5ADBA9: add     esp, 4
0x5ADBAC: cmp     [esi+60h], edi
0x5ADBAF: jl      short loc_5ADBA2
0x5ADBB1: mov     byte ptr [esi+70h], 0
0x5ADBB5: pop     edi
0x5ADBB6: pop     esi
0x5ADBB7: retn
