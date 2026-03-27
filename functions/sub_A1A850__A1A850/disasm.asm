0xA1A850: push    offset SettingLODFadeOutMultObjects
0xA1A855: mov     ecx, offset dword_B07CFC
0xA1A85A: call    BSSimpleList_Remove
0xA1A85F: mov     eax, off_B07620; "fLODFadeOutMultObjects:LOD"
0xA1A864: test    eax, eax
0xA1A866: jz      short locret_A1A874
0xA1A868: cmp     byte ptr [eax], 53h ; 'S'
0xA1A86B: jnz     short locret_A1A874
0xA1A86D: push    eax
0xA1A86E: call    FormHeapFree
0xA1A873: pop     ecx
0xA1A874: retn
