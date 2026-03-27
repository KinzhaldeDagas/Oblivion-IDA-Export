0xA16DF0: push    offset flt_B02DB8
0xA16DF5: mov     ecx, offset dword_B07CFC
0xA16DFA: call    BSSimpleList_Remove
0xA16DFF: mov     eax, off_B02DBC; "fLODFadeOutActorMultCity:LOD"
0xA16E04: test    eax, eax
0xA16E06: jz      short locret_A16E14
0xA16E08: cmp     byte ptr [eax], 53h ; 'S'
0xA16E0B: jnz     short locret_A16E14
0xA16E0D: push    eax
0xA16E0E: call    FormHeapFree
0xA16E13: pop     ecx
0xA16E14: retn
