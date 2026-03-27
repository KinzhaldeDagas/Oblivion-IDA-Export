0x4204A0: push    esi
0x4204A1: push    42h ; 'B'; a2
0x4204A3: mov     esi, ecx
0x4204A5: call    BaseExtraList_GetExtraData
0x4204AA: test    eax, eax
0x4204AC: jz      short loc_4204B7
0x4204AE: push    42h ; 'B'
0x4204B0: mov     ecx, esi
0x4204B2: call    BaseExtraList_RemoveExtraByType
0x4204B7: pop     esi
0x4204B8: retn
