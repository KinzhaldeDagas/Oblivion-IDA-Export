0x4FA540: mov     eax, [esp+a1]
0x4FA544: test    eax, eax
0x4FA546: jz      short locret_4FA553
0x4FA548: push    eax
0x4FA549: mov     ecx, offset dword_B361CC
0x4FA54E: call    BSSimpleList_Remove
0x4FA553: retn
