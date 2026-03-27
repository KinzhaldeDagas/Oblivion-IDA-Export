0xA19C20: push    offset dword_B06F2C
0xA19C25: mov     ecx, offset dword_B07CFC
0xA19C2A: call    BSSimpleList_Remove
0xA19C2F: mov     eax, off_B06F30; "iShadowFilter:Display"
0xA19C34: test    eax, eax
0xA19C36: jz      short locret_A19C44
0xA19C38: cmp     byte ptr [eax], 53h ; 'S'
0xA19C3B: jnz     short locret_A19C44
0xA19C3D: push    eax
0xA19C3E: call    FormHeapFree
0xA19C43: pop     ecx
0xA19C44: retn
