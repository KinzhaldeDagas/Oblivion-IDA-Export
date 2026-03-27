0x56A970: push    esi
0x56A971: mov     esi, [esp+4+a1]
0x56A975: test    esi, esi
0x56A977: push    edi
0x56A978: mov     edi, ecx
0x56A97A: jz      short loc_56A9B6
0x56A97C: mov     ecx, esi
0x56A97E: call    TESFile_GetChunkType
0x56A983: cmp     eax, 54445443h
0x56A988: jz      short loc_56A998
0x56A98A: mov     ecx, esi
0x56A98C: call    TESFile_GetChunkType
0x56A991: cmp     eax, 41445443h
0x56A996: jnz     short loc_56A9B6
0x56A998: push    ebx
0x56A999: mov     ecx, esi
0x56A99B: call    TESFile_GetChunkType
0x56A9A0: push    18h; a4
0x56A9A2: cmp     eax, 54445443h
0x56A9A7: push    edi; Dst
0x56A9A8: mov     ecx, esi; a1
0x56A9AA: setz    bl
0x56A9AD: call    TESFile_GetChunkData
0x56A9B2: mov     [edi+14h], bl
0x56A9B5: pop     ebx
0x56A9B6: pop     edi
0x56A9B7: pop     esi
0x56A9B8: retn    4
