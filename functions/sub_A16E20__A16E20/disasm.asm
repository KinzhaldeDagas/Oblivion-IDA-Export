0xA16E20: push    offset flt_B02DC0
0xA16E25: mov     ecx, offset dword_B07CFC
0xA16E2A: call    BSSimpleList_Remove
0xA16E2F: mov     eax, off_B02DC4; "fLODFadeOutObjectMultInterior:LOD"
0xA16E34: test    eax, eax
0xA16E36: jz      short locret_A16E44
0xA16E38: cmp     byte ptr [eax], 53h ; 'S'
0xA16E3B: jnz     short locret_A16E44
0xA16E3D: push    eax
0xA16E3E: call    FormHeapFree
0xA16E43: pop     ecx
0xA16E44: retn
