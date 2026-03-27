0xA24A10: push    offset dword_B139A4
0xA24A15: mov     ecx, offset dword_B07CFC
0xA24A1A: call    BSSimpleList_Remove
0xA24A1F: mov     eax, off_B139A8; "iConsoleTextYPos:Menu"
0xA24A24: test    eax, eax
0xA24A26: jz      short locret_A24A34
0xA24A28: cmp     byte ptr [eax], 53h ; 'S'
0xA24A2B: jnz     short locret_A24A34
0xA24A2D: push    eax
0xA24A2E: call    FormHeapFree
0xA24A33: pop     ecx
0xA24A34: retn
