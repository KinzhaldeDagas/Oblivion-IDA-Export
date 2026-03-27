0xA1D480: push    offset flt_B11E2C
0xA1D485: mov     ecx, offset dword_B07CFC
0xA1D48A: call    BSSimpleList_Remove
0xA1D48F: mov     eax, off_B11E30; "fSunBaseSize:Weather"
0xA1D494: test    eax, eax
0xA1D496: jz      short locret_A1D4A4
0xA1D498: cmp     byte ptr [eax], 53h ; 'S'
0xA1D49B: jnz     short locret_A1D4A4
0xA1D49D: push    eax
0xA1D49E: call    FormHeapFree
0xA1D4A3: pop     ecx
0xA1D4A4: retn
