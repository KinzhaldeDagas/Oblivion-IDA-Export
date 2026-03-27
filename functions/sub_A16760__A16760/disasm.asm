0xA16760: push    offset off_B02CA0
0xA16765: mov     ecx, offset dword_B07CFC
0xA1676A: call    BSSimpleList_Remove
0xA1676F: mov     eax, off_B02CA4; "sTestFile3:General"
0xA16774: test    eax, eax
0xA16776: jz      short locret_A16784
0xA16778: cmp     byte ptr [eax], 53h ; 'S'
0xA1677B: jnz     short locret_A16784
0xA1677D: push    eax
0xA1677E: call    FormHeapFree
0xA16783: pop     ecx
0xA16784: retn
