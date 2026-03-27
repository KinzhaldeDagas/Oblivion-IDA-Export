0xA18F90: push    offset bAllowScreenShot
0xA18F95: mov     ecx, offset dword_B07CFC
0xA18F9A: call    BSSimpleList_Remove
0xA18F9F: mov     eax, off_B06D18; "bAllowScreenShot:Display"
0xA18FA4: test    eax, eax
0xA18FA6: jz      short locret_A18FB4
0xA18FA8: cmp     byte ptr [eax], 53h ; 'S'
0xA18FAB: jnz     short locret_A18FB4
0xA18FAD: push    eax
0xA18FAE: call    FormHeapFree
0xA18FB3: pop     ecx
0xA18FB4: retn
