0xA18610: push    offset dword_B06548
0xA18615: mov     ecx, offset dword_B07CFC
0xA1861A: call    BSSimpleList_Remove
0xA1861F: mov     eax, off_B0654C; "iAnimationClonePerLoop:BackgroundLoad"
0xA18624: test    eax, eax
0xA18626: jz      short locret_A18634
0xA18628: cmp     byte ptr [eax], 53h ; 'S'
0xA1862B: jnz     short locret_A18634
0xA1862D: push    eax
0xA1862E: call    FormHeapFree
0xA18633: pop     ecx
0xA18634: retn
