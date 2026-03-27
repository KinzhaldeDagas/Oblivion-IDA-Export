0xA1A1E0: push    offset flt_B07040
0xA1A1E5: mov     ecx, offset dword_B07CFC
0xA1A1EA: call    BSSimpleList_Remove
0xA1A1EF: mov     eax, off_B07044; "fSurfaceTileSize:Water"
0xA1A1F4: test    eax, eax
0xA1A1F6: jz      short locret_A1A204
0xA1A1F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A1FB: jnz     short locret_A1A204
0xA1A1FD: push    eax
0xA1A1FE: call    FormHeapFree
0xA1A203: pop     ecx
0xA1A204: retn
