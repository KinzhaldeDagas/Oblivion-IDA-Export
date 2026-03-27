0x5E8870: add     ecx, 44h ; 'D'
0x5E8873: call    ExtraDataList__GetExtraPackage
0x5E8878: test    eax, eax
0x5E887A: jz      short loc_5E8885
0x5E887C: test    byte ptr [eax+1Ch], 1
0x5E8880: jz      short loc_5E8885
0x5E8882: mov     al, 1
0x5E8884: retn
0x5E8885: xor     al, al
0x5E8887: retn
