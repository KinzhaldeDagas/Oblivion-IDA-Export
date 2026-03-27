0xA24A80: push    offset flt_B13FC4
0xA24A85: mov     ecx, offset dword_B07CFC
0xA24A8A: call    BSSimpleList_Remove
0xA24A8F: mov     eax, off_B13FC8; "fCreditsScrollSpeed:Menu"
0xA24A94: test    eax, eax
0xA24A96: jz      short locret_A24AA4
0xA24A98: cmp     byte ptr [eax], 53h ; 'S'
0xA24A9B: jnz     short locret_A24AA4
0xA24A9D: push    eax
0xA24A9E: call    FormHeapFree
0xA24AA3: pop     ecx
0xA24AA4: retn
