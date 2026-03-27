0xA16E80: push    offset flt_B02DD0
0xA16E85: mov     ecx, offset dword_B07CFC
0xA16E8A: call    BSSimpleList_Remove
0xA16E8F: mov     eax, off_B02DD4; "fLODFadeOutActorMultInterior:LOD"
0xA16E94: test    eax, eax
0xA16E96: jz      short locret_A16EA4
0xA16E98: cmp     byte ptr [eax], 53h ; 'S'
0xA16E9B: jnz     short locret_A16EA4
0xA16E9D: push    eax
0xA16E9E: call    FormHeapFree
0xA16EA3: pop     ecx
0xA16EA4: retn
