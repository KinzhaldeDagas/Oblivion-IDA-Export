0x41F670: push    12h; a2
0x41F672: call    BaseExtraList_GetExtraData
0x41F677: test    eax, eax
0x41F679: jz      short locret_41F682
0x41F67B: mov     dword ptr [eax+10h], 0
0x41F682: retn
