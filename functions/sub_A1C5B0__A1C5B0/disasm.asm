0xA1C5B0: push    offset iSimTypeHavok
0xA1C5B5: mov     ecx, offset dword_B07CFC
0xA1C5BA: call    BSSimpleList_Remove
0xA1C5BF: mov     eax, off_B1163C; "iSimType:HAVOK"
0xA1C5C4: test    eax, eax
0xA1C5C6: jz      short locret_A1C5D4
0xA1C5C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C5CB: jnz     short locret_A1C5D4
0xA1C5CD: push    eax
0xA1C5CE: call    FormHeapFree
0xA1C5D3: pop     ecx
0xA1C5D4: retn
