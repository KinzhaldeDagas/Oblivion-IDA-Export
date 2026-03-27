0xA24C50: push    offset unk_B14150
0xA24C55: mov     ecx, offset dword_B07CFC
0xA24C5A: call    BSSimpleList_Remove
0xA24C5F: mov     eax, off_B14154; "fPercentageOfBar3:LoadingBar"
0xA24C64: test    eax, eax
0xA24C66: jz      short locret_A24C74
0xA24C68: cmp     byte ptr [eax], 53h ; 'S'
0xA24C6B: jnz     short locret_A24C74
0xA24C6D: push    eax
0xA24C6E: call    FormHeapFree
0xA24C73: pop     ecx
0xA24C74: retn
