0xA16D00: push    offset flt_B02D90
0xA16D05: mov     ecx, offset dword_B07CFC
0xA16D0A: call    BSSimpleList_Remove
0xA16D0F: mov     eax, off_B02D94; "fLODFadeOutObjectMultComplex:LOD"
0xA16D14: test    eax, eax
0xA16D16: jz      short locret_A16D24
0xA16D18: cmp     byte ptr [eax], 53h ; 'S'
0xA16D1B: jnz     short locret_A16D24
0xA16D1D: push    eax
0xA16D1E: call    FormHeapFree
0xA16D23: pop     ecx
0xA16D24: retn
