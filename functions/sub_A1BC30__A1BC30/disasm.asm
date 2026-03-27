0xA1BC30: push    offset preventHavokAddClutter
0xA1BC35: mov     ecx, offset dword_B07CFC
0xA1BC3A: call    BSSimpleList_Remove
0xA1BC3F: mov     eax, off_B0986C; "bPreventHavokAddClutter:HAVOK"
0xA1BC44: test    eax, eax
0xA1BC46: jz      short locret_A1BC54
0xA1BC48: cmp     byte ptr [eax], 53h ; 'S'
0xA1BC4B: jnz     short locret_A1BC54
0xA1BC4D: push    eax
0xA1BC4E: call    FormHeapFree
0xA1BC53: pop     ecx
0xA1BC54: retn
