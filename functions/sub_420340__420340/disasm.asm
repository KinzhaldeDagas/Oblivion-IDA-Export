0x420340: push    3Fh ; '?'; a2
0x420342: call    BaseExtraList_GetExtraData
0x420347: test    eax, eax
0x420349: jz      short loc_420351
0x42034B: mov     al, [eax+10h]
0x42034E: and     al, 1
0x420350: retn
0x420351: xor     al, al
0x420353: retn
