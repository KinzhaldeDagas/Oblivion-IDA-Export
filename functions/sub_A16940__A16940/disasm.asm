0xA16940: push    offset off_B02CF0
0xA16945: mov     ecx, offset dword_B07CFC
0xA1694A: call    BSSimpleList_Remove
0xA1694F: mov     eax, off_B02CF4; "sStartingWorld:General"
0xA16954: test    eax, eax
0xA16956: jz      short locret_A16964
0xA16958: cmp     byte ptr [eax], 53h ; 'S'
0xA1695B: jnz     short locret_A16964
0xA1695D: push    eax
0xA1695E: call    FormHeapFree
0xA16963: pop     ecx
0xA16964: retn
