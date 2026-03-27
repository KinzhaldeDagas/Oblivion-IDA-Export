0xA18890: push    offset dword_B06AA8
0xA18895: mov     ecx, offset dword_B07CFC
0xA1889A: call    BSSimpleList_Remove
0xA1889F: mov     eax, off_B06AAC; "uGridDistantTreeRangeCity:General"
0xA188A4: test    eax, eax
0xA188A6: jz      short locret_A188B4
0xA188A8: cmp     byte ptr [eax], 53h ; 'S'
0xA188AB: jnz     short locret_A188B4
0xA188AD: push    eax
0xA188AE: call    FormHeapFree
0xA188B3: pop     ecx
0xA188B4: retn
