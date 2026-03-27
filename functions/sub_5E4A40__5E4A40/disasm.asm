0x5E4A40: push    esi
0x5E4A41: mov     esi, ecx
0x5E4A43: lea     ecx, [esi+44h]; this
0x5E4A46: call    ExtraDataList_GetContainerChanges
0x5E4A4B: mov     ecx, [esp+4+arg_0]
0x5E4A4F: mov     edx, [esp+4+arg_4]
0x5E4A53: push    ecx
0x5E4A54: push    edx
0x5E4A55: push    esi
0x5E4A56: mov     ecx, eax
0x5E4A58: call    sub_491700
0x5E4A5D: cmp     esi, ds:0B333C4h
0x5E4A63: pop     esi
0x5E4A64: jnz     short locret_5E4A6E
0x5E4A66: push    0
0x5E4A68: call    sub_57A3B0
0x5E4A6D: pop     ecx
0x5E4A6E: retn    8
