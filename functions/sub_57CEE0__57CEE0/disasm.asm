0x57CEE0: push    ebx
0x57CEE1: push    esi
0x57CEE2: mov     ebx, ecx
0x57CEE4: push    edi
0x57CEE5: mov     edi, 9
0x57CEEA: lea     esi, [ebx+104h]
0x57CEF0: mov     eax, [esi]
0x57CEF2: test    eax, eax
0x57CEF4: jz      short loc_57CF1E
0x57CEF6: push    eax
0x57CEF7: call    Menu_GetOpenMenuTile
0x57CEFC: add     esp, 4
0x57CEFF: test    eax, eax
0x57CF01: jz      short loc_57CF18
0x57CF03: mov     ecx, eax
0x57CF05: call    Tile_GetParentMenu
0x57CF0A: test    eax, eax
0x57CF0C: jz      short loc_57CF18
0x57CF0E: mov     edx, [eax]
0x57CF10: mov     ecx, eax
0x57CF12: mov     eax, [edx]
0x57CF14: push    1
0x57CF16: call    eax
0x57CF18: mov     dword ptr [esi], 0
0x57CF1E: sub     edi, 1
0x57CF21: sub     esi, 4
0x57CF24: test    edi, edi
0x57CF26: jge     short loc_57CEF0
0x57CF28: call    sub_5B41E0
0x57CF2D: call    sub_57CC00
0x57CF32: call    sub_5964B0
0x57CF37: call    sub_59D890
0x57CF3C: pop     edi
0x57CF3D: pop     esi
0x57CF3E: mov     byte ptr [ebx+8], 4
0x57CF42: pop     ebx
0x57CF43: retn
