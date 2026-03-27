0x48AE66: mov     eax, [ebx+8]
0x48AE69: push    esi
0x48AE6A: push    ebp
0x48AE6B: push    1
0x48AE6D: push    eax
0x48AE6E: mov     ecx, edi
0x48AE70: call    ContainerExtraData_GetEntryForForm
0x48AE75: mov     esi, eax
0x48AE77: mov     eax, [ebx+8]
0x48AE7A: mov     [esp+10h+arg_C], eax
0x48AE7E: mov     eax, [ebx]
0x48AE80: cmp     eax, ebp
0x48AE82: mov     [esp+10h+arg_8], esi
0x48AE86: jz      short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE88: cmp     [eax+4], ebp
0x48AE8B: jnz     short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE8D: cmp     [eax], ebp
0x48AE8F: jnz     short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE91: push    eax
0x48AE92: call    FormHeapFree
0x48AE97: add     esp, 4
0x48AE9A: mov     [ebx], ebp
