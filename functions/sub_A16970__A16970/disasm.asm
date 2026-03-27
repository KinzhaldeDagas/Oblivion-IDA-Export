0xA16970: push    offset off_B02CF8
0xA16975: mov     ecx, offset dword_B07CFC
0xA1697A: call    BSSimpleList_Remove
0xA1697F: mov     eax, off_B02CFC; "sStartingCellX:General"
0xA16984: test    eax, eax
0xA16986: jz      short locret_A16994
0xA16988: cmp     byte ptr [eax], 53h ; 'S'
0xA1698B: jnz     short locret_A16994
0xA1698D: push    eax
0xA1698E: call    FormHeapFree
0xA16993: pop     ecx
0xA16994: retn
