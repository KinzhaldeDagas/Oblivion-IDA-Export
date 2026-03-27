0xA1A880: push    offset SettingLODFadeOutMultItems
0xA1A885: mov     ecx, offset dword_B07CFC
0xA1A88A: call    BSSimpleList_Remove
0xA1A88F: mov     eax, off_B07628; "fLODFadeOutMultItems:LOD"
0xA1A894: test    eax, eax
0xA1A896: jz      short locret_A1A8A4
0xA1A898: cmp     byte ptr [eax], 53h ; 'S'
0xA1A89B: jnz     short locret_A1A8A4
0xA1A89D: push    eax
0xA1A89E: call    FormHeapFree
0xA1A8A3: pop     ecx
0xA1A8A4: retn
