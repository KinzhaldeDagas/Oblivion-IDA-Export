0xA16460: push    offset bBackgroundKey
0xA16465: mov     ecx, offset dword_B07CFC
0xA1646A: call    BSSimpleList_Remove
0xA1646F: mov     eax, off_B02C38; "bBackground Keyboard:Controls"
0xA16474: test    eax, eax
0xA16476: jz      short locret_A16484
0xA16478: cmp     byte ptr [eax], 53h ; 'S'
0xA1647B: jnz     short locret_A16484
0xA1647D: push    eax
0xA1647E: call    FormHeapFree
0xA16483: pop     ecx
0xA16484: retn
