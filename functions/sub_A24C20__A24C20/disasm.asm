0xA24C20: push    offset aOgsJ
0xA24C25: mov     ecx, offset dword_B07CFC
0xA24C2A: call    BSSimpleList_Remove
0xA24C2F: mov     eax, off_B1414C; "fPercentageOfBar2:LoadingBar"
0xA24C34: test    eax, eax
0xA24C36: jz      short locret_A24C44
0xA24C38: cmp     byte ptr [eax], 53h ; 'S'
0xA24C3B: jnz     short locret_A24C44
0xA24C3D: push    eax
0xA24C3E: call    FormHeapFree
0xA24C43: pop     ecx
0xA24C44: retn
