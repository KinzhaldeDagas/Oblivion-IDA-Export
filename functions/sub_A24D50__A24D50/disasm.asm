0xA24D50: push    offset off_B1436C; "0002466E"
0xA24D55: mov     ecx, offset dword_B07CFC
0xA24D5A: call    BSSimpleList_Remove
0xA24D5F: mov     eax, off_B14370; "sCharGenQuest:General"
0xA24D64: test    eax, eax
0xA24D66: jz      short locret_A24D74
0xA24D68: cmp     byte ptr [eax], 53h ; 'S'
0xA24D6B: jnz     short locret_A24D74
0xA24D6D: push    eax
0xA24D6E: call    FormHeapFree
0xA24D73: pop     ecx
0xA24D74: retn
