0xA16430: push    offset bUseJoystick
0xA16435: mov     ecx, offset dword_B07CFC
0xA1643A: call    BSSimpleList_Remove
0xA1643F: mov     eax, off_B02C30; "bUse Joystick:Controls"
0xA16444: test    eax, eax
0xA16446: jz      short locret_A16454
0xA16448: cmp     byte ptr [eax], 53h ; 'S'
0xA1644B: jnz     short locret_A16454
0xA1644D: push    eax
0xA1644E: call    FormHeapFree
0xA16453: pop     ecx
0xA16454: retn
