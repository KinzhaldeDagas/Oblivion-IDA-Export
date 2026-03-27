0x65F910: push    esi
0x65F911: mov     esi, [esp+4+arg_0]
0x65F915: push    offset aPlayer; "Player"
0x65F91A: mov     ecx, esi
0x65F91C: call    NiObjectNET_SetName
0x65F921: cmp     [esp+4+arg_4], 0
0x65F926: jz      short loc_65F92D
0x65F928: or      word ptr [esi+18h], 1
0x65F92D: mov     eax, [esi]
0x65F92F: mov     edx, [eax+58h]
0x65F932: push    offset aCamera01; "Camera01"
0x65F937: mov     ecx, esi
0x65F939: call    edx
0x65F93B: mov     ds:0B3BB10h, eax
0x65F940: pop     esi
0x65F941: retn    8
