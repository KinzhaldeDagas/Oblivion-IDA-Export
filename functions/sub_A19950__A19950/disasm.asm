0xA19950: push    offset flt_B06EB4
0xA19955: mov     ecx, offset dword_B07CFC
0xA1995A: call    BSSimpleList_Remove
0xA1995F: mov     eax, off_B06EB8; "fLightLOD2:Display"
0xA19964: test    eax, eax
0xA19966: jz      short locret_A19974
0xA19968: cmp     byte ptr [eax], 53h ; 'S'
0xA1996B: jnz     short locret_A19974
0xA1996D: push    eax
0xA1996E: call    FormHeapFree
0xA19973: pop     ecx
0xA19974: retn
