0xA1B990: push    offset dword_B08B7C
0xA1B995: mov     ecx, offset dword_B07CFC
0xA1B99A: call    BSSimpleList_Remove
0xA1B99F: mov     eax, off_B08B80; "iLandBorder1G:Landscape"
0xA1B9A4: test    eax, eax
0xA1B9A6: jz      short locret_A1B9B4
0xA1B9A8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B9AB: jnz     short locret_A1B9B4
0xA1B9AD: push    eax
0xA1B9AE: call    FormHeapFree
0xA1B9B3: pop     ecx
0xA1B9B4: retn
