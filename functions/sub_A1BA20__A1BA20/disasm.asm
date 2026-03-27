0xA1BA20: push    offset dword_B08B94
0xA1BA25: mov     ecx, offset dword_B07CFC
0xA1BA2A: call    BSSimpleList_Remove
0xA1BA2F: mov     eax, off_B08B98; "iLandBorder2G:Landscape"
0xA1BA34: test    eax, eax
0xA1BA36: jz      short locret_A1BA44
0xA1BA38: cmp     byte ptr [eax], 53h ; 'S'
0xA1BA3B: jnz     short locret_A1BA44
0xA1BA3D: push    eax
0xA1BA3E: call    FormHeapFree
0xA1BA43: pop     ecx
0xA1BA44: retn
