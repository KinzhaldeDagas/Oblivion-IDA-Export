0xA181E0: push    offset byte_B0558C
0xA181E5: mov     ecx, offset dword_B07CFC
0xA181EA: call    BSSimpleList_Remove
0xA181EF: mov     eax, off_B05590; "bFileCheckModelCollision:TestAllCells"
0xA181F4: test    eax, eax
0xA181F6: jz      short locret_A18204
0xA181F8: cmp     byte ptr [eax], 53h ; 'S'
0xA181FB: jnz     short locret_A18204
0xA181FD: push    eax
0xA181FE: call    FormHeapFree
0xA18203: pop     ecx
0xA18204: retn
