0xA1A390: push    offset dword_B07088
0xA1A395: mov     ecx, offset dword_B07CFC
0xA1A39A: call    BSSimpleList_Remove
0xA1A39F: mov     eax, off_B0708C; "uSurfaceFrameCount:Water"
0xA1A3A4: test    eax, eax
0xA1A3A6: jz      short locret_A1A3B4
0xA1A3A8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A3AB: jnz     short locret_A1A3B4
0xA1A3AD: push    eax
0xA1A3AE: call    FormHeapFree
0xA1A3B3: pop     ecx
0xA1A3B4: retn
