0xA19B30: push    offset dword_B06F04
0xA19B35: mov     ecx, offset dword_B07CFC
0xA19B3A: call    BSSimpleList_Remove
0xA19B3F: mov     eax, off_B06F08; "iActorShadowCountInt:Display"
0xA19B44: test    eax, eax
0xA19B46: jz      short locret_A19B54
0xA19B48: cmp     byte ptr [eax], 53h ; 'S'
0xA19B4B: jnz     short locret_A19B54
0xA19B4D: push    eax
0xA19B4E: call    FormHeapFree
0xA19B53: pop     ecx
0xA19B54: retn
