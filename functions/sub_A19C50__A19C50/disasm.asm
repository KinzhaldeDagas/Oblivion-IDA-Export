0xA19C50: push    offset unk_B06F34
0xA19C55: mov     ecx, offset dword_B07CFC
0xA19C5A: call    BSSimpleList_Remove
0xA19C5F: mov     eax, off_B06F38; "uVideoDeviceIdentifierPart1:Display"
0xA19C64: test    eax, eax
0xA19C66: jz      short locret_A19C74
0xA19C68: cmp     byte ptr [eax], 53h ; 'S'
0xA19C6B: jnz     short locret_A19C74
0xA19C6D: push    eax
0xA19C6E: call    FormHeapFree
0xA19C73: pop     ecx
0xA19C74: retn
