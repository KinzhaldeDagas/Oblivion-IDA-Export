0x4234B0: push    esi
0x4234B1: push    26h ; '&'; a2
0x4234B3: mov     esi, ecx
0x4234B5: call    BaseExtraList_GetExtraData
0x4234BA: test    eax, eax
0x4234BC: jz      short loc_4234C8
0x4234BE: push    1
0x4234C0: push    eax
0x4234C1: mov     ecx, esi
0x4234C3: call    BaseExtraList_RemoveExtraByPtr
0x4234C8: pop     esi
0x4234C9: retn
