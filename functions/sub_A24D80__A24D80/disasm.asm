0xA24D80: push    offset off_B14374; "Special\\TES4Title.mp3"
0xA24D85: mov     ecx, offset dword_B07CFC
0xA24D8A: call    BSSimpleList_Remove
0xA24D8F: mov     eax, off_B14378; "sMainMenuMusic:General"
0xA24D94: test    eax, eax
0xA24D96: jz      short locret_A24DA4
0xA24D98: cmp     byte ptr [eax], 53h ; 'S'
0xA24D9B: jnz     short locret_A24DA4
0xA24D9D: push    eax
0xA24D9E: call    FormHeapFree
0xA24DA3: pop     ecx
0xA24DA4: retn
