0xA16A60: push    offset bUSeThreadedMorhper
0xA16A65: mov     ecx, offset dword_B07CFC
0xA16A6A: call    BSSimpleList_Remove
0xA16A6F: mov     eax, off_B02D24; "bUseThreadedMorpher:General"
0xA16A74: test    eax, eax
0xA16A76: jz      short locret_A16A84
0xA16A78: cmp     byte ptr [eax], 53h ; 'S'
0xA16A7B: jnz     short locret_A16A84
0xA16A7D: push    eax
0xA16A7E: call    FormHeapFree
0xA16A83: pop     ecx
0xA16A84: retn
