0xA1A8E0: push    offset byte_B07634
0xA1A8E5: mov     ecx, offset dword_B07CFC
0xA1A8EA: call    BSSimpleList_Remove
0xA1A8EF: mov     eax, off_B07638; "bLODPopObjects:LOD"
0xA1A8F4: test    eax, eax
0xA1A8F6: jz      short locret_A1A904
0xA1A8F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A8FB: jnz     short locret_A1A904
0xA1A8FD: push    eax
0xA1A8FE: call    FormHeapFree
0xA1A903: pop     ecx
0xA1A904: retn
