0xA26430: push    offset dword_B1628C
0xA26435: mov     ecx, offset dword_B07CFC
0xA2643A: call    BSSimpleList_Remove
0xA2643F: mov     eax, off_B16290; "fChainMediumMassMin:Audio"
0xA26444: test    eax, eax
0xA26446: jz      short locret_A26454
0xA26448: cmp     byte ptr [eax], 53h ; 'S'
0xA2644B: jnz     short locret_A26454
0xA2644D: push    eax
0xA2644E: call    FormHeapFree
0xA26453: pop     ecx
0xA26454: retn
