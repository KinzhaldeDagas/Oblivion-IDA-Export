0xA26610: push    offset fMediumWeaponSpeedMax_Audio
0xA26615: mov     ecx, offset dword_B07CFC
0xA2661A: call    BSSimpleList_Remove
0xA2661F: mov     eax, off_B162E0; "fMediumWeaponSpeedMax:Audio"
0xA26624: test    eax, eax
0xA26626: jz      short locret_A26634
0xA26628: cmp     byte ptr [eax], 53h ; 'S'
0xA2662B: jnz     short locret_A26634
0xA2662D: push    eax
0xA2662E: call    FormHeapFree
0xA26633: pop     ecx
0xA26634: retn
