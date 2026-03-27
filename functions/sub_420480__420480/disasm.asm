0x420480: push    esi
0x420481: push    42h ; 'B'; a2
0x420483: xor     esi, esi
0x420485: call    BaseExtraList_GetExtraData
0x42048A: test    eax, eax
0x42048C: jz      short loc_420493
0x42048E: add     eax, 0Ch
0x420491: pop     esi
0x420492: retn
0x420493: mov     eax, esi
0x420495: pop     esi
0x420496: retn
