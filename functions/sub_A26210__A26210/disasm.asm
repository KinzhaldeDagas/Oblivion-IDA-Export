0xA26210: push    offset flt_B161D8
0xA26215: mov     ecx, offset dword_B07CFC
0xA2621A: call    BSSimpleList_Remove
0xA2621F: mov     eax, off_B161DC; "fDSoundRolloffFactor:Audio"
0xA26224: test    eax, eax
0xA26226: jz      short locret_A26234
0xA26228: cmp     byte ptr [eax], 53h ; 'S'
0xA2622B: jnz     short locret_A26234
0xA2622D: push    eax
0xA2622E: call    FormHeapFree
0xA26233: pop     ecx
0xA26234: retn
