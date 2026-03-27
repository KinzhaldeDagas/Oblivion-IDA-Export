0x48AE9C: cmp     esi, ebp
0x48AE9E: jz      ContainerExtraData_AddEntry___AddArgumentEntryToEntryList
0x48AEA4: mov     ecx, [ebx+4]
0x48AEA7: add     [esi+4], ecx
0x48AEAA: mov     eax, [ebx]
0x48AEAC: cmp     eax, ebp
0x48AEAE: jz      short loc_48AEBD
0x48AEB0: cmp     [eax+4], ebp
0x48AEB3: jnz     short loc_48AEBD
0x48AEB5: cmp     [eax], ebp
0x48AEB7: jz      loc_48AFED
0x48AEBD: cmp     eax, ebp
0x48AEBF: mov     edx, [esi]
0x48AEC1: mov     [esp+arg_C], edx
0x48AEC5: mov     [esp+arg_14], eax
0x48AEC9: jz      ContainerExtraData_AddEntry___DestroyArgEntry
0x48AECF: jmp     short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_
