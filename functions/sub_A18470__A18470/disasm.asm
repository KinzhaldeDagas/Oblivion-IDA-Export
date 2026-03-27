0xA18470: push    offset dword_B05BC4
0xA18475: mov     ecx, offset dword_B07CFC
0xA1847A: call    BSSimpleList_Remove
0xA1847F: mov     eax, off_B05BC8; "iSaveGameBackupCount:General"
0xA18484: test    eax, eax
0xA18486: jz      short locret_A18494
0xA18488: cmp     byte ptr [eax], 53h ; 'S'
0xA1848B: jnz     short locret_A18494
0xA1848D: push    eax
0xA1848E: call    FormHeapFree
0xA18493: pop     ecx
0xA18494: retn
