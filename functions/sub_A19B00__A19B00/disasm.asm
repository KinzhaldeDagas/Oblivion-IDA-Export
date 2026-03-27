0xA19B00: push    offset dword_B06EFC
0xA19B05: mov     ecx, offset dword_B07CFC
0xA19B0A: call    BSSimpleList_Remove
0xA19B0F: mov     eax, off_B06F00; "iActorShadowCountExt:Display"
0xA19B14: test    eax, eax
0xA19B16: jz      short locret_A19B24
0xA19B18: cmp     byte ptr [eax], 53h ; 'S'
0xA19B1B: jnz     short locret_A19B24
0xA19B1D: push    eax
0xA19B1E: call    FormHeapFree
0xA19B23: pop     ecx
0xA19B24: retn
