0xA18150: push    offset off_B05574; "One of the files that \"%s\" is depende"...
0xA18155: mov     ecx, offset dword_B07CFC
0xA1815A: call    BSSimpleList_Remove
0xA1815F: mov     eax, off_B05578; "sMasterMismatchWarning:GeneralWarnings"
0xA18164: test    eax, eax
0xA18166: jz      short locret_A18174
0xA18168: cmp     byte ptr [eax], 53h ; 'S'
0xA1816B: jnz     short locret_A18174
0xA1816D: push    eax
0xA1816E: call    FormHeapFree
0xA18173: pop     ecx
0xA18174: retn
