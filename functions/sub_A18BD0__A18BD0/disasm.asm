0xA18BD0: push    offset g_bFullScreen
0xA18BD5: mov     ecx, offset dword_B07CFC
0xA18BDA: call    BSSimpleList_Remove
0xA18BDF: mov     eax, off_B06C78; "bFull Screen:Display"
0xA18BE4: test    eax, eax
0xA18BE6: jz      short locret_A18BF4
0xA18BE8: cmp     byte ptr [eax], 53h ; 'S'
0xA18BEB: jnz     short locret_A18BF4
0xA18BED: push    eax
0xA18BEE: call    FormHeapFree
0xA18BF3: pop     ecx
0xA18BF4: retn
