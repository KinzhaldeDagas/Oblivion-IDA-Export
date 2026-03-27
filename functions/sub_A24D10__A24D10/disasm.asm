0xA24D10: push    offset dword_B14170
0xA24D15: mov     ecx, offset dword_B07CFC
0xA24D1A: call    BSSimpleList_Remove
0xA24D1F: mov     eax, off_B14174; "iMoveBarWaitingMilliseconds:LoadingBar"
0xA24D24: test    eax, eax
0xA24D26: jz      short locret_A24D34
0xA24D28: cmp     byte ptr [eax], 53h ; 'S'
0xA24D2B: jnz     short locret_A24D34
0xA24D2D: push    eax
0xA24D2E: call    FormHeapFree
0xA24D33: pop     ecx
0xA24D34: retn
