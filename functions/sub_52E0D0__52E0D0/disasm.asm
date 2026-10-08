0x52E0D0: push    esi; TRDT loader delegates to GetChunkData with max 16. Size 0 is a successful no-op; sizes 1..16 prefix-overlay constructor state; sizes >16 truncate to 15 bytes and force byte 15 to NUL while logging.
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
0x52E0EF: call    TESFile_GetChunkData; Fixed max=16 does not require exact TRDT size. Short chunks leave the constructor/default suffix intact (bytes 13..15 were not explicitly initialized); oversized chunks are accepted after truncation.
0x52E0F4: pop     edi
0x52E0F5: pop     esi
0x52E0F6: retn    4
