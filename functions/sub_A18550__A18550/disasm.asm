0xA18550: push    offset byte_B06310
0xA18555: mov     ecx, offset dword_B07CFC
0xA1855A: call    BSSimpleList_Remove
0xA1855F: mov     eax, off_B06314; "bWarnOnMissingFileEntry:General"
0xA18564: test    eax, eax
0xA18566: jz      short locret_A18574
0xA18568: cmp     byte ptr [eax], 53h ; 'S'
0xA1856B: jnz     short locret_A18574
0xA1856D: push    eax
0xA1856E: call    FormHeapFree
0xA18573: pop     ecx
0xA18574: retn
