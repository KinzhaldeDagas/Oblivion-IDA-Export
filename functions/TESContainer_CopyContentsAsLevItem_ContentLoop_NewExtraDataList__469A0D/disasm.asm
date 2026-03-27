0x469A0D: mov     edi, [ebp+0]
0x469A10: test    edi, edi
0x469A12: jz      short TESContainer_CopyContentsAsLevItem___ContentLoop_Next
0x469A14: push    14h; Size
0x469A16: mov     [esp+4+arg_F], 1
0x469A1B: call    FormHeapAlloc
0x469A20: add     esp, 4
0x469A23: mov     [esp+arg_10], eax
0x469A27: test    eax, eax
0x469A29: mov     [esp+arg_1C], 0
0x469A31: jz      short loc_469A3E
0x469A33: mov     ecx, eax
0x469A35: call    ExtraDataList_constr
0x469A3A: mov     esi, eax
0x469A3C: jmp     short loc_469A40
0x469A3E: xor     esi, esi
0x469A40: mov     eax, [esp+arg_24]
0x469A44: push    eax
0x469A45: mov     ecx, esi
0x469A47: mov     [esp+4+arg_1C], 0FFFFFFFFh
0x469A4F: call    ExtraDataList_AddExtraLeveledItem
0x469A54: movzx   ecx, word ptr [edi]
0x469A57: push    ecx
0x469A58: mov     ecx, esi
0x469A5A: call    ExtraDataList_SetExtraCount
0x469A5F: mov     edx, [edi]
0x469A61: mov     eax, [edi+4]
0x469A64: mov     ecx, [esp+arg_28]
0x469A68: push    edx
0x469A69: push    esi
0x469A6A: push    eax
0x469A6B: call    ContainerExtraData_AddItem
