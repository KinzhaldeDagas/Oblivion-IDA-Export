0xA16C10: push    offset flt_B02D68
0xA16C15: mov     ecx, offset dword_B07CFC
0xA16C1A: call    BSSimpleList_Remove
0xA16C1F: mov     eax, off_B02D6C; "fLODLandVerticalBias:LOD"
0xA16C24: test    eax, eax
0xA16C26: jz      short locret_A16C34
0xA16C28: cmp     byte ptr [eax], 53h ; 'S'
0xA16C2B: jnz     short locret_A16C34
0xA16C2D: push    eax
0xA16C2E: call    FormHeapFree
0xA16C33: pop     ecx
0xA16C34: retn
