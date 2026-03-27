0x48F7FA: jz      short ContainerExtraData_AddItem___ValidateAddedCount
0x48F7FC: mov     ecx, ebx
0x48F7FE: call    BaseExtraList_Count
0x48F803: test    eax, eax
0x48F805: jnz     short ContainerExtraData_AddItem___ValidateAddedCount
0x48F807: mov     eax, [ebx]
0x48F809: mov     edx, [eax]
0x48F80B: push    1
0x48F80D: mov     ecx, ebx
0x48F80F: call    edx
0x48F811: mov     [esp+4+arg_24], 0
0x48F819: mov     ebx, [esp+4+arg_24]
