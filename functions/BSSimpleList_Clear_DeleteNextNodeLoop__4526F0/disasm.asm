0x4526F0: mov     eax, [esi+4]; Verified generic BSSimpleList_Clear implementation frees each successor node and then clears the head node's data pointer. It does not destroy list data objects; callers remain responsible for element lifetime.
0x4526F3: mov     edi, [eax+4]
0x4526F6: push    eax
0x4526F7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4526FC: add     esp, 4
0x4526FF: test    edi, edi
0x452701: mov     [esi+4], edi
0x452704: jnz     short BSSimpleList_Clear___DeleteNextNodeLoop; Verified generic BSSimpleList_Clear implementation frees each successor node and then clears the head node's data pointer. It does not destroy list data objects; callers remain responsible for element lifetime.
0x452706: pop     edi
