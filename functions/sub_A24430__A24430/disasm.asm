0xA24430: push    offset byte_B13210
0xA24435: mov     ecx, offset dword_B07CFC
0xA2443A: call    BSSimpleList_Remove
0xA2443F: mov     eax, off_B13214; "bCrossHair:GamePlay"
0xA24444: test    eax, eax
0xA24446: jz      short locret_A24454
0xA24448: cmp     byte ptr [eax], 53h ; 'S'
0xA2444B: jnz     short locret_A24454
0xA2444D: push    eax
0xA2444E: call    FormHeapFree
0xA24453: pop     ecx
0xA24454: retn
