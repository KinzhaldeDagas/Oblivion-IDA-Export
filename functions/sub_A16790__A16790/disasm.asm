0xA16790: push    offset off_B02CA8
0xA16795: mov     ecx, offset dword_B07CFC
0xA1679A: call    BSSimpleList_Remove
0xA1679F: mov     eax, off_B02CAC; "sTestFile4:General"
0xA167A4: test    eax, eax
0xA167A6: jz      short locret_A167B4
0xA167A8: cmp     byte ptr [eax], 53h ; 'S'
0xA167AB: jnz     short locret_A167B4
0xA167AD: push    eax
0xA167AE: call    FormHeapFree
0xA167B3: pop     ecx
0xA167B4: retn
