0xA16E50: push    offset flt_B02DC8
0xA16E55: mov     ecx, offset dword_B07CFC
0xA16E5A: call    BSSimpleList_Remove
0xA16E5F: mov     eax, off_B02DCC; "fLODFadeOutItemMultInterior:LOD"
0xA16E64: test    eax, eax
0xA16E66: jz      short locret_A16E74
0xA16E68: cmp     byte ptr [eax], 53h ; 'S'
0xA16E6B: jnz     short locret_A16E74
0xA16E6D: push    eax
0xA16E6E: call    FormHeapFree
0xA16E73: pop     ecx
0xA16E74: retn
