0xA26030: push    offset flt_B16188
0xA26035: mov     ecx, offset dword_B07CFC
0xA2603A: call    BSSimpleList_Remove
0xA2603F: mov     eax, off_B1618C; "fMainMenuMusicVolume:Audio"
0xA26044: test    eax, eax
0xA26046: jz      short locret_A26054
0xA26048: cmp     byte ptr [eax], 53h ; 'S'
0xA2604B: jnz     short locret_A26054
0xA2604D: push    eax
0xA2604E: call    FormHeapFree
0xA26053: pop     ecx
0xA26054: retn
