0xA19B60: push    offset byte_B06F0C
0xA19B65: mov     ecx, offset dword_B07CFC
0xA19B6A: call    BSSimpleList_Remove
0xA19B6F: mov     eax, off_B06F10; "bActorSelfShadowing:Display"
0xA19B74: test    eax, eax
0xA19B76: jz      short locret_A19B84
0xA19B78: cmp     byte ptr [eax], 53h ; 'S'
0xA19B7B: jnz     short locret_A19B84
0xA19B7D: push    eax
0xA19B7E: call    FormHeapFree
0xA19B83: pop     ecx
0xA19B84: retn
