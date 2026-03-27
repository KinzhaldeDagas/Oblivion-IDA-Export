0xA23490: push    offset dword_B120F4
0xA23495: mov     ecx, offset dword_B07CFC
0xA2349A: call    BSSimpleList_Remove
0xA2349F: mov     eax, off_B120F8; "uiFaceGenMaxEGTDataSize:General"
0xA234A4: test    eax, eax
0xA234A6: jz      short locret_A234B4
0xA234A8: cmp     byte ptr [eax], 53h ; 'S'
0xA234AB: jnz     short locret_A234B4
0xA234AD: push    eax
0xA234AE: call    FormHeapFree
0xA234B3: pop     ecx
0xA234B4: retn
