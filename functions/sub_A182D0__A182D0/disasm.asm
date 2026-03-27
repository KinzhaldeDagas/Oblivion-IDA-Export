0xA182D0: push    offset byte_B055B4
0xA182D5: mov     ecx, offset dword_B07CFC
0xA182DA: call    BSSimpleList_Remove
0xA182DF: mov     eax, off_B055B8; "bFileShowIcons:TestAllCells"
0xA182E4: test    eax, eax
0xA182E6: jz      short locret_A182F4
0xA182E8: cmp     byte ptr [eax], 53h ; 'S'
0xA182EB: jnz     short locret_A182F4
0xA182ED: push    eax
0xA182EE: call    FormHeapFree
0xA182F3: pop     ecx
0xA182F4: retn
