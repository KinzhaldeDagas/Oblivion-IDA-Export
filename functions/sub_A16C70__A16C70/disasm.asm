0xA16C70: push    offset flt_B02D78
0xA16C75: mov     ecx, offset dword_B07CFC
0xA16C7A: call    BSSimpleList_Remove
0xA16C7F: mov     eax, off_B02D7C; "fLocalTreeMipMapLODBias:SpeedTree"
0xA16C84: test    eax, eax
0xA16C86: jz      short locret_A16C94
0xA16C88: cmp     byte ptr [eax], 53h ; 'S'
0xA16C8B: jnz     short locret_A16C94
0xA16C8D: push    eax
0xA16C8E: call    FormHeapFree
0xA16C93: pop     ecx
0xA16C94: retn
