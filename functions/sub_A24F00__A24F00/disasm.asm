0xA24F00: push    offset flt_B1480C
0xA24F05: mov     ecx, offset dword_B07CFC
0xA24F0A: call    BSSimpleList_Remove
0xA24F0F: mov     eax, off_B14810; "fTreeLODMax:LOD"
0xA24F14: test    eax, eax
0xA24F16: jz      short locret_A24F24
0xA24F18: cmp     byte ptr [eax], 53h ; 'S'
0xA24F1B: jnz     short locret_A24F24
0xA24F1D: push    eax
0xA24F1E: call    FormHeapFree
0xA24F23: pop     ecx
0xA24F24: retn
