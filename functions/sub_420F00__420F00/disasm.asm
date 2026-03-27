0x420F00: push    esi
0x420F01: push    23h ; '#'; a2
0x420F03: mov     esi, ecx
0x420F05: call    BaseExtraList_GetExtraData
0x420F0A: test    eax, eax
0x420F0C: jz      short loc_420F17
0x420F0E: push    23h ; '#'
0x420F10: mov     ecx, esi
0x420F12: call    BaseExtraList_RemoveExtraByType
0x420F17: pop     esi
0x420F18: retn
