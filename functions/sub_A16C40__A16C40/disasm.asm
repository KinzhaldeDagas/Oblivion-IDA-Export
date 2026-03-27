0xA16C40: push    offset byte_B02D70
0xA16C45: mov     ecx, offset dword_B07CFC
0xA16C4A: call    BSSimpleList_Remove
0xA16C4F: mov     eax, off_B02D74; "bDisplayLODLand:LOD"
0xA16C54: test    eax, eax
0xA16C56: jz      short locret_A16C64
0xA16C58: cmp     byte ptr [eax], 53h ; 'S'
0xA16C5B: jnz     short locret_A16C64
0xA16C5D: push    eax
0xA16C5E: call    FormHeapFree
0xA16C63: pop     ecx
0xA16C64: retn
