0xA17D20: push    offset uExteriorCellBuffer
0xA17D25: mov     ecx, offset dword_B07CFC
0xA17D2A: call    BSSimpleList_Remove
0xA17D2F: mov     eax, off_B051E0; "uExterior Cell Buffer:General"
0xA17D34: test    eax, eax
0xA17D36: jz      short locret_A17D44
0xA17D38: cmp     byte ptr [eax], 53h ; 'S'
0xA17D3B: jnz     short locret_A17D44
0xA17D3D: push    eax
0xA17D3E: call    FormHeapFree
0xA17D43: pop     ecx
0xA17D44: retn
