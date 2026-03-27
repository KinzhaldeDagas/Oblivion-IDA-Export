0xA1A790: push    offset unk_B075FC
0xA1A795: mov     ecx, offset dword_B07CFC
0xA1A79A: call    BSSimpleList_Remove
0xA1A79F: mov     eax, off_B07600; "fLODMultItems:LOD"
0xA1A7A4: test    eax, eax
0xA1A7A6: jz      short locret_A1A7B4
0xA1A7A8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A7AB: jnz     short locret_A1A7B4
0xA1A7AD: push    eax
0xA1A7AE: call    FormHeapFree
0xA1A7B3: pop     ecx
0xA1A7B4: retn
