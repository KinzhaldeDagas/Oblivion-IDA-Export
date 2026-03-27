0xA24F30: push    offset dword_B14814
0xA24F35: mov     ecx, offset dword_B07CFC
0xA24F3A: call    BSSimpleList_Remove
0xA24F3F: mov     eax, off_B14818; "fActorLODDefault:LOD"
0xA24F44: test    eax, eax
0xA24F46: jz      short locret_A24F54
0xA24F48: cmp     byte ptr [eax], 53h ; 'S'
0xA24F4B: jnz     short locret_A24F54
0xA24F4D: push    eax
0xA24F4E: call    FormHeapFree
0xA24F53: pop     ecx
0xA24F54: retn
