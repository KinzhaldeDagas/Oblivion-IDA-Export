0x5E6C10: push    esi
0x5E6C11: push    edi
0x5E6C12: push    3F1h
0x5E6C17: mov     edi, ecx
0x5E6C19: call    Menu_GetOpenMenuTile
0x5E6C1E: mov     esi, eax
0x5E6C20: add     esp, 4
0x5E6C23: test    esi, esi
0x5E6C25: jz      short loc_5E6C59
0x5E6C27: mov     ecx, esi
0x5E6C29: call    Tile_GetParentMenu
0x5E6C2E: test    eax, eax
0x5E6C30: jz      short loc_5E6C59
0x5E6C32: mov     ecx, esi
0x5E6C34: call    sub_5893B0
0x5E6C39: test    al, al
0x5E6C3B: jz      short loc_5E6C59
0x5E6C3D: cmp     dword ptr [edi+58h], 0
0x5E6C41: jz      short loc_5E6C59
0x5E6C43: mov     ecx, [edi+58h]
0x5E6C46: mov     eax, [ecx]
0x5E6C48: mov     edx, [eax+1CCh]
0x5E6C4E: call    edx
0x5E6C50: test    al, al
0x5E6C52: jz      short loc_5E6C59
0x5E6C54: pop     edi
0x5E6C55: mov     al, 1
0x5E6C57: pop     esi
0x5E6C58: retn
0x5E6C59: pop     edi
0x5E6C5A: xor     al, al
0x5E6C5C: pop     esi
0x5E6C5D: retn
