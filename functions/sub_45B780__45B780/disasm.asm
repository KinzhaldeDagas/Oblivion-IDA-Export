0x45B780: mov     eax, [esp+formID]
0x45B784: mov     edx, [eax+8]
0x45B787: shr     edx, 0Eh
0x45B78A: test    dl, 1
0x45B78D: jnz     short locret_45B79D
0x45B78F: mov     eax, [eax+0Ch]
0x45B792: mov     ecx, [ecx]; self
0x45B794: mov     [esp+formID], eax; formID
0x45B798: jmp     SaveLoadChangesMap_RemoveChanges;
0x45B79D: retn    8
