0x41F810: push    13h; a2
0x41F812: call    BaseExtraList_GetExtraData
0x41F817: test    eax, eax
0x41F819: jz      short loc_41F820
0x41F81B: movzx   eax, byte ptr [eax+0Ch]
0x41F81F: retn
0x41F820: mov     eax, 1
0x41F825: retn
