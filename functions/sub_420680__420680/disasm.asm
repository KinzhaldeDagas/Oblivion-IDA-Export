0x420680: push    44h ; 'D'; a2
0x420682: call    BaseExtraList_GetExtraData
0x420687: test    eax, eax
0x420689: jz      short loc_42068F
0x42068B: mov     eax, [eax+0Ch]
0x42068E: retn
0x42068F: xor     eax, eax
0x420691: retn
