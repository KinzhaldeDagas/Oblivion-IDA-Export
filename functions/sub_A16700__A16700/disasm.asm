0xA16700: push    offset off_B02C90
0xA16705: mov     ecx, offset dword_B07CFC
0xA1670A: call    BSSimpleList_Remove
0xA1670F: mov     eax, off_B02C94; "sTestFile1:General"
0xA16714: test    eax, eax
0xA16716: jz      short locret_A16724
0xA16718: cmp     byte ptr [eax], 53h ; 'S'
0xA1671B: jnz     short locret_A16724
0xA1671D: push    eax
0xA1671E: call    FormHeapFree
0xA16723: pop     ecx
0xA16724: retn
