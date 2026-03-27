0xA25C50: push    offset dword_B14F30
0xA25C55: mov     ecx, offset dword_B07CFC
0xA25C5A: call    BSSimpleList_Remove
0xA25C5F: mov     eax, off_B14F34; "fDlgLookMult:Interface"
0xA25C64: test    eax, eax
0xA25C66: jz      short locret_A25C74
0xA25C68: cmp     byte ptr [eax], 53h ; 'S'
0xA25C6B: jnz     short locret_A25C74
0xA25C6D: push    eax
0xA25C6E: call    FormHeapFree
0xA25C73: pop     ecx
0xA25C74: retn
