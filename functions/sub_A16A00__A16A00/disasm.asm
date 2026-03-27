0xA16A00: push    offset dword_B02D10
0xA16A05: mov     ecx, offset dword_B07CFC
0xA16A0A: call    BSSimpleList_Remove
0xA16A0F: mov     eax, off_B02D14; "iFPSClamp:General"
0xA16A14: test    eax, eax
0xA16A16: jz      short locret_A16A24
0xA16A18: cmp     byte ptr [eax], 53h ; 'S'
0xA16A1B: jnz     short locret_A16A24
0xA16A1D: push    eax
0xA16A1E: call    FormHeapFree
0xA16A23: pop     ecx
0xA16A24: retn
