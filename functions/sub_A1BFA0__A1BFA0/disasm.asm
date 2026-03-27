0xA1BFA0: push    offset byte_B09B48
0xA1BFA5: mov     ecx, offset dword_B07CFC
0xA1BFAA: call    BSSimpleList_Remove
0xA1BFAF: mov     eax, off_B09B4C; "bForceHideLODLand:LOD"
0xA1BFB4: test    eax, eax
0xA1BFB6: jz      short locret_A1BFC4
0xA1BFB8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BFBB: jnz     short locret_A1BFC4
0xA1BFBD: push    eax
0xA1BFBE: call    FormHeapFree
0xA1BFC3: pop     ecx
0xA1BFC4: retn
