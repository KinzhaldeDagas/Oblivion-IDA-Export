0x420840: push    58h ; 'X'; a2
0x420842: call    BaseExtraList_GetExtraData
0x420847: test    eax, eax
0x420849: jz      short loc_42084F
0x42084B: mov     eax, [eax+0Ch]
0x42084E: retn
0x42084F: xor     eax, eax
0x420851: retn
