0x52E0D0: push    esi
0x52E0D1: mov     esi, [esp+4+a1]
0x52E0D5: test    esi, esi
0x52E0D7: push    edi
0x52E0D8: mov     edi, ecx
0x52E0DA: jz      short loc_52E0F4
0x52E0DC: mov     ecx, esi
0x52E0DE: call    TESFile_GetChunkType
0x52E0E3: cmp     eax, 54445254h
0x52E0E8: jnz     short loc_52E0F4
0x52E0EA: push    10h; a4
0x52E0EC: push    edi; Dst
0x52E0ED: mov     ecx, esi; a1
0x52E0EF: call    TESFile_GetChunkData
0x52E0F4: pop     edi
0x52E0F5: pop     esi
0x52E0F6: retn    4
