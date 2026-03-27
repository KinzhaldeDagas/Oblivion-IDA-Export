0x41E830: push    2Ch ; ','; a2
0x41E832: call    BaseExtraList_GetExtraData
0x41E837: test    eax, eax
0x41E839: jz      short loc_41E83F
0x41E83B: mov     al, [eax+0Ch]
0x41E83E: retn
0x41E83F: xor     al, al
0x41E841: retn
