0x4246D0: push    esi
0x4246D1: push    1Fh; a2
0x4246D3: mov     esi, ecx
0x4246D5: call    BaseExtraList_GetExtraData
0x4246DA: test    eax, eax
0x4246DC: jz      short loc_4246E8
0x4246DE: push    1
0x4246E0: push    eax
0x4246E1: mov     ecx, esi
0x4246E3: call    BaseExtraList_RemoveExtraByPtr
0x4246E8: pop     esi
0x4246E9: retn
