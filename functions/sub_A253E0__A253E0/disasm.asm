0xA253E0: push    offset byte_B148F4
0xA253E5: mov     ecx, offset dword_B07CFC
0xA253EA: call    BSSimpleList_Remove
0xA253EF: mov     eax, off_B148F8; "bDisableHeadTracking:General"
0xA253F4: test    eax, eax
0xA253F6: jz      short locret_A25404
0xA253F8: cmp     byte ptr [eax], 53h ; 'S'
0xA253FB: jnz     short locret_A25404
0xA253FD: push    eax
0xA253FE: call    FormHeapFree
0xA25403: pop     ecx
0xA25404: retn
