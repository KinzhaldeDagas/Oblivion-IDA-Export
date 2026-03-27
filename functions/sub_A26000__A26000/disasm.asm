0xA26000: push    offset MusicEnabled
0xA26005: mov     ecx, offset dword_B07CFC
0xA2600A: call    BSSimpleList_Remove
0xA2600F: mov     eax, off_B16184; "bMusicEnabled:Audio"
0xA26014: test    eax, eax
0xA26016: jz      short locret_A26024
0xA26018: cmp     byte ptr [eax], 53h ; 'S'
0xA2601B: jnz     short locret_A26024
0xA2601D: push    eax
0xA2601E: call    FormHeapFree
0xA26023: pop     ecx
0xA26024: retn
