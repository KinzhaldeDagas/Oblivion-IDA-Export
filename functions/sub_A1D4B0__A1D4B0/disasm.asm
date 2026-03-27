0xA1D4B0: push    offset flt_B11E34
0xA1D4B5: mov     ecx, offset dword_B07CFC
0xA1D4BA: call    BSSimpleList_Remove
0xA1D4BF: mov     eax, off_B11E38; "fSunGlareSize:Weather"
0xA1D4C4: test    eax, eax
0xA1D4C6: jz      short locret_A1D4D4
0xA1D4C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D4CB: jnz     short locret_A1D4D4
0xA1D4CD: push    eax
0xA1D4CE: call    FormHeapFree
0xA1D4D3: pop     ecx
0xA1D4D4: retn
