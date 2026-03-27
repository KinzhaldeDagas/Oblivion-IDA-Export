0xA18AE0: push    offset bBlockMessageBoxes_MESSAGES
0xA18AE5: mov     ecx, offset dword_B07CFC
0xA18AEA: call    BSSimpleList_Remove
0xA18AEF: mov     eax, off_B06B3C; "bBlockMessageBoxes:MESSAGES"
0xA18AF4: test    eax, eax
0xA18AF6: jz      short locret_A18B04
0xA18AF8: cmp     byte ptr [eax], 53h ; 'S'
0xA18AFB: jnz     short locret_A18B04
0xA18AFD: push    eax
0xA18AFE: call    FormHeapFree
0xA18B03: pop     ecx
0xA18B04: retn
