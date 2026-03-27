0xA17A10: push    offset bCheckRuntimeCollisions_Archive
0xA17A15: mov     ecx, offset dword_B07CFC
0xA17A1A: call    BSSimpleList_Remove
0xA17A1F: mov     eax, off_B04434; "bCheckRuntimeCollisions:Archive"
0xA17A24: test    eax, eax
0xA17A26: jz      short locret_A17A34
0xA17A28: cmp     byte ptr [eax], 53h ; 'S'
0xA17A2B: jnz     short locret_A17A34
0xA17A2D: push    eax
0xA17A2E: call    FormHeapFree
0xA17A33: pop     ecx
0xA17A34: retn
