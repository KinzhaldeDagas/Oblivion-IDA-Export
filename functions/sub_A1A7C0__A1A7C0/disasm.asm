0xA1A7C0: push    offset unk_B07604
0xA1A7C5: mov     ecx, offset dword_B07CFC
0xA1A7CA: call    BSSimpleList_Remove
0xA1A7CF: mov     eax, off_B07608; "fLODMultActors:LOD"
0xA1A7D4: test    eax, eax
0xA1A7D6: jz      short locret_A1A7E4
0xA1A7D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A7DB: jnz     short locret_A1A7E4
0xA1A7DD: push    eax
0xA1A7DE: call    FormHeapFree
0xA1A7E3: pop     ecx
0xA1A7E4: retn
