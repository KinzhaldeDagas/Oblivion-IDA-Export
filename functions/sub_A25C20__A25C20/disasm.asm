0xA25C20: push    offset flt_B14F28
0xA25C25: mov     ecx, offset dword_B07CFC
0xA25C2A: call    BSSimpleList_Remove
0xA25C2F: mov     eax, off_B14F2C; "fDlgLookAdj:Interface"
0xA25C34: test    eax, eax
0xA25C36: jz      short locret_A25C44
0xA25C38: cmp     byte ptr [eax], 53h ; 'S'
0xA25C3B: jnz     short locret_A25C44
0xA25C3D: push    eax
0xA25C3E: call    FormHeapFree
0xA25C43: pop     ecx
0xA25C44: retn
