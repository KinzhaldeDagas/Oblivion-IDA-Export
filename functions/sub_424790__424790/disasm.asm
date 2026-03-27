0x424790: push    esi
0x424791: push    36h ; '6'; a2
0x424793: mov     esi, ecx
0x424795: call    BaseExtraList_GetExtraData
0x42479A: test    eax, eax
0x42479C: jz      short loc_4247A8
0x42479E: push    1
0x4247A0: push    eax
0x4247A1: mov     ecx, esi
0x4247A3: call    BaseExtraList_RemoveExtraByPtr
0x4247A8: pop     esi
0x4247A9: retn
