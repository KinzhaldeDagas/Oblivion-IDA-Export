0xA250B0: push    offset flt_B14854
0xA250B5: mov     ecx, offset dword_B07CFC
0xA250BA: call    BSSimpleList_Remove
0xA250BF: mov     eax, off_B14858; "fObjectLODMax:LOD"
0xA250C4: test    eax, eax
0xA250C6: jz      short locret_A250D4
0xA250C8: cmp     byte ptr [eax], 53h ; 'S'
0xA250CB: jnz     short locret_A250D4
0xA250CD: push    eax
0xA250CE: call    FormHeapFree
0xA250D3: pop     ecx
0xA250D4: retn
