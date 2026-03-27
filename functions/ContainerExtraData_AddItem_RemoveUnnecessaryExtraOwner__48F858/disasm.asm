0x48F858: test    ebx, ebx
0x48F85A: jz      short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F85C: mov     ecx, ebx
0x48F85E: call    ExtraDataList_GetOwner
0x48F863: mov     ecx, ds:0B333C4h
0x48F869: cmp     eax, ecx
0x48F86B: jnz     short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F86D: cmp     [edi+4], ecx
0x48F870: jnz     short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F872: mov     ecx, ebx
0x48F874: call    ExtraDataList_RemoveOwner
