0xA26740: push    offset flt_B23C50
0xA26745: mov     ecx, offset dword_B07CFC
0xA2674A: call    BSSimpleList_Remove
0xA2674F: mov     eax, off_B23C54; "fMinSoundVel:Audio"
0xA26754: test    eax, eax
0xA26756: jz      short locret_A26764
0xA26758: cmp     byte ptr [eax], 53h ; 'S'
0xA2675B: jnz     short locret_A26764
0xA2675D: push    eax
0xA2675E: call    FormHeapFree
0xA26763: pop     ecx
0xA26764: retn
