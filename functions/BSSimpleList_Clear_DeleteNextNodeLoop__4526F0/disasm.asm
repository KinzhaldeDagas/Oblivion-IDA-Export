0x4526F0: mov     eax, [esi+4]
0x4526F3: mov     edi, [eax+4]
0x4526F6: push    eax
0x4526F7: call    FormHeapFree
0x4526FC: add     esp, 4
0x4526FF: test    edi, edi
0x452701: mov     [esi+4], edi
0x452704: jnz     short BSSimpleList_Clear___DeleteNextNodeLoop
0x452706: pop     edi
