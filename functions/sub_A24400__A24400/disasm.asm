0xA24400: push    offset byte_B13208
0xA24405: mov     ecx, offset dword_B07CFC
0xA2440A: call    BSSimpleList_Remove
0xA2440F: mov     eax, off_B1320C; "bGeneralSubtitles:GamePlay"
0xA24414: test    eax, eax
0xA24416: jz      short locret_A24424
0xA24418: cmp     byte ptr [eax], 53h ; 'S'
0xA2441B: jnz     short locret_A24424
0xA2441D: push    eax
0xA2441E: call    FormHeapFree
0xA24423: pop     ecx
0xA24424: retn
