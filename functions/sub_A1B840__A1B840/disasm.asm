0xA1B840: push    offset flt_B08B44
0xA1B845: mov     ecx, offset dword_B07CFC
0xA1B84A: call    BSSimpleList_Remove
0xA1B84F: mov     eax, off_B08B48; "fLandTextureTilingMult:Landscape"
0xA1B854: test    eax, eax
0xA1B856: jz      short locret_A1B864
0xA1B858: cmp     byte ptr [eax], 53h ; 'S'
0xA1B85B: jnz     short locret_A1B864
0xA1B85D: push    eax
0xA1B85E: call    FormHeapFree
0xA1B863: pop     ecx
0xA1B864: retn
