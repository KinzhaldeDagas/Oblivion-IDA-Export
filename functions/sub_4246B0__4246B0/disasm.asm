0x4246B0: push    esi
0x4246B1: push    22h ; '"'; a2
0x4246B3: mov     esi, ecx
0x4246B5: call    BaseExtraList_GetExtraData
0x4246BA: test    eax, eax
0x4246BC: jz      short loc_4246C8
0x4246BE: push    1
0x4246C0: push    eax
0x4246C1: mov     ecx, esi
0x4246C3: call    BaseExtraList_RemoveExtraByPtr
0x4246C8: pop     esi
0x4246C9: retn
