0xA25020: push    offset flt_B1483C
0xA25025: mov     ecx, offset dword_B07CFC
0xA2502A: call    BSSimpleList_Remove
0xA2502F: mov     eax, off_B14840; "fItemLODMax:LOD"
0xA25034: test    eax, eax
0xA25036: jz      short locret_A25044
0xA25038: cmp     byte ptr [eax], 53h ; 'S'
0xA2503B: jnz     short locret_A25044
0xA2503D: push    eax
0xA2503E: call    FormHeapFree
0xA25043: pop     ecx
0xA25044: retn
