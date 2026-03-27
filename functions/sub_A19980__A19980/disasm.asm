0xA19980: push    offset flt_B06EBC
0xA19985: mov     ecx, offset dword_B07CFC
0xA1998A: call    BSSimpleList_Remove
0xA1998F: mov     eax, off_B06EC0; "fShadowLOD1:Display"
0xA19994: test    eax, eax
0xA19996: jz      short locret_A199A4
0xA19998: cmp     byte ptr [eax], 53h ; 'S'
0xA1999B: jnz     short locret_A199A4
0xA1999D: push    eax
0xA1999E: call    FormHeapFree
0xA199A3: pop     ecx
0xA199A4: retn
