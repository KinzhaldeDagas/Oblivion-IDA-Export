0xA1B7E0: push    offset byte_B08960
0xA1B7E5: mov     ecx, offset dword_B07CFC
0xA1B7EA: call    BSSimpleList_Remove
0xA1B7EF: mov     eax, off_B08964; "bBackgroundCellLoads:BackgroundLoad"
0xA1B7F4: test    eax, eax
0xA1B7F6: jz      short locret_A1B804
0xA1B7F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B7FB: jnz     short locret_A1B804
0xA1B7FD: push    eax
0xA1B7FE: call    FormHeapFree
0xA1B803: pop     ecx
0xA1B804: retn
