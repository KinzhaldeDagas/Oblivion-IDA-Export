0x5E9670: add     ecx, 44h ; 'D'; this
0x5E9673: jz      short loc_5E9681
0x5E9675: call    ExtraDataList__GetRefractionProperty
0x5E967A: test    eax, eax
0x5E967C: jz      short loc_5E9681
0x5E967E: mov     al, 1
0x5E9680: retn
0x5E9681: xor     al, al
0x5E9683: retn
