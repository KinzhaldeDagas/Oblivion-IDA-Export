0x420FD0: push    4Ah ; 'J'; Returns the pointer payload of ExtraLastFinishedSequence (type 0x4A), or null.
0x420FD2: call    BaseExtraList_GetExtraData
0x420FD7: test    eax, eax
0x420FD9: jz      short loc_420FDF
0x420FDB: mov     eax, [eax+0Ch]
0x420FDE: retn
0x420FDF: xor     eax, eax
0x420FE1: retn
