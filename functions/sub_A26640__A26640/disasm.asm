0xA26640: push    offset fLargeWeaponSpeedMax_Audio
0xA26645: mov     ecx, offset dword_B07CFC
0xA2664A: call    BSSimpleList_Remove
0xA2664F: mov     eax, off_B162E8; "fLargeWeaponSpeedMax:Audio"
0xA26654: test    eax, eax
0xA26656: jz      short locret_A26664
0xA26658: cmp     byte ptr [eax], 53h ; 'S'
0xA2665B: jnz     short locret_A26664
0xA2665D: push    eax
0xA2665E: call    FormHeapFree
0xA26663: pop     ecx
0xA26664: retn
