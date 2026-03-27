0xA182A0: push    offset byte_B055AC
0xA182A5: mov     ecx, offset dword_B07CFC
0xA182AA: call    BSSimpleList_Remove
0xA182AF: mov     eax, off_B055B0; "bFileSkipIconChecks:TestAllCells"
0xA182B4: test    eax, eax
0xA182B6: jz      short locret_A182C4
0xA182B8: cmp     byte ptr [eax], 53h ; 'S'
0xA182BB: jnz     short locret_A182C4
0xA182BD: push    eax
0xA182BE: call    FormHeapFree
0xA182C3: pop     ecx
0xA182C4: retn
