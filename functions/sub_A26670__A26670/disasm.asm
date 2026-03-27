0xA26670: push    offset byte_B162EC
0xA26675: mov     ecx, offset dword_B07CFC
0xA2667A: call    BSSimpleList_Remove
0xA2667F: mov     eax, off_B162F0; "bUseSpeedForWeaponSwish:Audio"
0xA26684: test    eax, eax
0xA26686: jz      short locret_A26694
0xA26688: cmp     byte ptr [eax], 53h ; 'S'
0xA2668B: jnz     short locret_A26694
0xA2668D: push    eax
0xA2668E: call    FormHeapFree
0xA26693: pop     ecx
0xA26694: retn
