0x484E90: mov     ecx, [esi]
0x484E92: test    ecx, ecx
0x484E94: jz      short ContainerEntryExtraData_HasWorn___Return_0
0x484E96: push    edi
0x484E97: call    ExtraDataList_HasWorn
0x484E9C: test    al, al
0x484E9E: jnz     short ContainerEntryExtraData_HasWorn___Return_1
0x484EA0: mov     esi, [esi+4]
0x484EA3: test    esi, esi
0x484EA5: jnz     short ContainerEntryExtraData_HasWorn___ExtraDataLoop
