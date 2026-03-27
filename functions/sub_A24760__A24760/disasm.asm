0xA24760: push    offset flt_B135D8
0xA24765: mov     ecx, offset dword_B07CFC
0xA2476A: call    BSSimpleList_Remove
0xA2476F: mov     eax, off_B135DC; "fMenuPlayerLightAmbientBlue:Interface"
0xA24774: test    eax, eax
0xA24776: jz      short locret_A24784
0xA24778: cmp     byte ptr [eax], 53h ; 'S'
0xA2477B: jnz     short locret_A24784
0xA2477D: push    eax
0xA2477E: call    FormHeapFree
0xA24783: pop     ecx
0xA24784: retn
