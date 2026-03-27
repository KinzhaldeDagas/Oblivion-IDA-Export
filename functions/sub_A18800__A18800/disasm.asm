0xA18800: push    offset GridDistantCount
0xA18805: mov     ecx, offset dword_B07CFC
0xA1880A: call    BSSimpleList_Remove
0xA1880F: mov     eax, off_B06A94; "uGridDistantCount:General"
0xA18814: test    eax, eax
0xA18816: jz      short locret_A18824
0xA18818: cmp     byte ptr [eax], 53h ; 'S'
0xA1881B: jnz     short locret_A18824
0xA1881D: push    eax
0xA1881E: call    FormHeapFree
0xA18823: pop     ecx
0xA18824: retn
