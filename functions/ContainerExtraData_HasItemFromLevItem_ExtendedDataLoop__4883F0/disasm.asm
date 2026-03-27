0x4883F0: mov     ecx, [esi]
0x4883F2: test    ecx, ecx
0x4883F4: jz      short ContainerExtraData_HasItemFromLevItem___ItemLoop_next
0x4883F6: call    ExtraDataList_GetExtraLeveledItem
0x4883FB: cmp     eax, ebp
0x4883FD: jnz     short ContainerExtraData_HasItemFromLevItem___ExtendedDataLoop_next
0x4883FF: mov     bl, 1
