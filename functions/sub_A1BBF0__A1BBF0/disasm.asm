0xA1BBF0: push    offset byte_B097E0
0xA1BBF5: mov     ecx, offset dword_B07CFC
0xA1BBFA: call    BSSimpleList_Remove
0xA1BBFF: mov     eax, off_B097E4; "bDefaultCOCPlacement:General"
0xA1BC04: test    eax, eax
0xA1BC06: jz      short locret_A1BC14
0xA1BC08: cmp     byte ptr [eax], 53h ; 'S'
0xA1BC0B: jnz     short locret_A1BC14
0xA1BC0D: push    eax
0xA1BC0E: call    FormHeapFree
0xA1BC13: pop     ecx
0xA1BC14: retn
