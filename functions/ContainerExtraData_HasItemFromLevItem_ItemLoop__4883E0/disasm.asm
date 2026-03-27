0x4883E0: mov     eax, [edi]
0x4883E2: test    eax, eax
0x4883E4: jz      short ContainerExtraData_HasItemFromLevItem___Done
0x4883E6: test    bl, bl
0x4883E8: jnz     short ContainerExtraData_HasItemFromLevItem___Done
0x4883EA: mov     esi, [eax]
0x4883EC: test    esi, esi
0x4883EE: jz      short ContainerExtraData_HasItemFromLevItem___ItemLoop_next
