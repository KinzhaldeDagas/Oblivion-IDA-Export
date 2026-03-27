0x420360: push    3Fh ; '?'; a2
0x420362: call    BaseExtraList_GetExtraData
0x420367: test    eax, eax
0x420369: jz      short locret_42037D
0x42036B: cmp     [esp+arg_0], 0
0x420370: jz      short loc_420379
0x420372: or      byte ptr [eax+10h], 1
0x420376: retn    4
0x420379: and     byte ptr [eax+10h], 0FEh
0x42037D: retn    4
