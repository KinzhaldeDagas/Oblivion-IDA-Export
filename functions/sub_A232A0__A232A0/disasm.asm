0xA232A0: push    offset bFaceMipmaps
0xA232A5: mov     ecx, offset dword_B07CFC
0xA232AA: call    BSSimpleList_Remove
0xA232AF: mov     eax, off_B11F90; "bFaceMipMaps:General"
0xA232B4: test    eax, eax
0xA232B6: jz      short locret_A232C4
0xA232B8: cmp     byte ptr [eax], 53h ; 'S'
0xA232BB: jnz     short locret_A232C4
0xA232BD: push    eax
0xA232BE: call    FormHeapFree
0xA232C3: pop     ecx
0xA232C4: retn
