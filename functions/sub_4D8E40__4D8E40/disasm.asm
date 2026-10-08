0x4D8E40: add     ecx, 44h ; 'D'
0x4D8E43: call    ExtraDataList_GetOblivionEntry; Returns ExtraOblivionEntry type 0x3E itself, or null.
0x4D8E48: test    eax, eax
0x4D8E4A: jz      short loc_4D8E50
0x4D8E4C: mov     eax, [eax+18h]
0x4D8E4F: retn
0x4D8E50: xor     eax, eax
0x4D8E52: retn
