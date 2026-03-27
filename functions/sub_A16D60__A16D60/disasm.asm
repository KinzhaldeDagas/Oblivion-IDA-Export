0xA16D60: push    offset flt_B02DA0
0xA16D65: mov     ecx, offset dword_B07CFC
0xA16D6A: call    BSSimpleList_Remove
0xA16D6F: mov     eax, off_B02DA4; "fLODFadeOutActorMultComplex:LOD"
0xA16D74: test    eax, eax
0xA16D76: jz      short locret_A16D84
0xA16D78: cmp     byte ptr [eax], 53h ; 'S'
0xA16D7B: jnz     short locret_A16D84
0xA16D7D: push    eax
0xA16D7E: call    FormHeapFree
0xA16D83: pop     ecx
0xA16D84: retn
