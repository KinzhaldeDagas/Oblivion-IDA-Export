0xA250E0: push    offset flt_B1485C
0xA250E5: mov     ecx, offset dword_B07CFC
0xA250EA: call    BSSimpleList_Remove
0xA250EF: mov     eax, off_B14860; "fGammaMin:Display"
0xA250F4: test    eax, eax
0xA250F6: jz      short locret_A25104
0xA250F8: cmp     byte ptr [eax], 53h ; 'S'
0xA250FB: jnz     short locret_A25104
0xA250FD: push    eax
0xA250FE: call    FormHeapFree
0xA25103: pop     ecx
0xA25104: retn
