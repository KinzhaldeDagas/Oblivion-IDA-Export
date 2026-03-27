0x48AED9: mov     edi, [eax]
0x48AEDB: cmp     edi, ebp
0x48AEDD: jz      loc_48AFC2
0x48AEE3: mov     ecx, edi
0x48AEE5: mov     bl, 1
0x48AEE7: call    ExtraDataList_GetReferencePointer
0x48AEEC: test    eax, eax
0x48AEEE: jz      short loc_48AEFF
0x48AEF0: mov     eax, [esp+arg_10]
0x48AEF4: mov     ecx, [eax+4]
0x48AEF7: push    ecx
0x48AEF8: mov     ecx, edi
0x48AEFA: call    ExtraDataList_SetReferencePointer
0x48AEFF: cmp     [esp+arg_C], ebp
0x48AF03: jz      short loc_48AF60
0x48AF05: mov     edx, [esp+arg_C]
0x48AF09: mov     esi, [edx]
0x48AF0B: cmp     esi, ebp
0x48AF0D: jz      short loc_48AF58
0x48AF0F: test    bl, bl
0x48AF11: jz      ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF17: cmp     edi, ebp
0x48AF19: jz      short loc_48AF47
0x48AF1B: push    esi
0x48AF1C: mov     ecx, edi
0x48AF1E: call    ExtraDataList_CompareListForContainer
0x48AF23: test    al, al
0x48AF25: jnz     short loc_48AF47
0x48AF27: mov     ecx, esi
0x48AF29: call    ExtraDataList_GetExtraCount
0x48AF2E: mov     ecx, edi
0x48AF30: movzx   ebx, ax
0x48AF33: call    ExtraDataList_GetExtraCount
0x48AF38: add     bx, ax
0x48AF3B: mov     ecx, esi
0x48AF3D: push    ebx
0x48AF3E: call    ExtraDataList_SetExtraCount
0x48AF43: xor     bl, bl
0x48AF45: jmp     short loc_48AF52
0x48AF47: mov     eax, [esp+arg_C]
0x48AF4B: mov     ecx, [eax+4]
0x48AF4E: mov     [esp+arg_C], ecx
0x48AF52: cmp     [esp+arg_C], ebp
0x48AF56: jnz     short loc_48AF05
0x48AF58: test    bl, bl
0x48AF5A: jz      short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF5C: mov     esi, [esp+arg_18]
0x48AF60: cmp     [esi], ebp
0x48AF62: jnz     short loc_48AF7D
0x48AF64: push    8; Size
0x48AF66: call    FormHeapAlloc
0x48AF6B: add     esp, 4
0x48AF6E: cmp     eax, ebp
0x48AF70: jz      short loc_48AF79
0x48AF72: mov     [eax], ebp
0x48AF74: mov     [eax+4], ebp
0x48AF77: jmp     short loc_48AF7B
0x48AF79: xor     eax, eax
0x48AF7B: mov     [esi], eax
0x48AF7D: cmp     edi, ebp
0x48AF7F: mov     esi, [esi]
0x48AF81: jz      short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF83: cmp     [esi], ebp
0x48AF85: jz      short loc_48AFA9
0x48AF87: push    8; Size
0x48AF89: call    FormHeapAlloc
0x48AF8E: add     esp, 4
0x48AF91: cmp     eax, ebp
0x48AF93: jz      short loc_48AF9E
0x48AF95: mov     edx, [esi]
0x48AF97: mov     [eax], edx
0x48AF99: mov     [eax+4], ebp
0x48AF9C: jmp     short loc_48AFA0
0x48AF9E: xor     eax, eax
0x48AFA0: mov     ecx, [esi+4]
0x48AFA3: mov     [eax+4], ecx
0x48AFA6: mov     [esi+4], eax
0x48AFA9: mov     [esi], edi
