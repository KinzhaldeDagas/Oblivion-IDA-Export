0x517A50: push    esi
0x517A51: mov     esi, [esp+4+a1]
0x517A55: test    esi, esi
0x517A57: push    edi
0x517A58: mov     edi, ecx
0x517A5A: jz      short loc_517A74
0x517A5C: mov     ecx, esi
0x517A5E: call    TESFile_GetChunkType
0x517A63: cmp     eax, 44534C53h
0x517A68: jnz     short loc_517A74
0x517A6A: push    18h; a4
0x517A6C: push    edi; Dst
0x517A6D: mov     ecx, esi; a1
0x517A6F: call    TESFile_GetChunkData
0x517A74: pop     edi
0x517A75: pop     esi
0x517A76: retn    4
