0xA1D3B0: push    offset byte_B11DE4
0xA1D3B5: mov     ecx, offset dword_B07CFC
0xA1D3BA: call    BSSimpleList_Remove
0xA1D3BF: mov     eax, off_B11DE8; "bPrecipitation:Weather"
0xA1D3C4: test    eax, eax
0xA1D3C6: jz      short locret_A1D3D4
0xA1D3C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D3CB: jnz     short locret_A1D3D4
0xA1D3CD: push    eax
0xA1D3CE: call    FormHeapFree
0xA1D3D3: pop     ecx
0xA1D3D4: retn
