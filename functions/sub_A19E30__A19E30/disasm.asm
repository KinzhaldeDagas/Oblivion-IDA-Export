0xA19E30: push    offset bDynamicWindowsReflection
0xA19E35: mov     ecx, offset dword_B07CFC
0xA19E3A: call    BSSimpleList_Remove
0xA19E3F: mov     eax, off_B06F88; "bDynamicWindowReflections:Display"
0xA19E44: test    eax, eax
0xA19E46: jz      short locret_A19E54
0xA19E48: cmp     byte ptr [eax], 53h ; 'S'
0xA19E4B: jnz     short locret_A19E54
0xA19E4D: push    eax
0xA19E4E: call    FormHeapFree
0xA19E53: pop     ecx
0xA19E54: retn
