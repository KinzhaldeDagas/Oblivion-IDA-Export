0xA1BA50: push    offset dword_B08B9C
0xA1BA55: mov     ecx, offset dword_B07CFC
0xA1BA5A: call    BSSimpleList_Remove
0xA1BA5F: mov     eax, off_B08BA0; "iLandBorder2B:Landscape"
0xA1BA64: test    eax, eax
0xA1BA66: jz      short locret_A1BA74
0xA1BA68: cmp     byte ptr [eax], 53h ; 'S'
0xA1BA6B: jnz     short locret_A1BA74
0xA1BA6D: push    eax
0xA1BA6E: call    FormHeapFree
0xA1BA73: pop     ecx
0xA1BA74: retn
