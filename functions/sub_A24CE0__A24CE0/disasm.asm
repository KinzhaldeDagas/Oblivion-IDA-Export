0xA24CE0: push    offset dword_B14168
0xA24CE5: mov     ecx, offset dword_B07CFC
0xA24CEA: call    BSSimpleList_Remove
0xA24CEF: mov     eax, off_B1416C; "iMoveBarChaseMilliseconds:LoadingBar"
0xA24CF4: test    eax, eax
0xA24CF6: jz      short locret_A24D04
0xA24CF8: cmp     byte ptr [eax], 53h ; 'S'
0xA24CFB: jnz     short locret_A24D04
0xA24CFD: push    eax
0xA24CFE: call    FormHeapFree
0xA24D03: pop     ecx
0xA24D04: retn
