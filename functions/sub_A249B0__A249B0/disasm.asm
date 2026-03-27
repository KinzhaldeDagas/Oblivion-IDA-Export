0xA249B0: push    offset dword_B13994
0xA249B5: mov     ecx, offset dword_B07CFC
0xA249BA: call    BSSimpleList_Remove
0xA249BF: mov     eax, off_B13998; "iConsoleFont:Menu"
0xA249C4: test    eax, eax
0xA249C6: jz      short locret_A249D4
0xA249C8: cmp     byte ptr [eax], 53h ; 'S'
0xA249CB: jnz     short locret_A249D4
0xA249CD: push    eax
0xA249CE: call    FormHeapFree
0xA249D3: pop     ecx
0xA249D4: retn
