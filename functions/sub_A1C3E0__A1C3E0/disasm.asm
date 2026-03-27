0xA1C3E0: push    offset mp3String
0xA1C3E5: mov     ecx, offset dword_B07CFC
0xA1C3EA: call    BSSimpleList_Remove
0xA1C3EF: mov     eax, off_B10D64; "sFileTypeGame:Voice"
0xA1C3F4: test    eax, eax
0xA1C3F6: jz      short locret_A1C404
0xA1C3F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C3FB: jnz     short locret_A1C404
0xA1C3FD: push    eax
0xA1C3FE: call    FormHeapFree
0xA1C403: pop     ecx
0xA1C404: retn
