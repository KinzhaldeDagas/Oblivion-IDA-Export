0xA1BC60: push    offset preventHavokAddAll
0xA1BC65: mov     ecx, offset dword_B07CFC
0xA1BC6A: call    BSSimpleList_Remove
0xA1BC6F: mov     eax, off_B09874; "bPreventHavokAddAll:HAVOK"
0xA1BC74: test    eax, eax
0xA1BC76: jz      short locret_A1BC84
0xA1BC78: cmp     byte ptr [eax], 53h ; 'S'
0xA1BC7B: jnz     short locret_A1BC84
0xA1BC7D: push    eax
0xA1BC7E: call    FormHeapFree
0xA1BC83: pop     ecx
0xA1BC84: retn
