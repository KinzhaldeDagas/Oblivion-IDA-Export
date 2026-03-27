0xA17AD0: push    offset sInvalidationFile_Archive
0xA17AD5: mov     ecx, offset dword_B07CFC
0xA17ADA: call    BSSimpleList_Remove
0xA17ADF: mov     eax, off_B04454; "sInvalidationFile:Archive"
0xA17AE4: test    eax, eax
0xA17AE6: jz      short locret_A17AF4
0xA17AE8: cmp     byte ptr [eax], 53h ; 'S'
0xA17AEB: jnz     short locret_A17AF4
0xA17AED: push    eax
0xA17AEE: call    FormHeapFree
0xA17AF3: pop     ecx
0xA17AF4: retn
