0xA24BF0: push    offset a33J
0xA24BF5: mov     ecx, offset dword_B07CFC
0xA24BFA: call    BSSimpleList_Remove
0xA24BFF: mov     eax, off_B14144; "fPercentageOfBar1:LoadingBar"
0xA24C04: test    eax, eax
0xA24C06: jz      short locret_A24C14
0xA24C08: cmp     byte ptr [eax], 53h ; 'S'
0xA24C0B: jnz     short locret_A24C14
0xA24C0D: push    eax
0xA24C0E: call    FormHeapFree
0xA24C13: pop     ecx
0xA24C14: retn
