0x424770: push    esi
0x424771: push    3Dh ; '='; a2
0x424773: mov     esi, ecx
0x424775: call    BaseExtraList_GetExtraData
0x42477A: test    eax, eax
0x42477C: jz      short loc_424788
0x42477E: push    1
0x424780: push    eax
0x424781: mov     ecx, esi
0x424783: call    BaseExtraList_RemoveExtraByPtr
0x424788: pop     esi
0x424789: retn
