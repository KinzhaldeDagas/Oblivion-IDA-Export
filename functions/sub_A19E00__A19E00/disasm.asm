0xA19E00: push    offset flt_B06F7C
0xA19E05: mov     ecx, offset dword_B07CFC
0xA19E0A: call    BSSimpleList_Remove
0xA19E0F: mov     eax, off_B06F80; "fShadowFadeTime:Display"
0xA19E14: test    eax, eax
0xA19E16: jz      short locret_A19E24
0xA19E18: cmp     byte ptr [eax], 53h ; 'S'
0xA19E1B: jnz     short locret_A19E24
0xA19E1D: push    eax
0xA19E1E: call    FormHeapFree
0xA19E23: pop     ecx
0xA19E24: retn
